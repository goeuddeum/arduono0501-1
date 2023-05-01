int pushButton = 2;

void setup() {
  Serial.begin(9600);
  pinMode(pushButton, INPUT_PULLUP);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  bool buttonState = digitalRead(pushButton);
  if (buttonState == LOW) {
    digitalWrite(LED_BUILTIN, HIGH);
  } else {
    digitalWrite(LED_BUILTIN, LOW);
  }
  Serial.println(buttonState);
  delay(1000); // Delay the blink for a second
}