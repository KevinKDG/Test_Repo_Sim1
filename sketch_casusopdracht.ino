const int ledPin = 13;
const int ldrPin = A0;
const int buttonPin = 2; 

int buttonState = 0; 

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(ldrPin, INPUT);
}

void loop() {
  int ldrStatus = analogRead(ldrPin);

  if (ldrStatus <= 450)
  {
    digitalWrite(ledPin, HIGH);

  }
  else
  {
    digitalWrite(ledPin, LOW);

  }
  
buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
     digitalWrite(ledPin, HIGH);
  }
}
