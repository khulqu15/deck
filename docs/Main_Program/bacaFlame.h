#ifndef _bacaFlame_
#define _bacaFlame_
  void readFlame(unsigned long delayFlame){
    currentMillis[0] = millis();
    if(currentMillis[0]-delayMillis[0]>=delayFlame){
      delayMillis[0]=currentMillis[0];

      a[0]=digitalRead(sensorA1);
      a[1]=digitalRead(sensorA2);
      a[2]=digitalRead(sensorA3);
      a[3]=digitalRead(sensorA4);
      a[4]=digitalRead(sensorA5);
      
      b[0]=digitalRead(sensorB1);
      b[1]=digitalRead(sensorB2);
      b[2]=digitalRead(sensorB3);
      b[3]=digitalRead(sensorB4);
      b[4]=digitalRead(sensorB5);
      
      c[0]=digitalRead(sensorC1);
      c[1]=digitalRead(sensorC2);
      c[2]=digitalRead(sensorC3);
      c[3]=digitalRead(sensorC4);
      c[4]=digitalRead(sensorC5);

      flameA=a[0]+a[1]+a[2]+a[3]+a[4];
      flameB=b[0]+b[1]+b[2]+b[3]+b[4];
      flameC=c[0]+c[1]+c[2]+c[3]+c[4];

////      Serial.println();
////      Serial.println("Sensor Flame A");
//      Serial.print(a[0]);
////      Serial.print("|");
//      Serial.print(a[1]);
////      Serial.print("|");
//      Serial.print(a[2]);
////      Serial.print("|");
//      Serial.print(a[3]);
////      Serial.print("|");
//      Serial.println(a[4]);
////      Serial.println("|");
//      
////      Serial.println("Sensor Flame B");
//      Serial.print(b[0]);
////      Serial.print("|");
//      Serial.print(b[1]);
////      Serial.print("|");
//      Serial.print(b[2]);
////      Serial.print("|");
//      Serial.print(b[3]);
////      Serial.print("|");
//      Serial.println(b[4]);
////      Serial.println("|");
//      
////      Serial.println("Sensor Flame C");
//      Serial.print(c[0]);
////      Serial.print("|");
//      Serial.print(c[1]);
////      Serial.print("|");
//      Serial.print(c[2]);
////      Serial.print("|");
//      Serial.print(c[3]);
////      Serial.print("|");
//      Serial.println(c[4]);
////      Serial.println("|");
    }
  }
#endif  _bacaFlame_
