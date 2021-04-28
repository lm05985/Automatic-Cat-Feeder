void updateSerial()
{
  /*
     create array to convert digit days to words:

     0 = Sunday    |   4 = Thursday
     1 = Monday    |   5 = Friday
     2 = Tuesday   |   6 = Saturday
     3 = Wednesday |
  */
  const char dayInWords[7][4] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};

  /*
     create array to convert digit months to words:

     0 = [no use]  |
     1 = January   |   6 = June
     2 = February  |   7 = July
     3 = March     |   8 = August
     4 = April     |   9 = September
     5 = May       |   10 = October
     6 = June      |   11 = November
     7 = July      |   12 = December
  */
  const char monthInWords[13][4] = {" ", "JAN", "FEB", "MAR", "APR", "MAY", "JUN", 
                                         "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};
      
        DateTime rtcTime = rtc.now();
        int ss = rtcTime.second();
        int mm = rtcTime.minute();
        int hh = rtcTime.twelveHour();
        int DD = rtcTime.dayOfTheWeek();
        int dd = rtcTime.day();
        int MM = rtcTime.month();
        int yyyy = rtcTime.year();
        
        if (dd < 10) Serial.print("0");
        Serial.print(dd);
        Serial.print("-");
        Serial.print(monthInWords[MM]);
        Serial.print("-");
        Serial.print(yyyy);
      
        Serial.print("  ");
        Serial.print(dayInWords[DD]);
        Serial.print("  ");
        
        Serial.print(hh);
        Serial.print(':');
      
        if (mm < 10) Serial.print("0");
        Serial.print(mm);
        Serial.print(':');
      
        if (ss < 10) Serial.print("0");
        Serial.print(ss);
      
        if (rtcTime.isPM()) Serial.println(" PM"); // print AM/PM indication
        else Serial.println(" AM");
  
}
