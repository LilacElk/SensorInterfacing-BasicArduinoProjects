#include "Arduino_SensorKit.h"
void setup() {
  // put your setup code here, to run once:
  Oled.begin();
  Oled.setFlipMode(true);
  Environment.begin();

  

}

void loop() {
  // put your main code here, to run repeatedly:
   Oled.setFont(u8x8_font_chroma48medium8_r);
   Oled.setCursor(0,33);
   Oled.print("Temperature:");
   Oled.print(Environment.readTemperature());
   //Oled.refreshDisplay();
   delay (1000);
   Oled.setCursor(5,60);
   Oled.print("Humidity:");
   Oled.print(Environment.readHumidity());
   Oled.refreshDisplay();
   delay(1000);
}
