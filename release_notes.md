---
title: Release notes
nav_order: 99
---

# ![MPLAB® Harmony Graphics Suite](./docs/html/mhgs.png) Microchip MPLAB® Harmony 3 Graphics application examples for SAM A5D2 Family

## Harmony 3 Graphics application examples for SAM A5D2 family v3.10.1

### Development kit and demo application support

Following table provides number of peripheral library examples available for different development kits.

| Development Kits  | MPLABx applications |
|:-----------------:|:-------------------:|
| [SAM A5D2 Xplained Ultra](https://www.microchip.com/Developmenttools/ProductDetails/ATSAMA5D2C-XULT)     | 7 |
|

## Release v3.10.1

### Issues Fixed


- MH3-70279 a table in the readme.md got messed up in github
- MPLAB Discover script errors


## Release v3.10.0

### New Features


New features added in this release are as follows:

- Added a camera (OV5640) example using the ISC interface
- Added support for MPLAB Code Configurator


## Release v3.9.2

### New Features


New features added in this release are as follows:

- Added Blank Quickstart (Single-Buffered) WVGA configuration
- Added Blank Quickstart (Double-Buffered) WVGA configuration
- Added Blank Canvas Quickstart WVGA configuration
- Added Legato Canvas Quickstart WVGA configuration


## Release v3.9.1

### Issues Fixed


- Fixed issues with packages and documentation


## Release v3.9.0

### New Features


New features added in this release are as follows:

- Applications migrated from gfx and gfx_apps repository to this new application repository for SAM A5D2 development support
- Added Legato Quickstart WVGA configuration for IAR Embedded WorkBench
- Added Legato Dashboard WVGA configuration with Graphics Canvas support


### Known Issues


The current known issues are as follows:

- For all IAR configurations, make sure LE_DYNAMIC_VTABLES is define to 1 to ensure build success


### Development Tools

- [MPLAB® X IDE v6.00 and above](https://www.microchip.com/mplab/mplab-x-ide)
- MPLAB® X IDE plug-ins:
    - [MPLAB® Code Configurator (MCC) v5.1.9](https://github.com/Microchip-MPLAB-Harmony/mplabx-plugin)
    - [MPLAB® Harmony Configurator (MHC) v3.8.4 and above](https://github.com/Microchip-MPLAB-Harmony/mplabx-plugin)
- [MPLAB® XC32 C/C++ Compiler v4.10 and above](https://www.microchip.com/mplab/compilers)

### Dependent Components

* [GFX v3.11.1](https://github.com/Microchip-MPLAB-Harmony/gfx/releases/tag/v3.11.1)

