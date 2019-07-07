int myPins[] = {11,12,13};

void setup() {
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {    
  for (int i = 0; i <= sizeof(myPins); i++) {
    digitalWrite(myPins[i-1],LOW);
    digitalWrite(myPins[i],HIGH);
    delay(500);
  }
}
