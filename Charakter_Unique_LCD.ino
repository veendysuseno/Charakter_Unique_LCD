// Charakter_Unique_LCD
#include <LiquidCrystal.h>
LiquidCrystal lcd(2,3,4,5,6,7);
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
  lcd.write(1);
  lcd.print(" Arduino! ");
  lcd.write(2);
}

void loop() { 
}

