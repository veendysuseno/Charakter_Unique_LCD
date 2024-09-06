# Charakter Unique LCD

## Description

This project demonstrates how to create and display custom characters on a 16x2 LCD screen using an Arduino. In this example, a heart and a smiley face are designed as unique characters and displayed alongside a simple message.

## Components

- Arduino (e.g., Arduino Uno)
- 16x2 LCD Display
- Jumper Wires

## Pin Configuration

| LCD Pin | Arduino Pin |
| ------- | ----------- |
| RS      | 2           |
| EN      | 3           |
| D4      | 4           |
| D5      | 5           |
| D6      | 6           |
| D7      | 7           |

## Code

```cpp
#include <LiquidCrystal.h>
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);

byte heart[8] = {
  0b00000,
  0b01010,
  0b11111,
  0b11111,
  0b11111,
  0b01110,
  0b00100,
  0b00000
};

byte smiley[8] = {
  0b00000,
  0b00000,
  0b01010,
  0b00000,
  0b00000,
  0b10001,
  0b01110,
  0b00000
};

void setup() {
  lcd.createChar(1, heart);
  lcd.createChar(2, smiley);
  lcd.begin(16, 2);
  lcd.print("I ");
  lcd.write(1); // Display heart character
  lcd.print(" Arduino! ");
  lcd.write(2); // Display smiley character
}

void loop() {
}
```

## How It Works

1. Initialization:

   - The setup() function creates two custom characters: a heart and a smiley face.
   - The LCD is initialized to 16x2 configuration, and the message "I ❤️ Arduino! 😊" is printed on the screen.

2. Custom Characters:

   - createChar() function defines the pixel pattern for each custom character (heart and smiley) using binary values.

3. Display:
   - The characters are printed on the screen using lcd.write() to display the heart and smiley along with the message.

## Usage

1. Connect the LCD to the Arduino as per the pin configuration.
2. Upload the code to the Arduino.
3. The LCD will display the custom characters (heart and smiley) alongside the text "I ❤️ Arduino! 😊".

## Notes

- You can modify the custom characters by changing the binary values in the arrays heart and smiley.
- Ensure correct wiring of the LCD to avoid display issues.
