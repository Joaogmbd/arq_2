//set digital pins
const int vermelho = 13;
const int verde = 12;
const int amarelo = 8;

// naming pins according to its colors
void setup() {
  // initializing pins as output.
  pinMode(vermelho, OUTPUT);

  pinMode(amarelo, OUTPUT);

  pinMode(verde, OUTPUT);
}

// Loop Function
void loop() {
  digitalWrite(vermelho, HIGH);   
  delay(7000);                       
  digitalWrite(vermelho, LOW);
  delay(100);
  digitalWrite(verde, HIGH);   
  delay(5000);                       
  digitalWrite(verde, LOW);
  delay(100);
  digitalWrite(amarelo, HIGH);   
  delay(1000);                       
  digitalWrite(amarelo, LOW);
  delay(100);
}

//Pending: modular function called "blinkColor", passing color and delay time as arguments.
