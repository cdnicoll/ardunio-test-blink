int ledLight = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledLight, OUTPUT);
  Serial.begin(9600); // Starts the serial communication
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledLight, true);
  delay(100);
  digitalWrite(ledLight, false);
}
