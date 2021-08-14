#ifndef _bacaSuhu_
#define _bacaSuhu_
  void readTemp(unsigned long delayTemp){
    currentMillis[3] = millis();
    unsigned long Suhu0=0,Suhu3=0;
    if(currentMillis[3]-delayMillis[3]>=delayTemp){
      delayMillis[3]=currentMillis[3]; 
//      Suhu[0]=(analogRead(temp1)/2.0479); 
      Suhu[1]=(analogRead(temp2)/2.0479); 
      Suhu[3]=(analogRead(temp4)/2.0479); 
      Suhu[4]=(analogRead(temp5)/2.0479);
      
      Suhu[2]=(analogRead(temp3)/23.068); 
      for(int i=0;i<1000;i++){
        Suhu0+=((analogRead(temp1))); 
        delay(delayTemp/1000);
      }
      Suhu[0]=(Suhu0/1000);
      Serial.println(Suhu[0]);
  }
  }
#endif _bacaSuhu_
