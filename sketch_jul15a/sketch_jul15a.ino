
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(A4, OUTPUT);
}


void loop() {

  int del = random(1000,5000);
  
  digitalWrite(A4, HIGH);   
  delay(del);                
  digitalWrite(A4, LOW);  
  delay(del);                
}
