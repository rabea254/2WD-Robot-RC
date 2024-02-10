int IN1=7;
int IN2=8;
int IN3=9;
int IN4=10;
int IN5=5;
int IN6=6;
String data;
void setup() {
  // put your setup code here, to run once:
pinMode(IN1,OUTPUT);
pinMode(IN2,OUTPUT);
pinMode(IN3,OUTPUT);
pinMode(IN4,OUTPUT);
Serial.begin(9600);
}



void loop() {
  if(Serial.available()){
    data=Serial.readString();
  }
 if(data=="f"){
digitalWrite(IN1,1);
digitalWrite(IN2,0);
digitalWrite(IN3,1);
digitalWrite(IN4,0);
   analogWrite(IN5,120);
   analogWrite(IN6,120);
 }else if(data=="b"){
digitalWrite(IN1,0);
digitalWrite(IN2,1);
digitalWrite(IN3,0);
digitalWrite(IN4,1);
   analogWrite(IN5,120);
   analogWrite(IN6,120); 
   
 }else if(data=="r"){
digitalWrite(IN1,1);
digitalWrite(IN2,0);
digitalWrite(IN3,0);
digitalWrite(IN4,0);
     analogWrite(IN5,120); 
 }else if(data=="l"){
digitalWrite(IN1,0);
digitalWrite(IN2,0);
digitalWrite(IN3,1);
digitalWrite(IN4,0);
   analogWrite(IN6,120);
 }else if(data=="s"){
digitalWrite(IN1,0);
digitalWrite(IN2,0);
digitalWrite(IN3,0);
digitalWrite(IN4,0);
 }}
