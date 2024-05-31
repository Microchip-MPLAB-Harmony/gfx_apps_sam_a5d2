/*******************************************************************************
  MPLAB Harmony Application Source File

  Company:
    Microchip Technology Inc.

  File Name:
    app.c

  Summary:
    This file contains the source code for the MPLAB Harmony application.

  Description:
    This file contains the source code for the MPLAB Harmony application.  It
    implements the logic of the application's state machine and it may call
    API routines of other MPLAB Harmony modules in the system, such as drivers,
    system services, and middleware.  However, it does not call any of the
    system interfaces (such as the "Initialize" and "Tasks" functions) of any of
    the modules in the system or make any assumptions about when those functions
    are called.  That is the responsibility of the configuration-specific system
    files.
 *******************************************************************************/

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************

#include "app.h"
#include "definitions.h"
#include "ewconfig.h"
#include "ewmain.h"
#include "ew_bsp_console.h"
#include "ewrte.h"
#include "ew_bsp_display.h"
#include "ew_bsp_touch.h"
#include "system/input/sys_input.h"
#include "peripheral/uart/plib_uart0.h"
#include "gfx/driver/gfx_driver.h"


// *****************************************************************************
// *****************************************************************************
// Section: Global Data Definitions
// *****************************************************************************
// *****************************************************************************
 gfxIOCTLArg_LayerValue ioctlArg;
 XTouchEvent aTouchEvent;
 SYS_INP_InputListener appInputListener;
 char initialization[] = "**** Init done ****\r\n";
// *****************************************************************************
/* Application Data

  Summary:
    Holds application data

  Description:
    This structure holds the application's data.

  Remarks:
    This structure should be initialized by the APP_Initialize function.

    Application strings and buffers are be defined outside this structure.
*/

APP_DATA appData;

// *****************************************************************************
// *****************************************************************************
// Section: Application Callback Functions
// *****************************************************************************
// *****************************************************************************
static void touchDownHandler(const SYS_INP_TouchStateEvent* const evt)
{
	aTouchEvent.State= EW_BSP_TOUCH_DOWN;
    aTouchEvent.XPos  = evt->x;
    aTouchEvent.YPos   = evt->y;
    aTouchEvent.Finger = evt->index;
    EwBspTouchEventHandler(&aTouchEvent);
}

static void touchUpHandler(const SYS_INP_TouchStateEvent* const evt)
{
    aTouchEvent.State= EW_BSP_TOUCH_UP;
    aTouchEvent.XPos  = evt->x;
    aTouchEvent.YPos   = evt->y;
    aTouchEvent.Finger = evt->index;
    EwBspTouchEventHandler(&aTouchEvent);
}

static void touchMoveHandler(const SYS_INP_TouchMoveEvent* const evt)
{
    aTouchEvent.State= EW_BSP_TOUCH_MOVE;
    aTouchEvent.XPos  = evt->x;
    aTouchEvent.YPos   = evt->y;
    aTouchEvent.Finger = evt->index;
    EwBspTouchEventHandler(&aTouchEvent);
}

// *****************************************************************************
// *****************************************************************************
// Section: Application Local Functions
// *****************************************************************************
// *****************************************************************************


// *****************************************************************************
// *****************************************************************************
// Section: Application Initialization and State Machine Functions
// *****************************************************************************
// *****************************************************************************

/*******************************************************************************
  Function:
    void APP_Initialize ( void )

  Remarks:
    See prototype in app.h.
 */

// *****************************************************************************
// *****************************************************************************
// Section: Application Local Functions
// *****************************************************************************
// *****************************************************************************
void  app_display_update(unsigned int aAddress);

// *****************************************************************************
// *****************************************************************************
// Section: Application Initialization and State Machine Functions
// *****************************************************************************
// *****************************************************************************

/*******************************************************************************
  Function:
    void APP_Initialize ( void )

  Summary:
    Maintains state machine of APP.
 
 */
void APP_Initialize ( void )
{   
    ioctlArg.layer.id =0;
    ioctlArg.value.v_pointer =(void*)EW_FRAME_BUFFER_ADDR;
    /* Place the App state machine in its initial state. */
    appData.state = APP_STATE_INIT;

    /* Initialize Max touch handler */
	appInputListener.handleTouchDown = &touchDownHandler;
	appInputListener.handleTouchUp = &touchUpHandler;
	appInputListener.handleTouchMove = &touchMoveHandler;
	SYS_INP_AddListener(&appInputListener);

    /* Embedded Wizard Initializations */
    EwBspConsoleInit();
    
    EwInit();
    EwPrintSystemInfo();

    /* Initialize display buffer */
    DRV_LCDC_IOCTL(GFX_IOCTL_SET_LAYER_LOCK,&ioctlArg);
    DRV_LCDC_IOCTL(GFX_IOCTL_SET_LAYER_BASE_ADDRESS, &ioctlArg);
    DRV_LCDC_IOCTL(GFX_IOCTL_SET_LAYER_UNLOCK,&ioctlArg);

    UART0_Write( "Initialization Done", sizeof("Initialization Done") );
    while(!UART0_TransmitComplete());
}

/*******************************************************************************
  Function:
    void APP_Initialize ( void )

 */


/******************************************************************************
  Function:
    void APP_Tasks ( void )

  Remarks:
    See prototype in app.h.
 */

void APP_Tasks ( void )
{
    /* Check the application's current state. */
    if ( appData.state == APP_STATE_INIT)
    {
        EwProcess();
    }
}

void  app_display_update(unsigned int aAddress)
{
 
    ioctlArg.value.v_pointer =(void*)aAddress;
    DRV_LCDC_IOCTL(GFX_IOCTL_SET_LAYER_LOCK,&ioctlArg);
    DRV_LCDC_IOCTL(GFX_IOCTL_SET_LAYER_BASE_ADDRESS, &ioctlArg);
    DRV_LCDC_IOCTL(GFX_IOCTL_SET_LAYER_UNLOCK,&ioctlArg);
}
 
/*******************************************************************************
 End of File
 */
