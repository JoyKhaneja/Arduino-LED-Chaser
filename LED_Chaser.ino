void setup () {
  for(int pin=2; pin<14; pin++){
    pinMode(pin,OUTPUT);
  }
}

void loop() {

  int t=20;

  //---------------------->>> for this side
  for(int i=2; i<14; i++){
    digitalWrite(i, HIGH);
    delay(t);
    digitalWrite(i, HIGH); delay(t);
    digitalWrite(i+1, HIGH); delay(t);
    digitalWrite(i+2, HIGH); delay(t);
    digitalWrite(i, LOW); delay(t);
    digitalWrite(i, LOW);
    
  }

  //<<<---------------------- for this side
  for(int i=13; i>1; i--){
   digitalWrite(i, HIGH); delay(t);
   digitalWrite(i-1, HIGH); delay(t);
   digitalWrite(i-2, HIGH); delay (t);
   digitalWrite(i, LOW); delay (t);
   digitalWrite(i-1, LOW);
  }
}

