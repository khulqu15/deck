#ifndef _tombol_
#define _tombol_
void buzz(){
  unsigned long previousMillis;
  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= 1500) {
    previousMillis = currentMillis;
    if (buzState == LOW) {
      buzState = HIGH;
    } else {
      buzState = LOW;
    }
    digitalWrite(buzzer, buzState);
  }
}

void alarm(){
  if(digitalRead(button)==LOW){
    buff_alarm=1;}

  if(buff_alarm==0&&flag_alarm==1){
    buzz();
  }
  if(buff_alarm==1&&flag_alarm==0){
    digitalWrite(buzzer,LOW);
    buff_alarm=0;
    }
  if(buff_alarm==1&&flag_alarm==1){
    digitalWrite(buzzer,LOW);
    buff_alarm=0;
    flag_alarm=0;
    }
  if(buff_alarm==0&&flag_alarm==0){
    digitalWrite(buzzer,LOW);
    }
}
#endif  _tombol_
