#ifndef _bacaMQ_
#define _bacaMQ_
void readMQ(unsigned long delayMQ){
  currentMillis[1] = millis();
  currentMillis[2] = millis();
  if(currentMillis[1]-delayMillis[1]>=delayMQ){// karena konversi 1 ADC pada datasheet max 260uSx10 sensor ada 2.6mS ambil aman kali 2 bulatkan jadi 5 mS
     delayMillis[1]=currentMillis[1];
     
     adcMQ[0]=analogRead(Smoke0);
     adcMQ[1]=analogRead(Smoke1);
     adcMQ[2]=analogRead(Smoke2);
     adcMQ[3]=analogRead(Smoke3);
     adcMQ[4]=analogRead(Smoke4);
     adcMQ[5]=analogRead(Smoke5)+100;
     adcMQ[6]=analogRead(Smoke6);
     adcMQ[7]=analogRead(Smoke7);
     adcMQ[8]=analogRead(Smoke8);
     adcMQ[9]=analogRead(Smoke9);

     rawMQ[0]=map(adcMQ[0],0,1024,0,100);
     rawMQ[1]=map(adcMQ[1],0,1024,0,100);
     rawMQ[2]=map(adcMQ[2],0,1024,0,100);
     rawMQ[3]=map(adcMQ[3],0,1024,0,100);
     rawMQ[4]=map(adcMQ[4],0,1024,0,100);
     rawMQ[5]=map(adcMQ[5],0,1024,0,100);
     rawMQ[6]=map(adcMQ[6],0,1024,0,100);
     rawMQ[7]=map(adcMQ[7],0,1024,0,100);
     rawMQ[8]=map(adcMQ[8],0,1024,0,100);
     rawMQ[9]=map(adcMQ[9],0,1024,0,100);


//     Serial.println();
//     Serial.println("Sensor MQ2(%)");
//     Serial.print(rawMQ[0]);
//     Serial.print("|");
//     Serial.print(rawMQ[1]);
//     Serial.print("|");
//     Serial.print(rawMQ[2]);
//     Serial.print("|");
//     Serial.print(rawMQ[3]);
//     Serial.print("|");
//     Serial.print(rawMQ[4]);
//     Serial.print("|");
//     Serial.print(rawMQ[5]);
//     Serial.print("|");
//     Serial.print(rawMQ[6]);
//     Serial.print("|");
//     Serial.print(rawMQ[7]);
//     Serial.print("|");
//     Serial.print(rawMQ[8]);
//     Serial.print("|");
//     Serial.print(rawMQ[9]);
//     Serial.println("|");
  }

}
#endif  _bacaMQ_
