int en1 = 3;
int in1=4;
int in2=7;
int in3=8;
int in4=12;


int en2 = 5;
char t;
void setup(){
  
pinMode(in1,OUTPUT);
pinMode(in2,OUTPUT);
pinMode(in3,OUTPUT);
pinMode(in4,OUTPUT);

Serial.begin(9600);

 }

void loop() {
if(Serial.available()){
t=Serial.read();
Serial.print(t);
if(t=='F'){
  digitalWrite(in1,1);
  digitalWrite(in3,1);
}
else if (t=='B'){
  digitalWrite(in2,1);
  digitalWrite(in4,1);
  digitalWrite(in1,0);
  digitalWrite(in3,0);
 
}
 else if (t=='L'){
  digitalWrite(in2,0);
  digitalWrite(in4,0);
  digitalWrite(in1,0);
  digitalWrite(in3,1);
  
 }
else if (t=='R'){
  digitalWrite(in2,0);
  digitalWrite(in4,0);
  digitalWrite(in1,1);
  digitalWrite(in3,0);
  
}
else if(t=='S'){
  digitalWrite(in2,0);
  digitalWrite(in4,0);
  digitalWrite(in1,0);
  digitalWrite(in3,0);
 
}}
}
