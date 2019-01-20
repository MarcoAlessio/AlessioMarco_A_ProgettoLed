//Dichiaro le variabili globali che identificano i 3 colori del semaforo, così facendo se si cambia 
//l'ingresso di un cavo occorre modificare il numero solo in un posto
int V1 = 12;
int G1 = 10;
int R1 = 8;
int V2 = 6;
int G2 = 4;
int R2 = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(V1, OUTPUT);
  pinMode(G1, OUTPUT);
  pinMode(R1, OUTPUT);
  pinMode(V2, OUTPUT);
  pinMode(G2, OUTPUT);
  pinMode(R2, OUTPUT);
}

void lampeggio1() {
  for(int i=0; i<4; i++){
  digitalWrite (V1, LOW);
  delay (500);
  digitalWrite (V1, HIGH);
  delay (500);
  }
}

void lampeggio2() {
  for(int i=0; i<4; i++){
  digitalWrite (V2, LOW);
  delay (500);
  digitalWrite (V2, HIGH);
  delay (500); 
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite (R1, HIGH);
  digitalWrite (V2, HIGH);
  delay (5000);
  lampeggio2();
  digitalWrite (V2, LOW);
  digitalWrite (G1, HIGH);
  digitalWrite (G2, HIGH);
  delay (4000);
  digitalWrite (G1, LOW);
  digitalWrite (G2, LOW);
  digitalWrite (R1, LOW);
  digitalWrite (R2, HIGH);
  digitalWrite (V1, HIGH);
  delay (5000);
  lampeggio1();
  digitalWrite (V1, LOW);
  digitalWrite (G2, HIGH);
  digitalWrite (G1, HIGH);
  delay (4000);
  digitalWrite (G2, LOW);
  digitalWrite (G1, LOW);
  digitalWrite (R2, LOW);  
}
