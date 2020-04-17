
//L298 motor driver. Seperate power supply
// for motor ensures 
//accuracy and speed.
int in1=10;
int in2=9;
int ena=11;

void setup() {
Serial.begin(9600);

pinMode(in1,OUTPUT);
pinMode(in2,OUTPUT);
pinMode(ena,OUTPUT);

}
void loop() {

analogWrite(ena,180);//speed can be adjustted. Set 255 top speed.
digitalWrite(in1,HIGH);
digitalWrite(in2,LOW);
delay(1000);

}
