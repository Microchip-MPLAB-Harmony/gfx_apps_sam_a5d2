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
#include "driver/isc/drv_isc.h"
#include "gfx/canvas/gfx_canvas_api.h"
#include "driver/cam/drv_cam.h"
// *****************************************************************************
// *****************************************************************************
// Section: Global Data Definitions
// *****************************************************************************
// *****************************************************************************

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
#define CANVAS_XPOS    0
#define CANVAS_YPOS    0
#define CANVAS_WIDTH   640
#define CANVAS_HEIGHT  480

#define ISC_CANVAS_ID 0
#define ISC_CANVAS_LAYER 1 /* HEO Layer */

uint32_t canvasfb0[640 *480] = { 0 };
// *****************************************************************************
// *****************************************************************************
// Section: Application Callback Functions
// *****************************************************************************
// *****************************************************************************

/* TODO:  Add any necessary callback functions.
*/

// *****************************************************************************
// *****************************************************************************
// Section: Application Local Functions
// *****************************************************************************
// *****************************************************************************


/* TODO:  Add any necessary local functions.
*/


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

void APP_Initialize ( void )
{
    /* Place the App state machine in its initial state. */
    appData.state = APP_STATE_INIT;



    /* TODO: Initialize your application's state machine and other
     * parameters.
     */
}


/******************************************************************************
  Function:
    void APP_Tasks ( void )

  Remarks:
    See prototype in app.h.
 */

void APP_Tasks ( void )
{

    /* Check the application's current state. */
    switch ( appData.state )
    {
        /* Application's initial state. */
        case APP_STATE_INIT:
        {
            bool appInitialized = true;
            /* Initialize the Camera */
            DRV_Camera_Init();
            
            gfxcSetLayer(ISC_CANVAS_ID, ISC_CANVAS_LAYER);
            gfxcSetWindowSize(0, 640, 480);
            gfxcSetWindowPosition(0, 0, 0);
            memset(canvasfb0, 0x0FFF, sizeof(canvasfb0));

            if (appInitialized)
            {

                appData.state = APP_STATE_CANVAS_CREATE;
            }
            break;
        }

        case APP_STATE_CANVAS_CREATE:
        {
             gfxcSetPixelBuffer(ISC_CANVAS_ID,
                               640,
                               480,
                               GFX_COLOR_MODE_RGBA_8888,
                               (void *)canvasfb0);
            
            gfxcShowCanvas(ISC_CANVAS_ID);
            gfxcCanvasUpdate(ISC_CANVAS_ID);        
            appData.state = APP_STATE_CONFIG_ISC;
            break;
        }
        case APP_STATE_CONFIG_ISC:
        {
            /* Configure the ISC Interface */
            DRV_ISC_Configure((uint32_t)&canvasfb0[0]);
            appData.state = APP_STATE_START_STREAM;
            break;
        }
        case APP_STATE_START_STREAM:
        {
            /* Start Capture and streaming data to the display */
            DRV_ISC_Capture();
            appData.state = APP_STATE_IDLE;
            break;
        }
        case APP_STATE_IDLE:
        default:
        {
            /* TODO: Handle error in application's state machine. */
            break;
        }
    }
}


/*******************************************************************************
 End of File
 */
