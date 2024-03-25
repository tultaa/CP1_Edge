int lightSensor = A0;
int greenLED = 4;
int yellowLED = 3;
int redLED = 2;
int buzzer = 5;
int minLightValue = 0;
int maxLightValue = 1023; 

void setup() {
  Serial.begin(9600);
  pinMode(greenLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(redLED, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  int lightValue = analogRead(lightSensor);
  Serial.print("Intensidade da Luz: ");
  Serial.println(lightValue);
  if (lightValue < minLightValue || lightValue > maxLightValue) {
    // Error: O sensor de luz nao está captando corretamente.
    digitalWrite(greenLED, LOW);
    digitalWrite(yellowLED, LOW);
    digitalWrite(redLED, HIGH);
  } else if (lightValue < 40) {
    // Too low / Luz muito baixa
    digitalWrite(greenLED, LOW);
    digitalWrite(yellowLED, HIGH);
    digitalWrite(buzzer, HIGH);
    delay(3000);
    digitalWrite(buzzer, LOW);
  } else if (lightValue > 65) {
    // Too high / Luz muito intensa
    digitalWrite(greenLED, LOW);
    digitalWrite(yellowLED, HIGH);
    digitalWrite(buzzer, HIGH);
    delay(3000);
    digitalWrite(buzzer, LOW);
  } else {
    // Penumbra
    digitalWrite(greenLED, HIGH);
    digitalWrite(yellowLED, LOW);
    digitalWrite(redLED, LOW);
    digitalWrite(buzzer, LOW);
  }
  delay(1000);
}

// Valores vao provavelmente mudar quando feito no hands On
// Valores da luz intensa e escura talvez se invertam.
