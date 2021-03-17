---
title: Release notes
nav_order: 99
---

# ![MPLAB® Harmony Graphics Suite](./docs/html/mhgs.png) Microchip MPLAB® Harmony 3 Graphics application examples for SAM A5D2 Family

## Harmony 3 Graphics application examples for SAM A5D2 family v3.9.1

### Development kit and demo application support

Following table provides number of peripheral library examples available for different development kits.

| Development Kits  | MPLABx applications |
|:-----------------:|:-------------------:|
| [SAM A5D2 Xplained Ultra](https://www.microchip.com/Developmenttools/ProductDetails/ATSAMA5D2C-XULT)     | 3 |
|


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

- [MPLAB® X IDE v5.45 and above](https://www.microchip.com/mplab/mplab-x-ide)
- MPLAB® X IDE plug-ins:
    - [MPLAB® Harmony Configurator (MHC) v3.6.3 and above](https://github.com/Microchip-MPLAB-Harmony/mplabx-plugin).
- [MPLAB® XC32 C/C++ Compiler v2.50 and above](https://www.microchip.com/mplab/compilers)

### Dependent Components

* [GFX v3.9.2](https://github.com/Microchip-MPLAB-Harmony/gfx/releases/tag/v3.9.2)
* [Harmony 3 USB v3.7.1](https://github.com/Microchip-MPLAB-Harmony/usb/releases/tag/v3.7.1)
* [IAR Embedded WorkBench ARM v8.40.1](https://www.iar.com/iar-embedded-workbench/#!?architecture=Arm)
