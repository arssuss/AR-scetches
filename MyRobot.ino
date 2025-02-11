#include <Servo.h>          //Библиотека сервомотора. Есть по стандарту
#include <NewPing.h>        //Библиотека Ультразвукового датчика (нужно установить)

int trigPin = 7;      // trig pin датчика HC-SR04
int echoPin = 6;     // Echo pin датчика HC-SR04
int revleft4 = 3;       //REVerse motion (движение назад) для левого двигателя
int fwdleft5 = 2;       //ForWarD motion (движение вперед) для левого двигателя
int revright6 = 1;      //REVerse motion (движение назад) для правого двигателя
int fwdright7 = 0;      //ForWarD motion движение вперед) для правого двигателя
long duration, distance;
void setup() {
  
  delay(random(500,2000));   // задержка на случайное время
  Serial.begin(9600); //для целей отладки, потом можно закомментировать
  pinMode(revleft4, OUTPUT);      // set Motor pins as output
  pinMode(fwdleft5, OUTPUT);
  pinMode(revright6, OUTPUT);
  pinMode(fwdright7, OUTPUT);
  
  pinMode(trigPin, OUTPUT);         // set trig pin as output
  pinMode(echoPin, INPUT);          //echo pin в режим ввода данных
}
void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);   
  digitalWrite(trigPin, HIGH);     // передаем серию импульсов длительностью 10 мкс
  delayMicroseconds(10);
  duration = pulseIn(echoPin, HIGH); // принимаем отраженные импульсы
  distance = duration / 58.2;   // рассчитываем расстояние в см
  delay(10);
    // If you dont get proper movements of your robot then alter the pin numbers (если что то работает не так, попробуйте сменить используемые контакты)
  if (distance > 19)            
  {
    digitalWrite(fwdright7, HIGH);                    // движение вперед
    digitalWrite(revright6, LOW);
    digitalWrite(fwdleft5, HIGH);                                
    digitalWrite(revleft4, LOW);                                                       
  }
  if (distance < 18)
  {
    digitalWrite(fwdright7, LOW);  //Stop (остановка)                
    digitalWrite(revright6, LOW);
    digitalWrite(fwdleft5, LOW);                                
    digitalWrite(revleft4, LOW);
    delay(500);
    digitalWrite(fwdright7, LOW);      //движение назад         
    digitalWrite(revright6, HIGH);
    digitalWrite(fwdleft5, LOW);                                
    digitalWrite(revleft4, HIGH);
    delay(500);
    digitalWrite(fwdright7, LOW);  //Stop (остановка)               
    digitalWrite(revright6, LOW);
    digitalWrite(fwdleft5, LOW);                                
    digitalWrite(revleft4, LOW);  
    delay(100);  
    digitalWrite(fwdright7, HIGH);       
    digitalWrite(revright6, LOW);   
    digitalWrite(revleft4, LOW);                                 
    digitalWrite(fwdleft5, LOW);  
    delay(500);
  }
}
