void setup(){
  pinMode(13,OUTPUT);//定义引脚13输出
}
void loop(){
  digitalWrite(13,HIGH);//给13引脚高电平
  delay(1000);//延时1秒
  digitalWrite(13,LOW);
  delay(1000)l;
}
