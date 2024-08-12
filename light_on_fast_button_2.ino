#include <Adafruit_NeoPixel.h>

#define BUTTON_PIN 54

#define LED_PIN_1 12
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

Adafruit_NeoPixel strip_1(LED_COUNT_1, LED_PIN_1, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip_2(LED_COUNT_2, LED_PIN_2, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip_3(LED_COUNT_3, LED_PIN_3, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip_4(LED_COUNT_4, LED_PIN_4, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip_5(LED_COUNT_5, LED_PIN_5, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip_6(LED_COUNT_6, LED_PIN_6, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip_7(LED_COUNT_7, LED_PIN_7, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip_8(LED_COUNT_8, LED_PIN_8, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip_9(LED_COUNT_9, LED_PIN_9, NEO_GRB + NEO_KHZ800);

bool buttonState = false;
bool lastButtonState = false;
bool lightsOn = false;

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

  pinMode(BUTTON_PIN, INPUT);
}

void loop() {
  buttonState = digitalRead(BUTTON_PIN);

  if (buttonState != lastButtonState) {
    if (buttonState == LOW) {
      lightsOn = !lightsOn; // Инвертируем состояние лент при каждом нажатии кнопки

      if (lightsOn) {
        // Включаем все линии при первом нажатии
        for(int i=0; i<LED_COUNT_1; i++) {
          strip_1.setPixelColor(i, strip_1.Color(255, 255, 255)); // 
        }
        strip_1.show();
        
        for(int i=0; i<LED_COUNT_2; i++) {
          strip_2.setPixelColor(i, strip_2.Color(255, 255, 255)); // 
        }
        strip_2.show();

        for(int i=0; i<LED_COUNT_3; i++) {
          strip_3.setPixelColor(i, strip_3.Color(255, 255, 255)); // 
        }
        strip_3.show();
        
        for(int i=0; i<LED_COUNT_4; i++) {
          strip_4.setPixelColor(i, strip_4.Color(255, 255, 255)); // 
        }
        strip_4.show();

        for(int i=0; i<LED_COUNT_5; i++) {
          strip_5.setPixelColor(i, strip_5.Color(255, 255, 255)); // 
        }
        strip_5.show();

        for(int i=0; i<LED_COUNT_6; i++) {
          strip_6.setPixelColor(i, strip_6.Color(255, 255, 255)); // 
        }
        strip_6.show();

        for(int i=0; i<LED_COUNT_7; i++) {
          strip_7.setPixelColor(i, strip_7.Color(255, 255, 255)); // 
        }
        strip_7.show();

        for(int i=0; i<LED_COUNT_8; i++) {
          strip_8.setPixelColor(i, strip_8.Color(255, 255, 255)); // 
        }
        strip_8.show();

        for(int i=0; i<LED_COUNT_9; i++) {
          strip_9.setPixelColor(i, strip_9.Color(255, 255, 255)); // 
        }
        strip_9.show();

      } else {
        // Выключаем все линии при втором нажатии
        strip_1.clear();
        strip_1.show();
        strip_2.clear();
        strip_2.show();
        strip_3.clear();
        strip_3.show();
        strip_4.clear();
        strip_4.show();
        strip_5.clear();
        strip_5.show();
        strip_6.clear();
        strip_6.show();
        strip_7.clear();
        strip_7.show();
        strip_8.clear();
        strip_8.show();
        strip_9.clear();
        strip_9.show();
      }
    }
  }

  lastButtonState = buttonState;
}


//Этот код позволяет включать и выключать все линии адресной ленты при каждом нажатии кнопки, инвертируя их состояние.
