
#include <NeoPixelBus.h> // подключение библиотеки для работы с ws2812

const uint16_t PixelCount = 169; // количество последовательно соеденных светодиодов
const uint8_t PixelPin = 3;  // номер порта к которому присоеденены свктодиоды

#define colorSaturation 10 // якость 0...256

NeoPixelBus<NeoGrbFeature, Neo800KbpsMethod> strip(PixelCount, PixelPin);// инициализация последовательности светодиодов

// создаем 5 цветов
RgbColor red(colorSaturation, 0, 0); //красный
RgbColor green(0, colorSaturation, 0); //зеленый
RgbColor blue(0, 0, colorSaturation);//голубой
RgbColor white(colorSaturation);//белый
RgbColor black(0);//черный(отключенные светододы)

// положения курсора(белое свечение)
int x; int y;
// двумерная матрица для хранения цветов
RgbColor bitmap[13][13];

void setup() {
  // подключение ленты светодиодов
strip.Begin();
strip.Show();
// начальное положение курсора 0..13
x=3;
y=3;
// режимы портов для кнопок
pinMode(4,INPUT_PULLUP);
pinMode(5,INPUT_PULLUP);
pinMode(6,INPUT_PULLUP);
pinMode(7,INPUT);

// заполнение матрицы черным цветом
for(int i=0;i<13;i++)
  {
   for(int j=0;j<13;j++)
    {
       bitmap[i][j]=black;
    }
  }
}

void loop() {
  // фиксируем движения джойстика и изменяем положения курсора
  
if(analogRead(1)>700&y<12){//право
  y++;
  delay(100);
}
if(analogRead(1)<400&y>0){//лево
  y--;
  delay(100);
}
if(analogRead(2)>700&x<12){//от себя
  x++;
  delay(100);
}
if(analogRead(2)<400&x>0){//к себе
  x--;
  delay(100);
}

// изменяем цвета под курсором

if(digitalRead(6)==0) bitmap[x][y]=red;
//если нажата красная кнопка
if(digitalRead(5)==0) bitmap[x][y]=green;
//если нажата зеленея кнопка
if(digitalRead(4)==0) bitmap[x][y]=blue;
//если нажата синяя кнопка
if(digitalRead(7)==1) bitmap[x][y]=black;
//если нажата кнопка джойстика


// отображаем цвета с матрицы 13х13 на последовательности с 104 светодиодов
for(int i=0;i<13;i++)
  {
   for(int j=0;j<13;j++)
    {
       strip.SetPixelColor(i*13+j, bitmap[i][j]);
    }
  }
  // курсор отображаем белым
  strip.SetPixelColor(x*13+y,white);
  strip.Show();
}
    
