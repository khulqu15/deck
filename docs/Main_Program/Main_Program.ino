//iki program anyar rek

#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);
#include <ArduinoJson.h>
#include <TimeLib.h>

#include "hardwareInit.h"
#include "bacaMQ.h"
#include "bacaFlame.h"
#include "bacaSuhu.h"
#include "case.h"
#include "tombol.h"

String kirim = "";
void setup() {
  Serial3.begin(4800);
  Serial.begin(115200);
  lcd.begin();
  lcd.clear();
  pinMode(temp1,INPUT);
  pinMode(temp2,INPUT);
  pinMode(temp3,INPUT);
  pinMode(temp4,INPUT);
  pinMode(temp5,INPUT);

  pinMode(button,INPUT_PULLUP);
  pinMode(buzzer,OUTPUT);
  digitalWrite(buzzer,LOW);
  
  digitalWrite(temp1,LOW);
  digitalWrite(temp2,LOW);
  digitalWrite(temp3,LOW);
  digitalWrite(temp4,LOW);
  digitalWrite(temp5,LOW);
  
  pinMode(Smoke0,INPUT);
  pinMode(Smoke1,INPUT);
  pinMode(Smoke2,INPUT);
  pinMode(Smoke3,INPUT);
  pinMode(Smoke4,INPUT);
  pinMode(Smoke5,INPUT);
  pinMode(Smoke6,INPUT);
  pinMode(Smoke7,INPUT);
  pinMode(Smoke8,INPUT);
  pinMode(Smoke9,INPUT);
  
  pinMode(sensorA1,INPUT);
  pinMode(sensorA2,INPUT);
  pinMode(sensorA3,INPUT);
  pinMode(sensorA4,INPUT);
  pinMode(sensorA5,INPUT);
  
  pinMode(sensorB1,INPUT);
  pinMode(sensorB2,INPUT);
  pinMode(sensorB3,INPUT);
  pinMode(sensorB4,INPUT);
  pinMode(sensorB5,INPUT);
  
  pinMode(sensorC1,INPUT);
  pinMode(sensorC2,INPUT);
  pinMode(sensorC3,INPUT);
  pinMode(sensorC4,INPUT);
  pinMode(sensorC5,INPUT);

  pinMode(relay1,OUTPUT);
  pinMode(relay2,OUTPUT);
  pinMode(relay3,OUTPUT);
  pinMode(relay4,OUTPUT);
  pinMode(relay5,OUTPUT);
  pinMode(relay6,OUTPUT);
  pinMode(relay7,OUTPUT);
  pinMode(relay8,OUTPUT);
  pinMode(relay9,OUTPUT);
  pinMode(relay10,OUTPUT);
  
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

  
  lcd.setCursor(1,0);
  lcd.print("SYSTEM  ACTIVE");
  delay(2000);
  lcd.clear();

}



void loop() {
//  currentMillis[4]=millis();
//  if(currentMillis[4]-delayMillis[4]>=1000){
//    delayMillis[4]=currentMillis[4];
//    caseRoom();
//  }

  Serial.print("buff alarm :");
  Serial.println(buff_alarm);
  Serial.print("flag alarm :");
  Serial.println(flag_alarm);

  readTemp(500); //Baca suhu
  readMQ(100);   //Baca asap
  readFlame(100); //Baca Api

  debugSmoke();
  debugFlame();
  debugTemp();
  alarm();//alarm/

  debugSmoke();
  debugFlame();
  debugTemp();
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Room :");
  kirim = caseRoom();
  StaticJsonDocument<300> doc;
  doc["data"] = kirim;
  serializeJson(doc, Serial3);
  Serial.println(kirim);
  delay(200);
  
}
