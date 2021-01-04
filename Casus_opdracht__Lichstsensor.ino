int led = 12;
int pinButton = 6;

void setup() {
  
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(pinButton, INPUT);
  
}

void loop() {
  int lichtSensor = analogRead(A0); // leest de waarde van de lichtsensor uit op pin A0
  int stateButton = digitalRead(pinButton); // leest de status uit van de led
  
  Serial.println(lichtSensor);      // print de waarde uit in de Serial monitor
  
  if(stateButton == 1) {                    // als de knop ingedrukt is dan -> ...
    digitalWrite(led, HIGH);
    Serial.println("button is pressed");     //debug code
  }
  else {
    digitalWrite(led, LOW);
  }
  
 // Lichtsensor Loop code -----------------------------------------------------------------
 
  if (lichtSensor > 80){            // als de waarde groter is dan 80 -> laat het ledje branden
    digitalWrite(led, LOW);
    Serial.println("Het ledje brand!");    //debug code
  
  }
  
  else {
   
    digitalWrite(led, HIGH);
 
  }
}
