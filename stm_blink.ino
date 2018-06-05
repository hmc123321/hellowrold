void setup() {
 pinMode (PA5,OUTPUT); // put your setup code here, to run once:
pinMode (PA6,OUTPUT);
}

void loop() {
 digitalWrite (PA6,LOW);
 digitalWrite (PA5,HIGH);
 delay (1000);
 digitalWrite (PA5,LOW);
  delay (1000);
 
 

}
