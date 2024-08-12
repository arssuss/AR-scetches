#include <Adafruit_NeoPixel.h>

#define LED_PIN 12
#define LED_COUNT_1 24

#define LED_PIN_2 14
#define LED_COUNT_2 48

#define LED_PIN_3 16
#define LED_COUNT_3 48

#define LED_PIN_4 18
#define LED_COUNT_4 48

#define LED_PIN_5 20
#define LED_COUNT_5 24

#define LED_PIN_6 22
#define LED_COUNT_6 24

#define LED_PIN_7 24
#define LED_COUNT_7 24

#define LED_PIN_8 26
#define LED_COUNT_8 24

#define LED_PIN_9 28
#define LED_COUNT_9 15

Adafruit_NeoPixel strip_1(LED_COUNT_1, LED_PIN, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip_2(LED_COUNT_2, LED_PIN_2, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip_3(LED_COUNT_3, LED_PIN_3, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip_4(LED_COUNT_4, LED_PIN_4, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip_5(LED_COUNT_5, LED_PIN_5, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip_6(LED_COUNT_6, LED_PIN_6, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip_7(LED_COUNT_7, LED_PIN_7, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip_8(LED_COUNT_8, LED_PIN_8, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip_9(LED_COUNT_9, LED_PIN_9, NEO_GRB + NEO_KHZ800);

void setup() {
  strip_1.begin();
  strip_1.show();

  strip_2.begin();
  strip_2.show();

  strip_3.begin();
  strip_3.show();

  strip_4.begin();
  strip_4.show();

  strip_5.begin();
  strip_5.show();

  strip_6.begin();
  strip_6.show();

  strip_7.begin();
  strip_7.show();

  strip_8.begin();
  strip_8.show();

  strip_9.begin();
  strip_9.show();
}

void loop() {
  // Зажигаем каждую линию соответственно
  // Линия 1
 for (int i=0; i <= LED_COUNT_1; i++){
 strip_1.show(); 
 strip_1.setPixelColor( i , 255 , 255, 255 );          // подожгём i-ый СД красным
 strip_1.setPixelColor( (i-1) , 0 , 0, 0 );     // выключим i-ый СД 
 delay(100);
      strip_1.show(); 
  }

  // Линия 2
  for (int i=0; i <= LED_COUNT_2; i++){
 strip_2.show(); 
 strip_2.setPixelColor( i , 255 , 255, 255 );          // подожгём i-ый СД красным
 strip_2.setPixelColor( (i-1) , 0 , 0, 0 );     // выключим i-ый СД 
 delay(100);
      strip_2.show(); 
  }

  // Линия 3
for (int i=0; i <= LED_COUNT_3; i++){
 strip_3.show(); 
 strip_3.setPixelColor( i , 255 , 255, 255);          // подожгём i-ый СД красным
 strip_3.setPixelColor( (i-1) , 0 , 0, 0 );     // выключим i-ый СД 
 delay(100);
      strip_3.show(); 
  }
  
  // Линия 4
for (int i=0; i <=LED_COUNT_4; i++){
 strip_4.show(); 
 strip_4.setPixelColor( i , 255 , 255, 255 );          // подожгём i-ый СД красным
 strip_4.setPixelColor( (i-1) , 0 , 0, 0 );     // выключим i-ый СД 
 delay(100);
      strip_4.show(); 
  }

  // Линия 5
for (int i=0; i <=LED_COUNT_5; i++){
 strip_5.show(); 
 strip_5.setPixelColor( i , 255 , 255, 255 );          // подожгём i-ый СД красным
 strip_5.setPixelColor( (i-1) , 0 , 0, 0 );     // выключим i-ый СД 
 delay(100);
      strip_5.show(); 
  }

  // Линия 6
 for (int i=0; i <=LED_COUNT_6; i++){
 strip_6.show(); 
 strip_6.setPixelColor( i , 255 , 255, 255 );          // подожгём i-ый СД красным
 strip_6.setPixelColor( (i-1) , 0 , 0, 0 );     // выключим i-ый СД 
 delay(100);
      strip_6.show(); 
  }

  // Линия 7
 for (int i=0; i <=LED_COUNT_7; i++){
 strip_7.show(); 
 strip_7.setPixelColor( i , 255 , 255, 255 );          // подожгём i-ый СД красным
 strip_7.setPixelColor( (i-1) , 0 , 0, 0 );     // выключим i-ый СД 
 delay(100);
      strip_7.show(); 
  }

  // Линия 8
 for (int i=0; i <=LED_COUNT_8; i++){
 strip_8.show(); 
 strip_8.setPixelColor( i , 255 , 255, 255 );          // подожгём i-ый СД красным
 strip_8.setPixelColor( (i-1) , 0 , 0, 0 );     // выключим i-ый СД 
 delay(100);
      strip_8.show(); 
  }

  // Линия 9
 for (int i=0; i <=LED_COUNT_9; i++){
 strip_9.show(); 
 strip_9.setPixelColor( i , 255 , 255, 255 );          // подожгём i-ый СД красным
 strip_9.setPixelColor( (i-1) , 0 , 0, 0 );     // выключим i-ый СД 
 delay(100);
      strip_9.show(); 
  }
}
