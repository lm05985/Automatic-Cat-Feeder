//Cantina trumpet1

int FeedingTimeSound3(){
      //note frequency table
      float lG = 392;
      float A = 440; //A4
      float Bb = 466.16;
      float B = 493.88;
      float C = 523.25;
      float Cs = 554.4;
      float D = 587.33;
      float Eb = 622.25;
      float E = 659.26;
      float F = 698.46;
      float G = 783.99;
      float hAb = 830.6;
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
      
      float BPM = 260;
      float QN = (1/BPM)*60000;
      float EN = QN/2;
      float WN = QN *4;
      float SN = EN/2;  //sixteenth-note
      float TN = SN/2;  //32nd-note
      float FN = TN/2; //64th-note

       //M19
      tone(buzzer, D);
      delay(QN);  
      tone(buzzer, G);
      delay(QN);
      tone(buzzer, D);
      delay(QN);  
      tone(buzzer, G);
      delay(QN); 
      //M20
      tone(buzzer, D);
      delay(EN);  
      tone(buzzer, G);
      delay(QN);
      tone(buzzer, D);
      delay(EN);
      noTone(buzzer);
      delay(EN);  
      tone(buzzer, Cs);
      delay(EN);
      tone(buzzer, D);
      delay(QN);
      //M21
      tone(buzzer, D);
      delay(EN);  
      tone(buzzer, Cs);
      delay(EN);
      tone(buzzer, D);
      delay(EN);
      tone(buzzer, C);
      delay(EN);
      noTone(buzzer);
      delay(EN);
      tone(buzzer, D);
      delay(EN);
      tone(buzzer, Cs);
      delay(EN);
      tone(buzzer, C);
      delay(EN);
      //M22
      tone(buzzer, Bb);
      delay(QN+EN);  
      tone(buzzer, lG);
      delay(EN+2*QN);
      //M23
      tone(buzzer, D);
      delay(QN);  
      tone(buzzer, G);
      delay(QN);
      tone(buzzer, D);
      delay(QN);  
      tone(buzzer, G);
      delay(QN);
      //M24
      tone(buzzer, D);
      delay(EN);  
      tone(buzzer, G);
      delay(QN);
      tone(buzzer, D);
      delay(EN);
      noTone(buzzer);
      delay(EN);  
      tone(buzzer, Cs);
      delay(EN);
      tone(buzzer, D);
      delay(QN);
      //M25
      tone(buzzer, C);
      delay(EN);
      noTone(buzzer);
      delay(EN);  
      tone(buzzer, C);
      delay(QN+EN);
      tone(buzzer, B);
      delay(EN);  
      tone(buzzer, C);
      delay(QN);
      //M26
      tone(buzzer, F);
      delay(EN);  
      tone(buzzer, Eb);
      delay(QN);
      tone(buzzer, D);
      delay(QN);  
      tone(buzzer, C);
      delay(QN+EN);
       //M27
      tone(buzzer, D);
      delay(QN);  
      tone(buzzer, G);
      delay(QN);
      tone(buzzer, D);
      delay(QN);  
      tone(buzzer, G);
      delay(QN); 
      //M28
      tone(buzzer, D);
      delay(EN);  
      tone(buzzer, G);
      delay(QN);
      tone(buzzer, D);
      delay(EN);
      noTone(buzzer);
      delay(EN);  
      tone(buzzer, Cs);
      delay(EN);
      tone(buzzer, D);
      delay(QN);
      //M29
      tone(buzzer, F);
      delay(EN);
      noTone(buzzer);
      delay(EN);   
      tone(buzzer, F);
      delay(QN+EN);
      tone(buzzer, D);
      delay(EN); 
      tone(buzzer, C);
      delay(QN);
      //M30
      tone(buzzer, Bb);
      delay(QN+EN);  
      tone(buzzer, lG);
      delay(EN+2*QN);
      noTone(buzzer);
      delay(TN);
      //M31
      tone(buzzer, lG);
      delay(2*QN);  
      tone(buzzer, Bb);
      delay(2*QN);
      //M32
      tone(buzzer, D);
      delay(EN+QN);  
      tone(buzzer, F);
      delay(2*QN+EN);
      //M33
      tone(buzzer, hAb);
      delay(QN);  
      tone(buzzer, G);
      delay(QN);
      tone(buzzer, Cs);
      delay(EN);  
      tone(buzzer, D);
      delay(QN+EN);
      //M34
      tone(buzzer, Bb);
      delay(QN);
      noTone(buzzer);

      
}
