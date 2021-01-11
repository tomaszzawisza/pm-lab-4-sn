#include <Arduino.h>
#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup() {  
lcd.begin(16, 2);
lcd.print("Zawisza");
}

void loop() {  
    lcd.setCursor(0, 1); // po ustawieniu współrzednych wykraczających
    //poza zakres wyświetlacza tekst/ wyświetlana liczba znika
    lcd.print(millis() / 1000);
    delay(500);
}