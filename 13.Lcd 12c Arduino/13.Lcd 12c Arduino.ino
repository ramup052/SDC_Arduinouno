#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x26, 16, 2);

void setup()
{
  Serial.begin(9600);
  lcd.init();					
  lcd.backlight();
  lcd.setBacklight(HIGH);
  lcd.setCursor(0,1);
  lcd.print("Ramu");
  lcd.setCursor(0,0);
  lcd.print("Student");
}
void loop()
{
  
}