#ifndef _hardwareInit_
#define _hardwareInit_

  //batas presentase asap
  #define nilaiAsap 20
  //batas suhu
  #define nilaiSuhu 50

  #define button  53
  #define buzzer  49
  
  //flame sensor A
  #define sensorA1 22
  #define sensorA2 24
  #define sensorA3 26
  #define sensorA4 28
  #define sensorA5 30
  
  //flame sensor B
  #define sensorB1 40
  #define sensorB2 42
  #define sensorB3 44
  #define sensorB4 46
  #define sensorB5 48
  
  //flame sensor C
  #define sensorC1 23
  #define sensorC2 25
  #define sensorC3 27
  #define sensorC4 29
  #define sensorC5 31
  
  //sensor ds18b2
  #define temp1 A0
  #define temp2 A1
  #define temp3 56
  #define temp4 A3
  #define temp5 A4
  
  
  //sensor MQ2
  #define Smoke0 A5
  #define Smoke1 A6
  #define Smoke2 A7
  #define Smoke3 A8
  #define Smoke4 A9
  #define Smoke5 A10
  #define Smoke6 A11
  #define Smoke7 A12
  #define Smoke8 A13
  #define Smoke9 A14
  
  
  //Relay
  #define relay1  13
  #define relay2  12
  #define relay3  11
  #define relay4  10
  #define relay5  9
  #define relay6  8
  #define relay7  7
  #define relay8  6
  #define relay9  5
  #define relay10 3

  int buzState=LOW;
  int adcMQ[10],rawMQ[10];
  unsigned long delayMillis[4];
  unsigned long currentMillis[4];
  bool a[4],b[4],c[4],flameA,flameB,flameC,flag_alarm=0,buff_alarm=0;
  float RawSuhu[5],Suhu[5],SigmaSuhu[5]={0,0,0,0,0};
#endif  _hardwareInit_
