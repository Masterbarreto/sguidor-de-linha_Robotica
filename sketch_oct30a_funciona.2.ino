//Definição dos pinos de controle do motor
#define M1 9     // PinoVelocidade 1º Motor ( 0 a 255) Porta IN2 ponte H;
#define M2 11   //PinoVelocidade 2º Motor ( 0 a 255)  Porta IN4 ponte H;
#define dir1 8   //PinoDireção do 1º Motor: Para frente / Para trás (HIGH ou LOW) porta IN1 ponte H;
#define dir2 10  //PinoDireção do 2º Motor: Para frente / Para trás (HIGH ou LOW) porta IN3 ponte H;

//**********Definição dos pinos dos sensores**********//
#define pin_S1 7
#define pin_S2 6
#define pin_S3 5
#define pin_S4 
#define pin_S5 

bool Sensor1 = 0;
bool Sensor2 = 0;
bool Sensor3 = 0;
bool Sensor4 = 0;
bool Sensor5 = 0;
//*************************************************//

//variável responsável por controlar a velocidade dos motores
int velocidadeLow = 73; //50
int velocidadeHigh = 255; //255
int velocidadeCurva = 0;

void setup() {
  //Setamos os pinos de controle dos motores como saída
  pinMode(M1, OUTPUT);
  pinMode(M2, OUTPUT);
  pinMode(dir1, OUTPUT);
  pinMode(dir2, OUTPUT);

  //Setamos a direção inicial do motor como 0, isso fará com que ambos os motores girem para frente
  digitalWrite(dir1, LOW);
  digitalWrite(dir2, LOW);
  //Setamos os pinos dos sensores como entrada
  pinMode(pin_S1, INPUT);
  pinMode(pin_S2, INPUT);
  pinMode(pin_S3, INPUT);
  pinMode(pin_S4, INPUT);
  pinMode(pin_S5, INPUT);
}

void loop() {
  //Neste processo armazenamos o valor lido pelo sensor na variável que armazena tais dados.
  Sensor1 = digitalRead(pin_S1);
  Sensor2 = digitalRead(pin_S2);
  Sensor3 = digitalRead(pin_S3);
  
// leitura dos sensores 

//Aqui está toda a lógica de comportamento do robô: Para a cor branca atribuímos o valor 0 e, para a cor preta, o valor 1.
  if ((Sensor1 == 0) && (Sensor2 == 0) && (Sensor3 == 0)) {  // Se detectar na extremidade das faixas duas cores brancas
    analogWrite(M1, velocidadeHigh);           // Ambos motores ligam na mesma velocidade
    analogWrite(M2, velocidadeHigh);
  }

  if ((Sensor1 == 1) && (Sensor2 == 0) && (Sensor3 == 0)) {  // Se detectar um lado preto e o outro branco
    analogWrite(M2, velocidadeCurva);                    // O motor 1 desliga
    analogWrite(M1, velocidadeHigh);
    delay(98);          // O motor 2 fica ligado, fazendo assim o carrinho virar
  }

  if ((Sensor1 == 0) && (Sensor2 == 0) && (Sensor3 == 1)) {  // Se detectar um lado branco e o outro preto
    analogWrite(M2, velocidadeHigh);           //O motor 1 fica ligado
    analogWrite(M1, velocidadeCurva); 
    delay(98);                   // O motor 2 desliga, fazendo assim o carrinho virar no outro sentido
  }

  if ((Sensor1 == 0) && (Sensor2 == 1) && (Sensor3 == 0)) {  // Se detectar um lado branco e o outro preto
    analogWrite(M2, velocidadeHigh);           //O motor 1 fica ligado
    analogWrite(M1, velocidadeHigh);  
  }
  
}