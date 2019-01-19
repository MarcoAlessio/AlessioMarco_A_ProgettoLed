void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(2, OUTPUT);
}

void Lampeggio1() {
  digitalWrite (13, LOW);
  delay (500);
  digitalWrite (13, HIGH);
  delay (500);
  digitalWrite (13, LOW);
  delay (500);
  digitalWrite (13, HIGH);
  delay (500);
  digitalWrite (13, LOW);
  delay (500);
  digitalWrite (13, HIGH);
  delay (500);
  digitalWrite (13, LOW);
  delay (500);
  digitalWrite (13, HIGH);
  delay (500);
  digitalWrite (13, LOW);
  delay (500);  
}

void Lampeggio2() {
  digitalWrite (6, LOW);
  delay (500);
  digitalWrite (6, HIGH);
  delay (500);
  digitalWrite (6, LOW);
  delay (500);
  digitalWrite (6, HIGH);
  delay (500);
  digitalWrite (6, LOW);
  delay (500);
  digitalWrite (6, HIGH);
  delay (500);
  digitalWrite (6, LOW);
  delay (500);
  digitalWrite (6, HIGH);
  delay (500);
  digitalWrite (6, LOW);
  delay (500);  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite (8, HIGH);
  digitalWrite (6, HIGH);
  delay (5000);
  digitalWrite (12, HIGH);
  Lampeggio2();
  digitalWrite (12, LOW);
  digitalWrite (8, LOW);
  digitalWrite (2, HIGH);
  digitalWrite (13, HIGH);
  delay (5000);
  digitalWrite (4, HIGH);
  Lampeggio1();
  digitalWrite (4, LOW);
  digitalWrite (13, LOW);
  digitalWrite (2, LOW);  
}
