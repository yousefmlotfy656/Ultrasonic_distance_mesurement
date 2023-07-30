#include <LiquidCrystal.h>

 

#define trigger 18

#define echo 19

 

LiquidCrystal lcd(2,3,4,5,6,7);

 

float time=0,distance=0;

 

void setup()

{

 lcd.begin(16,2);

 pinMode(trigger,OUTPUT);

 pinMode(echo,INPUT);

 lcd.print(" Ultra sonic");

 lcd.setCursor(0,1);

 lcd.print("Distance Meter");

 delay(2000);

 lcd.clear();


 delay(2000);

}

 

void loop()

{

 lcd.clear();

 digitalWrite(trigger,LOW);

 delayMicroseconds(2);

 digitalWrite(trigger,HIGH);

 delayMicroseconds(10);

 digitalWrite(trigger,LOW);

 delayMicroseconds(2);

 time=pulseIn(echo,HIGH);

 distance=time*340/20000;

 lcd.clear();

 lcd.print("Distance:");

 lcd.print(distance);

 lcd.print("cm");

 lcd.setCursor(0,1);

 lcd.print("Distance:");

 lcd.print(distance/100);

 lcd.print("m");

 delay(1000);

}


 
