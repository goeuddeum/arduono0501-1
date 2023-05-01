
int led = 8; //El led lo conectamos al pin digital 8


void setup() {
  
  pinMode(led, OUTPUT); //El led será de tipo salida, es decir que el arduino enviará la información
}

// Le decimos al arduino que se ejecute continuamente,
void loop() {
  digitalWrite(led, HIGH);   // Encendemos el led
  delay(1000);               // Esperamos un segundo
  digitalWrite(led, LOW);    // apagamos el led
  delay(1000);               // Esperamos un segundo
}