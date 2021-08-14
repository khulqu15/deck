#ifndef _case_
#define _case_
  String caseRoom(){
    String pesankirim = "";
    lcd.setCursor(6,0);
    if(rawMQ[9]>=20||flameC==1){
      //room 1
    digitalWrite(relay1,LOW);
    lcd.print("1");
    pesankirim+='1';
    flag_alarm=1;
    }
    else{
      pesankirim+='0';
    digitalWrite(relay1,HIGH);
    }
    
    if(rawMQ[5]>=18){
      //room 2
    digitalWrite(relay2,LOW);
    lcd.print("2");
    pesankirim+='1';
    flag_alarm=1;
    }
    else{
      pesankirim+='0';
    digitalWrite(relay2,HIGH);
    }
    
    if(rawMQ[4]>=7){
      //room 3
    digitalWrite(relay3,LOW);
    lcd.print("3");
    pesankirim+='1';
    flag_alarm=1;
    }
    else{
      pesankirim+='0';
    digitalWrite(relay3,HIGH);
    }
    
    if(rawMQ[2]>=11||Suhu[4]>=nilaiSuhu){
      //room 4
    digitalWrite(relay4,LOW);
    lcd.print("4");
    pesankirim+='1';
    flag_alarm=1;
    }
    else{
      pesankirim+='0';
    digitalWrite(relay4,HIGH);
    }
    
    if(rawMQ[3]>=4||Suhu[3]>=nilaiSuhu){
      //room 5
    digitalWrite(relay5,LOW);
    lcd.print("5");
    pesankirim+='1';
    flag_alarm=1;
    }
    else{
      pesankirim+='0';
    digitalWrite(relay5,HIGH);
    }
    
    if(rawMQ[8]>=6||Suhu[1]>=nilaiSuhu){
      //room 6
    digitalWrite(relay6,LOW);
    lcd.print("6");   
    pesankirim+='1';
    flag_alarm=1;
    }
    else{
      pesankirim+='0';
    digitalWrite(relay6,HIGH);
    }
        
    if(rawMQ[0]>=25||flameB==1){
      //room 7
    digitalWrite(relay7,LOW);
    lcd.print("7");
    pesankirim+='1';
    flag_alarm=1;
    }    
    else{
      pesankirim+='0';
    digitalWrite(relay7,HIGH);
    }
    
    if(rawMQ[1]>=16||flameA==1){
      //room 8
    digitalWrite(relay8,LOW);
    lcd.print("8");
    pesankirim+='1';
    flag_alarm=1;
    }
    else{
      pesankirim+='0';
    digitalWrite(relay8,HIGH);
    }
    
    if(rawMQ[7]>=13/*||Suhu[0]>=nilaiSuhu*/){
      //room 9
    digitalWrite(relay9,LOW);
    lcd.print("9");
    pesankirim+='1';
    flag_alarm=1;
    }
    else{
      pesankirim+='0';
    digitalWrite(relay9,HIGH);
    }
    
    if(rawMQ[6]>=7||Suhu[2]>=nilaiSuhu){
      //room 10
    digitalWrite(relay10,LOW);
    lcd.print("10");
    pesankirim+='1';
    flag_alarm=1;
    }
    else{
    pesankirim+='0';
    digitalWrite(relay10,HIGH);
    }
    
    
    if(pesankirim == "0000000000"){
    lcd.setCursor(0,1);
    lcd.print("Ruang aman");
//    flag_alarm=0;
    digitalWrite(relay1,HIGH);
    digitalWrite(relay2,HIGH);
    digitalWrite(relay3,HIGH);
    digitalWrite(relay4,HIGH);
    digitalWrite(relay5,HIGH);
    digitalWrite(relay6,HIGH);
    digitalWrite(relay7,HIGH);
    digitalWrite(relay8,HIGH);
    digitalWrite(relay9,HIGH);
    digitalWrite(relay10,HIGH);               
  }
  return pesankirim;
  
 }
 debugSmoke(){
//   lcd.setCursor(0,0);
//   lcd.print("Smoke 2 : ");
//   lcd.print(rawMQ[5]);
//   lcd.print(" %");
//   Serial.print("Smoke 2: ");
//   Serial.println(rawMQ[5]);
//   delay(500);
//   
//   lcd.clear();
//   lcd.setCursor(0,0);
//   lcd.print("Smoke 2 : ");
//   lcd.print(rawMQ[1]);
//   lcd.print(" %");
//   delay(1000);
//   
//   lcd.clear();
//   lcd.setCursor(0,0);
//   lcd.print("Smoke 3 : ");
//   lcd.print(rawMQ[2]);
//   lcd.print(" %");
//   delay(1000);
//   
//   lcd.clear();
//   lcd.setCursor(0,0);
//   lcd.print("Smoke 4 : ");
//   lcd.print(rawMQ[3]);
//   lcd.print(" %");
//   delay(1000);
//   
//   lcd.clear();
//   lcd.setCursor(0,0);
//   lcd.print("Smoke 5 : ");
//   lcd.print(rawMQ[4]);
//   lcd.print(" %");
//   delay(1000);
//   
//   lcd.clear();
//   lcd.setCursor(0,0);
//   lcd.print("Smoke 6 : ");
//   lcd.print(rawMQ[5]);
//   lcd.print(" %");
//   delay(1000);
   
//   lcd.clear();
//   lcd.setCursor(0,0);
//   lcd.print("Smoke 7 : ");
//   lcd.print(rawMQ[6]);
//   lcd.print(" %");
//   delay(1000);
   
//   lcd.clear();
//   lcd.setCursor(0,0);
//   lcd.print("Smoke 8 : ");
//   lcd.print(rawMQ[7]);
//   lcd.print(" %");
//   delay(1000);
   
//   lcd.clear();
//   lcd.setCursor(0,0);
//   lcd.print("Smoke 9 : ");
//   lcd.print(rawMQ[8]);
//   lcd.print(" %");
//   delay(1000);
   
//   lcd.clear();
//   lcd.setCursor(0,0);
//   lcd.print("Smoke 10 : ");
//   lcd.print(rawMQ[9]);
//   lcd.print(" %");
//   delay(1000);
 }

 debugFlame(){
//   lcd.clear();
//   lcd.setCursor(0,0);
//   lcd.print("Flame 1 : ");
//   if(flameA==0)
//    lcd.print("Normal");
//   else
//    lcd.print("Fire");    
//   delay(250);
//   
//   lcd.clear();
//   lcd.setCursor(0,0);
//   lcd.print("Flame 2 : ");
//   lcd.print(flameB);
//   delay(1000);
//   
////   lcd.clear();
////   lcd.setCursor(0,0);
////   lcd.print("Flame 3 : ");
////   lcd.print(flameC);
////   delay(1000);
}

 debugTemp(){
  // 4 ruang 4
  // 3 ruang 5
  // 2 ruang 10
  // 1 ruang 6
  // 0 error ruang 9
//   lcd.clear();
//   lcd.setCursor(0,0);
//   lcd.print("Temp 9: ");
//   lcd.print(Suhu[0]);
//   lcd.print(" *C");
//   Serial.print(Suhu[0]);
//   Serial.println("*C");
//   delay(250);
//
//   lcd.clear();/
//   lcd.setCursor(0,1);
//   lcd.print("Temp 2 :");
//   lcd.print(Suhu[1]);
//   Serial.println(Suhu[1]);
//   lcd.print(" *C");
//   delay(1000);
//
//   lcd.clear();
//   lcd.setCursor(0,1);
//   lcd.print("Temp 3 : ");
//   lcd.print(Suhu[2]);
//   lcd.print(" *C");
//   delay(1000);

//   lcd.clear();
//   lcd.setCursor(0,0);
//   lcd.print("Temp 4 : ");
//   lcd.print(Suhu[3]);
//   lcd.print(" *C");
//   delay(1000);

//   lcd.clear();
//   lcd.setCursor(0,0);
//   lcd.print("Temp 5 : ");
//   lcd.print(Suhu[4]);
//   lcd.print(" *C");
//   delay(1000);
  }
#endif  _case_
