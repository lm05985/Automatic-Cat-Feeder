//version 4

//Link for stepper and driver ref --> https://lastminuteengineers.com/a4988-stepper-motor-driver-arduino-tutorial/ 
//link for stepper feeder ref (RTC too) --> https://www.instructables.com/Automatic-Arduino-Pet-Feeder-3D-Printed-With-Stepp/
//Link for LCD and RTC hookup --> https://www.electronicshub.org/arduino-ds3231-rtc-module-tutorial/


//Libraries
#include <LiquidCrystal.h>
//#include <DS3231.h>  //https://github.com/NorthernWidget/DS3231
#include <RTClib.h>   //https://www.circuitbasics.com/how-to-use-a-real-time-clock-module-with-the-arduino/
#include <Wire.h>

//Set-up pin labels
const int dirPin = 2;
const int stepPin = 3;
const int buzzer = 4; 
const int button = 5; //Goes HIGH when pressed??
const int master = 12; // will only feed if HIGH
//const int SDA = A4;
//const int SCL = A5;


//intialize varibles to be used
int val =0;
int Feed_butt_state = 0;
int master_state = 0;

const int stepsPerRevolution = 200;
LiquidCrystal lcd(6, 7, 8, 9, 10, 11); // (rs, enable, d4, d5, d6, d7)

RTC_DS3231 rtc;  

void setup(){
  rtc.begin();
  Wire.begin();
  lcd.begin(16,2);
  Serial.begin(115200);
  Serial.println("Test");
  //Declare pins as Inputs
  pinMode(master, INPUT);
  pinMode(button, INPUT);
  // Declare pins as Outputs
  pinMode(buzzer, OUTPUT); // Set buzzer - pin 2 as an output
  pinMode(stepPin, OUTPUT);
  pinMode(dirPin, OUTPUT);
  lcd.setCursor(0, 0);
  lcd.print("Chicken Feeder");
  lcd.setCursor(0, 1);
  lcd.print("loading...");
  updateRTC();// update RTC time
  updateSerial();
}

void loop(){
  updateSerial();
  updateLCD();
  master_state = digitalRead(master);
 if(master_state== HIGH){
  Serial.println("Master switch ON");
        DateTime rtcTime = rtc.now();
        int ss = rtcTime.second();
        int mm = rtcTime.minute();
        int hh = rtcTime.twelveHour();
        int DD = rtcTime.dayOfTheWeek();
        int dd = rtcTime.day();
        int MM = rtcTime.month();
        int yyyy = rtcTime.year();

 
  Feed_butt_state = digitalRead(button);
//  Serial.println(Feed_butt_state); //for debugging
  
  if (Feed_butt_state == HIGH || (hh == 5 && mm == 23 && ss == 0 )){ //set feeding time here
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Feeding!...");
  FeedingTimeSound();
  delay(1000);
//  FeedingTimeSound2();
//  delay(1000);
//  FeedingTimeSound3();



 
  }  
 }
 else{
  Serial.println("Master switch OFF");
  } 
  delay(2000);
}
