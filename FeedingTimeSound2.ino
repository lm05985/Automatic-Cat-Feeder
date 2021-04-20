//Eat em up trumpet1

int FeedingTimeSound2(){
      //note frequency table
      float A = 440;
      float Bb = 466.16;
      float B = 493.88;
      float C = 523.25;
      float D = 587.33;
      float Eb = 622.25;
      float E = 659.26;
      float F = 698.46;
      float G = 783.99;
      float hA = 880;
      float hBb = 932.33;
      float hB = 987.77;
      float hC = 1046.5;
      float hCs = 1108.73;
      float hD = 1174.66;
      float hEb = 1244.51;
      float hE = 1318.51;
      float hF = 1396.9;
      float hG = 1567.98;
      
      
      //note duration table in ms
      
      float BPM = 180;
      float QN = (1/BPM)*60000;
      float EN = QN/2;
      float WN = QN *4;
      float SN = EN/2;  //sixteenth-note
      float TN = SN/2;  //32nd-note
      float FN = TN/2; //64th-note

      //M1
      tone(buzzer, D);
      delay(EN);  
      tone(buzzer, F);
      delay(EN);   
      tone(buzzer, D);
      delay(EN);      
      tone(buzzer, F);
      delay(EN);
      tone(buzzer,D);    
      delay(QN);
      noTone(buzzer);
      delay(TN);
      tone(buzzer,D);    
      delay(QN);
      noTone(buzzer);
      delay(TN);
      //M2
      tone(buzzer, D);
      delay(EN);
      noTone(buzzer);
      delay(FN);
      tone(buzzer, D);
      delay(SN);
      noTone(buzzer);
      delay(FN);
      tone(buzzer, D);
      delay(SN);
      noTone(buzzer);
      delay(FN);
      tone(buzzer, D);
      delay(EN);
      tone(buzzer,F);    
      delay(EN);
      tone(buzzer,D);    
      delay(QN+EN);
      noTone(buzzer);
}
