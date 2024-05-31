/*******************************************************************************
*
* E M B E D D E D   W I Z A R D   P R O J E C T
*
*                                                Copyright (c) TARA Systems GmbH
*                                    written by Paul Banach and Manfred Schweyer
*
********************************************************************************
*
* This software is delivered "as is" and shows the usage of other software
* components. It is provided as an example software which is intended to be
* modified and extended according to particular requirements.
*
* TARA Systems hereby disclaims all warranties and conditions with regard to the
* software, including all implied warranties and conditions of merchantability
* and non-infringement of any third party IPR or other rights which may result
* from the use or the inability to use the software.
*
********************************************************************************
*
* DESCRIPTION:
*   This file provides some operating system wrapper macros.
*
*******************************************************************************/

#include "ewconfig.h"
#include "ew_bsp_os.h"
#include <system/time/sys_time.h>

#define OPERATING_SYSTEM_STRING "bare-metal"

volatile unsigned long EwBspOsTick = 0;
extern void PIT_DelayMs(unsigned int delay_ms);
/*******************************************************************************
* FUNCTION:
*   EwBspOsGetName
*
* DESCRIPTION:
*   The function EwBspOsGetName returns the name of the operating system.
*
* ARGUMENTS:
*   None
*
* RETURN VALUE:
*   The name of the operating system.
*
*******************************************************************************/
const char* EwBspOsGetName( void )
{
  return OPERATING_SYSTEM_STRING;
}


/*******************************************************************************
* FUNCTION:
*   EwBspOsSystickHandler
*
* DESCRIPTION:
*   The function EwBspOsSystickHandler handles the tick increment of the operating
*   system. It has to be called on every millisecond. It can be called directly
*   from interrupt service routine (ISR).
*
* ARGUMENTS:
*   None
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
void EwBspOsSystickHandler( void )
{
  ;
}


/*******************************************************************************
* FUNCTION:
*   EwBspOsGetTicks
*
* DESCRIPTION:
*   The function EwBspOsGetTicks returns the system ticks in milliseconds.
*   The system tick counter wraps around every 2^32's tick.
*
* ARGUMENTS:
*   None
*
* RETURN VALUE:
*   The system Ticks.
*
*******************************************************************************/
unsigned long EwBspOsGetTicks( void )
{
    return SYS_TIME_Counter64Get()/SYS_TIME_MSToCount(1); //1Tick = 1ms
}


/*******************************************************************************
* FUNCTION:
*   EwBspOsDelay
*
* DESCRIPTION:
*   The function EwBspOsDelay delays the own thread by the given milliseconds
*   and allows the OS scheduler to process other threads.
*
* ARGUMENTS:
*   aDelayTime - The delay time in milliseconds.
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
void EwBspOsDelay( unsigned int aDelayTime )
{
    SYS_TIME_HANDLE timer = SYS_TIME_HANDLE_INVALID;
    if (SYS_TIME_DelayMS(aDelayTime, &timer) == SYS_TIME_SUCCESS)
    {          
        while (SYS_TIME_DelayIsComplete(timer) == false);
    }
}


#if EW_USE_OPERATING_SYSTEM == 1

/*******************************************************************************
* FUNCTION:
*   EwBspOsThreadCreate
*
* DESCRIPTION:
*   The function EwBspOsThreadCreate creates a thread using the provided thread
*   function, priority, stack size and context.
*
* ARGUMENTS:
*   aFunct     - The thread function.
*   aPrio      - The thread priority.
*   aStackSize - The maximum stack size needed by the thread.
*   aContext   - The context that is passed to the thread function.
*
* RETURN VALUE:
*   The thread handle (XThreadHandle)
*
*******************************************************************************/
XThreadHandle EwBspOsThreadCreate( XThreadFunct aFunct, int aPrio, int aStackSize, void* aContext )
{
  osPriority threadPriority;

  switch ( aPrio )
  {
    case EW_BSP_OS_THREAD_PRIORITY_LOW:  threadPriority = osPriorityLow; break;
    case EW_BSP_OS_THREAD_PRIORITY_HIGH: threadPriority = osPriorityHigh; break;
    default:                             threadPriority = osPriorityNormal; break;

  }

  osThreadDef( aFunct, aFunct, threadPriority, 0, aStackSize / 4 );
  return osThreadCreate( osThread( aFunct ), (void*)aContext );
}


/*******************************************************************************
* FUNCTION:
*   EwBspOsThreadDestroy
*
* DESCRIPTION:
*   The function EwBspOsThreadDestroy destroys a thread and frees all related
*   resources.
*
* ARGUMENTS:
*   aHandle - The handle of the thread (XThreadHandle).
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
void EwBspOsThreadDestroy( XThreadHandle aHandle )
{
  osThreadTerminate( aHandle );
}


/*******************************************************************************
* FUNCTION:
*   EwBspOsThreadGetHandle
*
* DESCRIPTION:
*   The function EwBspOsThreadGetHandle returns the own thread handle.
*
* ARGUMENTS:
*   None
*
* RETURN VALUE:
*   The thread handle (XThreadHandle).
*
*******************************************************************************/
XThreadHandle EwBspOsThreadGetHandle( void )
{
  return osThreadGetId();
}


/*******************************************************************************
* FUNCTION:
*   EwBspOsSignalWait
*
* DESCRIPTION:
*   The function EwBspOsSignalWait waits until all specified signal flags are set
*   or until any single flag is set, if no flag is specified.
*   EwBspOsSignalWait returns at the latest after the provided timeout value
*   (aTimeout=0 means no timeout).
*
* ARGUMENTS:
*   aSignalFlags  - The bit field of signal flags EwBspOsSignalWait has to wait
*                   for.
*   aTimeout      - The latest time in milliseconds EwBspOsSignalWait returns.
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
void EwBspOsSignalWait( unsigned int aSignalFlags, unsigned int aTimeout )
{
  osSignalWait( aSignalFlags, aTimeout );
}


/*******************************************************************************
* FUNCTION:
*   EwBspOsSignalSet
*
* DESCRIPTION:
*   The function EwBspOsSignalSet sets one or more signal flags. It can be called
*   from threads and interrupt service routines (ISR).
*
* ARGUMENTS:
*   aThreadHandle - The thread handle (XThreadHandle) were the given signal
*                   flags has to be set.
*   aSignalFlags  - The bit field of signal flags to be set.
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
void EwBspOsSignalSet( XThreadHandle aThreadHandle, unsigned int aSignalFlags )
{
  osSignalSet( aThreadHandle, aSignalFlags );
}


/*******************************************************************************
* FUNCTION:
*   EwBspOsSemaphoreCreate
*
* DESCRIPTION:
*   The function EwBspOsSemaphoreCreate creates a semaphore using the provided
*   semaphore definition and initial value.
*
* ARGUMENTS:
*   aMaxCount     - The maximum count for the semaphore object.
*   aInitialValue - The initial value of the semaphore.
*
* RETURN VALUE:
*   The semaphore handle (XSemaphoreHandle).
*
*******************************************************************************/
XSemaphoreHandle EwBspOsSemaphoreCreate( int aMaxCount, int aInitialValue )
{
  XSemaphoreHandle sem;
  osSemaphoreDef( EwSem );

  if ( aInitialValue > aMaxCount )
    return 0;

  sem = osSemaphoreCreate( osSemaphore( EwSem ), aMaxCount );
  if ( sem )
  {
    /* set initial value */
    int i;
    for ( i = 0; i < ( aMaxCount - aInitialValue ); i++ )
    {
      if ( osSemaphoreWait( sem, 0 ) != osOK)
      {
        osSemaphoreDelete( sem );
        return 0;
      }
    }
  }
  return sem;
}


/*******************************************************************************
* FUNCTION:
*   EwBspOsSemaphoreWait
*
* DESCRIPTION:
*   The function EwBspOsSemaphoreWait waits until a semaphore token becomes
*   available. It returns at the latest after the provided timeout value
*   (aTimeout=0 means no timeout).
*
* ARGUMENTS:
*   aHandle  - The semaphore handle (XSemaphoreHandle).
*   aTimeout - The latest time in milliseconds EwBspOsSemaphoreWait returns.
*
* RETURN VALUE:
*   Returns 1, if a token is available, otherwise 0.
*
*******************************************************************************/
int EwBspOsSemaphoreWait( XSemaphoreHandle aHandle, int aTimeout )
{
  return osSemaphoreWait( aHandle, aTimeout );
}


/*******************************************************************************
* FUNCTION:
*   EwBspOsSemaphoreRelease
*
* DESCRIPTION:
*   The function EwBspOsSemaphoreRelease releases a semaphore token.
*
* ARGUMENTS:
*   aHandle  - The semaphore handle (XSemaphoreHandle).
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
void EwBspOsSemaphoreRelease( XSemaphoreHandle aHandle )
{
  osSemaphoreRelease( aHandle );
}


/*******************************************************************************
* FUNCTION:
*   EwBspOsSemaphoreDestroy
*
* DESCRIPTION:
*   The function EwBspOsSemaphoreDestroy destroys a semaphore and frees all related
*   resources.
*
* ARGUMENTS:
*   aHandle - The handle of the semaphore to destroy (XSemaphoreHandle).
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
void EwBspOsSemaphoreDestroy( XSemaphoreHandle aHandle )
{
  osSemaphoreDelete( aHandle );
}


/*******************************************************************************
* FUNCTION:
*   EwBspOsStartScheduler
*
* DESCRIPTION:
*   The function EwBspOsStartScheduler starts the scheduler of the operating system.
*
* ARGUMENTS:
*   None
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
void EwBspOsStartScheduler( void )
{
  osKernelStart();
}

#endif /* EW_USE_OPERATING_SYSTEM */


/* mli */
