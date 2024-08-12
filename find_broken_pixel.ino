#include <Adafruit_NeoPixel.h>
#define Pin1 7 // назначили пин управления на ленту_1, это пин 6
const int Count = 176; // Количество задействованных светодиодов в ленте
Adafruit_NeoPixel strip1 = Adafruit_NeoPixel( (Count) , Pin1 , NEO_GRB + NEO_KHZ800 );   // создали объект "strip1"
const int Pause = 100;  // задержка в милесекундах
void setup( )
 
{
 strip1.begin();      // инициализировали объект "strip1"
 strip1.show();       // Отправка данных в ленту?
}
 
void loop( ){
for (int i=0; i <= (Count); i++){
 strip1.show(); 
 strip1.setPixelColor( i , 255, 255, 255 );          // подожгём i-ый СД красным
 strip1.setPixelColor( (i-1) , 0 , 0, 0 );     // выключим i-ый СД 
 delay(Pause);
      strip1.show(); 
  }
}
