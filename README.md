BigCrystalTWI
=============

Arduino Library for displaying double height characters on an LCD display
over I<sup>2</sup>C (Two Wire Interface) **using the MCP2008 chipset**, such as
the Adafruit backpack. This library will not work for other I<sup>2</sup>C chipsets.

A corresponding library, [BigCrystal](https://github.com/gregington/BigCrystal)
supports other connection methods, such as 4 and 8 bit parallel, I<sup>2</sup>C
using the PFC8574 expander and shift registers.

Usage
-----

To use BigCrystalTWI, the sketch will need the following includes:

    #include <Wire.h>
    #include <LiquidTWI.h>
    #include <BigCrystalTWI.h>

Creating the LCD object is similar to the [LiquidTWI library](https://github.com/Stephanie-Maks/Arduino-LiquidTWI);
the I<sup>2</sup>C address needs to be specified. For example:

    BigCrystalTWI lcd(0);

The following methods, in addition to those in LiquidTWI are available:
* writeBig(char c, uint8_t row, uint8_t col) - writes a single large character to the specified coordinates.
* printBig(char* str, uint8_t row, uint8_t col) - writes a String to the specified coordinates.
* widthBig(char c) - returns the width in characters of the specified large character.
  Includes the one column space following the character.
