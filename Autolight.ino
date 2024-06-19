const int trigPin = 8;  
const int echoPin = 6;
double duration, distance;
const int rh =18;
const int rl =17;
const int lh = 15;
const int ll =14 ;
const int y =13 ;
const int r =12 ;
void setup() {
   Serial.begin(9600);
   pinMode(5, INPUT);
   pinMode(3, INPUT);
   pinMode(2, INPUT);
   pinMode(10, INPUT);  
   pinMode(echoPin, INPUT);
   pinMode(trigPin, OUTPUT);
   pinMode(rh, OUTPUT);
   pinMode(rl, OUTPUT);
   pinMode(lh, OUTPUT);
   pinMode(ll, OUTPUT);
   pinMode(y, OUTPUT);
   pinMode(r, OUTPUT);
   
}

void loop() {
  int r=analogRead(5);              //700
  int l=analogRead(3);              //1000
  float R=analogRead(2);             //500
  float H=analogRead(10);            //240
  digitalWrite(trigPin, LOW);  
  delayMicroseconds(2);  
  digitalWrite(trigPin, HIGH);  
  delayMicroseconds(10);  
  digitalWrite(trigPin, LOW);  
  duration = pulseIn(echoPin, HIGH);
  distance = (duration*.0343)/2;       //200-175
  int D=distance;
  delay(1000);
 if((R<500)||(H<1000)){
  digitalWrite(rh,LOW);
  digitalWrite(rl,LOW);
  digitalWrite(lh,LOW);
  digitalWrite(ll,LOW);
  digitalWrite(y,HIGH);
  digitalWrite(r,LOW);
  //("Yellow Light High");
 }

  else if((l<1000)&&(r<700)){
  digitalWrite(rh,LOW);
  digitalWrite(rl,HIGH);
  digitalWrite(lh,LOW);
  digitalWrite(ll,HIGH);
  digitalWrite(y,LOW);
  digitalWrite(r,LOW);
  //("R Light Low");
  //("L Light Low");
 }
 else if(r<700){
  digitalWrite(rh,LOW);
  digitalWrite(rl,HIGH);
  digitalWrite(lh,HIGH);
  digitalWrite(ll,LOW);
  digitalWrite(y,LOW);
  digitalWrite(r,LOW);
  //("R Light Low");
  //("L Light High");
 }
 else if(l<1000){
  digitalWrite(rh,HIGH);
  digitalWrite(rl,LOW);
  digitalWrite(lh,LOW);
  digitalWrite(ll,HIGH);
  digitalWrite(y,LOW);
  digitalWrite(r,LOW);
  //("R Light High");
  //("L Light Low");
 }
 else{
  digitalWrite(rh,HIGH);
  digitalWrite(rl,LOW);
  digitalWrite(lh,HIGH);
  digitalWrite(ll,LOW);
  digitalWrite(y,LOW);
  digitalWrite(r,LOW);
  //("R Light High");
  //("L Light High");
 }
}
