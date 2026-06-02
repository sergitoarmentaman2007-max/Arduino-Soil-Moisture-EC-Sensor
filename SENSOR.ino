// Project: Moisture and EC Meter
const int moisturePin = A0;
const int conductivityPin = A1;
const int controlPinD3 = 3;

void setup() {
  Serial.begin(9600);

  pinMode(controlPinD3, OUTPUT);
  digitalWrite(controlPinD3, LOW);
}

void loop() {
  digitalWrite(controlPinD3, LOW);
  pinMode(conductivityPin, INPUT);
  delay(50);
  int moistureReading = analogRead(moisturePin);

  digitalWrite(controlPinD3, HIGH);
  delay(250);
  int ecReading = analogRead(conductivityPin);

  digitalWrite(controlPinD3, LOW);
  delay(50);

  Serial.print("Moisture (A0): ");
  Serial.print(moistureReading);
  Serial.print("  |  Conductivity (A1): ");
  Serial.println(ecReading);

  delay(1000);
}
// created by: Sergio Emanuel Armenta Manjarrez