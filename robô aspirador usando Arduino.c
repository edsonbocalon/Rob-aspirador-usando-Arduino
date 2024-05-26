// Definições dos pinos do motor
#define ENA 9
#define IN1 8
#define IN2 7
#define ENB 10
#define IN3 6
#define IN4 5

// Definições dos pinos do sensor ultrassônico
#define TRIG 12
#define ECHO 11

void setup() {
  // Configuração dos pinos do motor como saída
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ENB, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  // Configuração dos pinos do sensor ultrassônico
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);

  // Inicializa a comunicação serial
  Serial.begin(9600);
}

void loop() {
  // Medir a distância do obstáculo
  long duration, distance;
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);
  duration = pulseIn(ECHO, HIGH);
  distance = (duration / 2) / 29.1; // Calcula a distância em cm

  // Se a distância for menor que 20 cm, parar e virar
  if (distance < 20) {
    // Parar
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);
    delay(1000); // Pausa de 1 segundo

    // Virar à direita
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
    delay(500); // Tempo para virar
  } else {
    // Andar para frente
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
  }

  // Opcional: Imprimir a distância para depuração
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  delay(100); // Pequena pausa para a próxima leitura
}