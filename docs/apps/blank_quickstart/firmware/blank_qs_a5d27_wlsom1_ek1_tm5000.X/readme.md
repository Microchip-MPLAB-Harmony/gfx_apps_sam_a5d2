
![](../../../../images/mgs.png) blank\_qs\_a5d27\_wlsom1\_ek1\_tm5000.X

Defining the Architecture
-------------------------

![](../../../../images/blank_sama5d2_xu_single_buffer_arch.png)

The application calls directly into LCD Controller (LCDC) driver set up and initialization function calls that configure the LCDC. After initialization, the application transitions into the paint phase, where it uses Canvas Graphics library to draw an image to the frame buffer. Pressing down on the LCD turns on the BLUE LED and when touch is removed the BLUE LED turns off. Each time the user touches the LCD, the image displayed is switched.  

User touch input on the display panel is received thru the PCAP capacitive touch controller, which sends a notification to the Touch Input Driver. The Touch Input Driver reads the touch information over I2C and sends the touch event to the Graphics Library thru the Input System Service.

### Demonstration Features

-   Graphics Acceleration using integrated display controller (LCDC)
-   Graphics Canvas
-   Reference application for the SAM A5D27 WLSOM1 EK1
-   24-bit color, multi-layer, WVGA (800x480) screen design
-   Time system service, timer-counter peripheral library and driver 
-   I2C and touch controller driver 

Creating the Project Graph
--------------------------

![](../../../../images/blank_qs_wlsom_pg.png)

The Project Graph diagram shows the Harmony components that are included in this application. Lines between components are drawn to satisfy components that depend on a capability that another component provides.


Building the Application
------------------------

The parent directory for this application is gfx/apps/blank\_quickstart. To build this application, use MPLAB X IDE to open the gfx/apps/blank\_quickstart/firmware/blank\_qs\_a5d27\_wlsom1\_ek1\_tm5000.X project folder and press F11. 
A successful build will generate a harmony.bin file in dist/lcdc_rgba8888_mxt_a5d27_wlsom1_ek1_wvga/production in the project folder.

The following table lists configuration properties:

|Project Name|BSP Used|Graphics Template Used|Description|
|:-----------|:-------|:---------------------|:----------|
|blank\_qs\_a5d27\_wlsom1\_ek1\_tm5000.X|SAM A5D27 WLSOM1 Kit1|Legato Graphics w/ PDA TM5000 Display|SAM A5D27 WLSOM1 EK1 with RGBA8888 GFX Interface and 5" WVGA PCAP Touch display|


Configuring the Hardware
------------------------

Configure the hardware as follows:

-   Connect the ribbon cable from the display to the LCD connector J21 on the ATSAMA5D27-WLSOM1 EVALUATION KIT.

-   Take an SD Card formatted with FAT32 file system, and copy the boot.bin binary file from this [location](bootstrap/wlsom1_ek1/boot.bin). Also copy the harmony.bin file you generated from the "Building the Application" section.

-   Insert the SD card into J9 on the ATSAMA5D27-WLSOM1 EVALUATION KIT and power up the board by connecting a powered USB cable to the USB port J10 on the board (5V/1A Recommended).


Running the Demonstration
-------------------------

When power-on is successful, the demonstration will display an image similar to the picture shown below (different configurations may have slight variation in the screen aspect ratio):

![](../../../../images/blank_quickstart.png)


* * * * *
