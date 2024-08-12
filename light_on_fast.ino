#include <Adafruit_NeoPixel.h>

#define LED_PIN_12 12
#define LED_COUNT_12 24
#define LED_PIN_13 13
#define LED_COUNT_13 24
#define LED_PIN_14 14
#define LED_COUNT_14 48
#define LED_PIN_15 15
#define LED_COUNT_15 48
#define LED_PIN_16 16
#define LED_COUNT_16 48
#define LED_PIN_17 17
#define LED_COUNT_17 48
#define LED_PIN_18 18
#define LED_COUNT_18 48
#define LED_PIN_19 19
#define LED_COUNT_19 48
#define LED_PIN_20 20
#define LED_COUNT_20 24
#define LED_PIN_21 21
#define LED_COUNT_21 24
#define LED_PIN_22 22
#define LED_COUNT_22 24
#define LED_PIN_23 23
#define LED_COUNT_23 24
#define LED_PIN_24 24
#define LED_COUNT_24 24
#define LED_PIN_25 25
#define LED_COUNT_25 24
#define LED_PIN_26 26
#define LED_COUNT_26 24
#define LED_PIN_27 27
#define LED_COUNT_27 24
#define LED_PIN_28 28
#define LED_COUNT_28 12
#define LED_PIN_29 29
#define LED_COUNT_29 12

Adafruit_NeoPixel strip_1(LED_COUNT_12, LED_PIN_12, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip_11(LED_COUNT_13, LED_PIN_13, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip_2(LED_COUNT_14, LED_PIN_14, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip_22(LED_COUNT_15, LED_PIN_15, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip_3(LED_COUNT_16, LED_PIN_16, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip_33(LED_COUNT_17, LED_PIN_17, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip_4(LED_COUNT_18, LED_PIN_18, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip_44(LED_COUNT_19, LED_PIN_19, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip_5(LED_COUNT_20, LED_PIN_20, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip_55(LED_COUNT_21, LED_PIN_21, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip_6(LED_COUNT_22, LED_PIN_22, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip_66(LED_COUNT_23, LED_PIN_23, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip_7(LED_COUNT_24, LED_PIN_24, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip_77(LED_COUNT_25, LED_PIN_25, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip_8(LED_COUNT_26, LED_PIN_26, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip_88(LED_COUNT_27, LED_PIN_27, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip_9(LED_COUNT_28, LED_PIN_28, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip_99(LED_COUNT_29, LED_PIN_29, NEO_GRB + NEO_KHZ800);

void setup() {
  strip_1.begin();
  strip_1.show();
  strip_11.begin();
  strip_11.show();
  strip_2.begin();
  strip_2.show();
  strip_22.begin();
  strip_22.show();
  strip_3.begin();
  strip_3.show();
  strip_33.begin();
  strip_33.show();
  strip_4.begin();
  strip_4.show();
  strip_44.begin();
  strip_44.show();
  strip_5.begin();
  strip_5.show();
  strip_55.begin();
  strip_55.show();
  strip_6.begin();
  strip_6.show();
  strip_66.begin();
  strip_66.show();
  strip_7.begin();
  strip_7.show();
  strip_77.begin();
  strip_77.show();
  strip_8.begin();
  strip_8.show();
  strip_88.begin();
  strip_88.show();
  strip_9.begin();
  strip_9.show();
  strip_99.begin();
  strip_99.show();
}

void loop() {
  // Зажигаем каждую линию соответственно
  // Линия 12
  for(int i=0; i<LED_COUNT_12; i++) {
    strip_1.setPixelColor(i, strip_1.Color(75, 75, 75)); // Зеленый цвет
    strip_1.show();
     
  }
  // Линия 13
  for(int i=0; i<LED_COUNT_13; i++) {
    strip_11.setPixelColor(i, strip_11.Color(75, 75, 75)); // Зеленый цвет
    strip_11.show();
     
  }

  // Линия 14
  for(int i=0; i<LED_COUNT_14; i++) {
    strip_2.setPixelColor(i, strip_2.Color(75, 75, 75)); // Зеленый цвет
    strip_2.show();
     
  }
   // Линия 15
  for(int i=0; i<LED_COUNT_15; i++) {
    strip_22.setPixelColor(i, strip_22.Color(75, 75, 75)); // Зеленый цвет
    strip_22.show();
     
  }

  // Линия 16
  for(int i=0; i<LED_COUNT_16; i++) {
    strip_3.setPixelColor(i, strip_3.Color(75, 75, 75)); // Зеленый цвет
    strip_3.show();
     
}
 // Линия 17
  for(int i=0; i<LED_COUNT_17; i++) {
    strip_33.setPixelColor(i, strip_33.Color(75, 75, 75)); // Зеленый цвет
    strip_33.show();
     
}
 

  // Линия 18
  for(int i=0; i<LED_COUNT_18; i++) {
    strip_4.setPixelColor(i, strip_4.Color(75, 75, 75)); // Зеленый цвет
    strip_4.show();
     
}
  // Линия 19
  for(int i=0; i<LED_COUNT_19; i++) {
    strip_44.setPixelColor(i, strip_44.Color(75, 75, 75)); // Зеленый цвет
    strip_44.show();
     
}

  // Линия 20
  for(int i=0; i<LED_COUNT_20; i++) {
    strip_5.setPixelColor(i, strip_5.Color(75, 75, 75)); // Зеленый цвет
    strip_5.show();
     
}
 // Линия 21
  for(int i=0; i<LED_COUNT_21; i++) {
    strip_55.setPixelColor(i, strip_55.Color(75, 75, 75)); // Зеленый цвет
    strip_55.show();
     
}

  // Линия 22
  for(int i=0; i<LED_COUNT_22; i++) {
    strip_6.setPixelColor(i, strip_6.Color(75, 75, 75)); // Зеленый цвет
    strip_6.show();
     
}
  // Линия 23
  for(int i=0; i<LED_COUNT_23; i++) {
    strip_66.setPixelColor(i, strip_66.Color(75, 75, 75)); // Зеленый цвет
    strip_66.show();
     
}

  // Линия 24
  for(int i=0; i<LED_COUNT_24; i++) {
    strip_7.setPixelColor(i, strip_7.Color(75, 75, 75)); // Зеленый цвет
    strip_7.show();
     
}
  // Линия 25
  for(int i=0; i<LED_COUNT_25; i++) {
    strip_77.setPixelColor(i, strip_77.Color(75, 75, 75)); // Зеленый цвет
    strip_77.show();
     
}

  // Линия 26
  for(int i=0; i<LED_COUNT_26; i++) {
    strip_8.setPixelColor(i, strip_8.Color(75, 75, 75)); // Зеленый цвет
    strip_8.show();
     
}
  // Линия 27
  for(int i=0; i<LED_COUNT_27; i++) {
    strip_88.setPixelColor(i, strip_88.Color(75, 75, 75)); // Зеленый цвет
    strip_88.show();
     
}

  // Линия 28
  for(int i=0; i<LED_COUNT_28; i++) {
    strip_9.setPixelColor(i, strip_9.Color(75, 75, 75)); // Зеленый цвет
    strip_9.show();
     
}
// Линия 29
  for(int i=0; i<LED_COUNT_29; i++) {
    strip_99.setPixelColor(i, strip_99.Color(75, 75, 75)); // Зеленый цвет
    strip_99.show();
     
}
}
