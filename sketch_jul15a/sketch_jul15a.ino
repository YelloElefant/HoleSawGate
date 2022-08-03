


int input;



void setup() {
  Serial.begin(9600);
  pinMode(A4, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A5, INPUT);
  in();
  
  Serial.print("start");
  digitalWrite(A4, 1);
  digitalWrite(A1, 1);
}

void loop() {
  int del = random(1000,5000);
  
  Serial.print(input);
   
  
  if (input == false){
    delay(del);
    digitalWrite(A3, 1);
    digitalWrite(A1, 0);
    digitalWrite(A4, 0);
    delay(3000);
    digitalWrite(A4, 1);
    digitalWrite(A3, 0);
    digitalWrite(A1, 1);
    //delay(1000);
    in();
  }
  else {
    in();
  }


  
}

void in(){
  input = digitalRead(A5); 
  Serial.print(input);
}
