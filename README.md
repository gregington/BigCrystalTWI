BigCrystalTWI
=============

**NOTE:** The BigCrystalTWI library will **no longer be actively maintained**.
The [BigCrystal](https://github.com/gregington/BigCrystal) library now supports a much wider range of LCD hardware
through the [New LiquidCrystal](https://bitbucket.org/fmalpartida/new-liquidcrystal/wiki/Home) library making this
project obsolete.

Arduino Library for displaying double height characters on an LCD display
over I<sup>2</sup>C (Two Wire Interface).

A corresponding library, [BigCrystal](https://github.com/gregington/BigCrystal)
is available to use if connecting the LCD pins directly to an Arduino.

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
