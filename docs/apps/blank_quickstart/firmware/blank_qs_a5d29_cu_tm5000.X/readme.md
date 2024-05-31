
![](../../../../images/mgs.png) blank\_qs\_a5d29\_cu\_tm5000.X

Defining the Architecture
-------------------------

![](../../../../images/blank_sama5d29_arch.png)

The application calls directly into LCD Controller (LCDC) driver set up and initialization function calls that configure the LCDC. After initialization, the application transitions into the paint phase, where it uses Canvas Graphics library to draw an image to the frame buffer. Pressing down on the LCD turns on the BLUE LED and when touch is removed the BLUE LED turns off. Each time the user touches the LCD, the image displayed is switched.  

User touch input on the display panel is received thru the PCAP capacitive touch controller, which sends a notification to the Touch Input Driver. The Touch Input Driver reads the touch information over I2C and sends the touch event to the Graphics Library through the Input System Service.

### Demonstration Features

-   Graphics Acceleration using integrated display controller (LCDC)
-   Graphics Canvas
-   Reference application for the SAM A5D29 Curiosity
-   24-bit color, multi-layer, WVGA (800x480) screen design
-   Time system service, timer-counter peripheral library and driver 
-   I2C and touch controller driver 

Creating the Project Graph
--------------------------

![](../../../../images/blank_sama5d29_wvga_pg.png)

The Project Graph diagram shows the Harmony components that are included in this application. Lines between components are drawn to satisfy components that depend on a capability that another component provides.

Peripheral clocks for LCDC, MPDDRC, PIO, TC0, TWIHS0& UART0 must be enabled from System-> Clock -> Peripheral Clock Menu.
Interrupts must be enabled for TWI0, TC0, and LCDC.


Building the Application
------------------------

The parent directory for this application is gfx/apps/blank\_quickstart. To build this application, use MPLAB X IDE to open the gfx/apps/blank\_quickstart/firmware/blank\_qs\_a5d29\_cu\_tm5000.X project folder and press F11. 
A successful build will generate a harmony.bin file in dist/lcdc_rgba8888_mxt_a5d29_cu_wvga/production in the project folder.

The following table lists configuration properties:

|Project Name|BSP Used|Graphics Template Used|Description|
|:-----------|:-------|:---------------------|:----------|
|blank\_qs\_a5d29\_cu\_tm5000.X|SAM A5D29 Curiosity Board|Legato Graphics w/ PDA TM5000 Display|SAM A5D29 Curiosity with RGBA8888 GFX Interface and 5" WVGA PCAP Touch display|


Configuring the Hardware
------------------------

Configure the hardware as follows:

-   Connect the ribbon cable from the display to the LCD connector J23 on the ATSAMA5D29 Curiosity Development Board.

-   Take an SD Card formatted with FAT32 file system, and copy the boot.bin binary file from this [location](bootstrap/curiosity/boot.bin). Also copy the harmony.bin file you generated from the "Building the Application" section.

-   Insert the SD card into J7 on the SAMA5D29 CURIOSITY and power up the board by connecting a powered USB cable to the USB port J1 on the board (5V/1A Recommended).


Running the Demonstration
-------------------------

When power-on is successful, the demonstration will display an image similar to the picture shown below (different configurations may have slight variation in the screen aspect ratio):

![](../../../../images/blank_quickstart.png)


* * * * *
