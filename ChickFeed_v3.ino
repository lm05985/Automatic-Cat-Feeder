//version 3

//Link for stepper and driver ref --> https://lastminuteengineers.com/a4988-stepper-motor-driver-arduino-tutorial/ 
//link for stepper feeder ref (RTC too) --> https://www.instructables.com/Automatic-Arduino-Pet-Feeder-3D-Printed-With-Stepp/
//Link for LCD and RTC hookup --> https://www.electronicshub.org/arduino-ds3231-rtc-module-tutorial/
//Libraries
#include <LiquidCrystal.h>
#include <DS3231.h>  //https://github.com/NorthernWidget/DS3231
#include <Wire.h>

//Set-up pin labels
const int dirPin = 2;
const int stepPin = 3;
const int buzzer = 4; 
const int button = 5; //Goes HIGH when pressed??

//intialize varibles to be used
int val =0;
int Feed_butt_state = 0;

const int stepsPerRevolution = 200;
LiquidCrystal lcd(6, 7, 8, 9, 10, 11); // (rs, enable, d4, d5, d6, d7)
//RTClib myRTC;

void setup(){
//  rtc.begin();
//  Wire.begin();
  lcd.begin(16,2);
  Serial.begin(115200);
  Serial.println("Test");
  //Declare pins as Inputs
  pinMode(button, INPUT);
  // Declare pins as Outputs
  pinMode(buzzer, OUTPUT); // Set buzzer - pin 2 as an output
  pinMode(stepPin, OUTPUT);
  pinMode(dirPin, OUTPUT);
  lcd.setCursor(0, 0);
  lcd.print("Chicken Feeder loading...");
}

void loop(){
//DateTime now = myRTC.now();
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Chicken Feeder loading...");
  lcd.setCursor(0, 1);
  lcd.print("Value : ");
Feed_butt_state = digitalRead(button);
Serial.println(Feed_butt_state); //for debugging
delay(1000);
if (Feed_butt_state == HIGH){
   lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Feeding!...");
  FeedingTimeSound();
  }
}
