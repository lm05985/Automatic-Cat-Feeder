  //version 4
//Lillie Moragne

//Link for stepper and driver ref --> https://lastminuteengineers.com/a4988-stepper-motor-driver-arduino-tutorial/ 
//link for stepper feeder ref  --> https://www.instructables.com/Automatic-Arduino-Pet-Feeder-3D-Printed-With-Stepp/
//Finding Step Coil Pairs --> https://www.instructables.com/Find-Bipolar-Stepper-Motor-Coil-Pairs/
//Link for LCD hookup --> https://www.electronicshub.org/arduino-ds3231-rtc-module-tutorial/

//Step motor info:
//BK-GR & R-B = pair
//Direction will always be clockwise bc dir pull up

//Libraries
#include <LiquidCrystal.h>
#include <RTClib.h>   //https://www.circuitbasics.com/how-to-use-a-real-time-clock-module-with-the-arduino/
#include <Wire.h>

//Set-up pin labels
const int motorEnablePin = 2;
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
const int feedAmount = 200;
LiquidCrystal lcd(6, 7, 8, 9, 10, 11); // (rs, enable, d4, d5, d6, d7)

RTC_DS3231 rtc;  

void setup(){
  rtc.begin();
  Wire.begin();
  lcd.begin(16,2);
  Serial.begin(115200);
//  Serial.println("Test");
  
  //Declare pins as Inputs
  pinMode(master, INPUT);
  pinMode(button, INPUT);
  
  // Declare pins as Outputs
  pinMode(buzzer, OUTPUT); 
  pinMode(stepPin, OUTPUT);
  pinMode(motorEnablePin, OUTPUT);
  lcd.setCursor(0, 0);
  lcd.print("Chicken Feeder");
  lcd.setCursor(0, 1);
  lcd.print("loading...");
  master_state = digitalRead(master);
 if(master_state== LOW){
//    rtc.adjust(DateTime(2019, 8, 31, 22, 0, 0));
    rtc.adjust(DateTime(2021, 4, 26, 19, 33, 0));
    lcd.setCursor(0, 0);
    lcd.print("set to best day ever instead");
    Serial.println("set to best day ever instead");
    }
  else {
    updateRTC();// update RTC time
    updateSerial(); //update time on Serial Monitor
}
}

void loop(){
  updateSerial();
  updateLCD(); //update time
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
  
  if (Feed_butt_state == HIGH || (hh ==  8 && mm == 0 && ss == 0 ))//set feeding time here
  { 
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Feeding!...");
    FeedingTimeSound(); //can also use sound2/3
    // Enable Motor pin
    digitalWrite(motorEnablePin, HIGH);
    delay(500);
    // Spin motor slowly
      for(int x = 0; x < feedAmount; x++)
      {
        digitalWrite(stepPin, HIGH);
        delayMicroseconds(2000);
        digitalWrite(stepPin, LOW);
        delayMicroseconds(2000);
      }
     
      digitalWrite(motorEnablePin, LOW);
      
  }  
 }
 else{
  Serial.println("Master switch OFF");
  } 
  delay(1000);
}
