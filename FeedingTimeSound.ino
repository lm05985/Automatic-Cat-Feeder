//GS Fight song EUPH

int FeedingTimeSound(){
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
      
      float BPM = 155;
      float QN = (1/BPM)*60000;
      float EN = QN/2;
      float WN = QN *4;
      
      tone(buzzer, G);
      delay(EN);
      noTone(buzzer);    
      tone(buzzer, hA);
      delay(EN);
      noTone(buzzer);        
      tone(buzzer, hBb);
      delay(EN);
      noTone(buzzer);      
      tone(buzzer, hBb);
      delay(EN);
      noTone(buzzer);    
      delay(QN);
      //M3
      tone(buzzer, hC);
      delay(EN);
      tone(buzzer, hBb);
      delay(EN);
      noTone(buzzer);    
      delay(QN);
      //M4 M5
      tone(buzzer, hD);
      delay(EN);
      tone(buzzer, hCs);
      delay(EN);
      tone(buzzer, hD);
      delay(EN);
      tone(buzzer, hEb);
      delay(QN);
      tone(buzzer, hD);
      delay(EN);
      tone(buzzer, hB);
      delay(EN);
      tone(buzzer, hG);
      delay(EN);
      //M6
      tone(buzzer, hC);
      delay(EN);
      tone(buzzer, hBb);
      delay(EN);
      tone(buzzer, hA);
      delay(EN);
      tone(buzzer, G);
      delay(EN);
      //M7
      tone(buzzer, F);
      delay(EN);
      tone(buzzer, Eb);
      delay(EN);
      tone(buzzer, D);
      delay(EN);
      tone(buzzer, C);
      delay(EN);
      //M8 +1
      tone(buzzer, Bb);
      delay(EN);
      tone(buzzer, F);
      delay(QN);
      tone(buzzer, D);
      delay(EN);
      tone(buzzer, Bb);
      delay(EN);
      noTone(buzzer);
      delay(EN);
      //TAG M1
      tone(buzzer, hC);
      delay(EN);
      tone(buzzer, hBb);
      delay(EN);
      //TAG M2
      tone(buzzer, hD);
      delay(EN);
      tone(buzzer, hC);
      delay(EN);
      tone(buzzer, hEb);
      delay(EN);
      tone(buzzer, hD);
      delay(EN);
      //TAG M3 and M4
      tone(buzzer, hCs);
      delay(QN);
      tone(buzzer, hB);
      delay(QN);
      tone(buzzer, hBb);
      delay(WN);
      noTone(buzzer);
}
