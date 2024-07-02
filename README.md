# Field Tiredness Map (FTM) Project

This program calculates and keeps the tiredness of a rectangular
field as a 2D int array (tirednessMap) given the information about which parts of the field has been planted in the
previous years.

## Feautures

• The tiredness of each part starts at “0”.

• The tiredness of each part increases by 1 every year the field has been planted.

• The tiredness of each part decreases by 1 every year the field has NOT been planted to a minimum of 0.

## Input File Format

The program reads input from a text file, which follows this format:

-  The first line contains two integers: sizeX (horizontal size) and sizeY (vertical size) of the rectangular field.
- Subsequent lines contain information blocks for each previous year's plantings:
    - Each block starts with the year (currentYear) and the number of plantings (plantingCount).
    - For each planting, four integers specify a smaller rectangular area that was planted: startXCoord, startYCoord, endXCoord, endYCoord.
