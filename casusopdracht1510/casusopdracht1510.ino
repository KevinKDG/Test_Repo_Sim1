#include <ezButton.h>


#define LDR A2
#define LED 3
ezButton button(4);

bool ledState;
bool lichtState;
bool newstate;
void setup() {
  // put your setup code here, to run once:
pinMode(LDR,INPUT_PULLUP);
pinMode(LED,OUTPUT);
button.setDebounceTime(50);
lichtState = digitalRead(LDR);
Serial.begin(9600);
lichtState = true;
}

void loop() {
  // put your main code here, to run repeatedly:
button.loop();
if(button.isPressed())
{
  Serial.println("pressed");
  if(ledState)
  {
    ledState = false;
  }else
  {
    ledState = true;
  }
}
if(analogRead(LDR) >=250)
{
  newstate = true;
}else{
  newstate = false;
}
  if(lichtState != newstate)
  {
    if(!newstate)
  {
    Serial.println("dark");
    ledState = false;
    lichtState = false;
  }else
  {
    Serial.println("light");
    ledState = true;
    lichtState = true;
  }
  }

if(ledState)
  {
    digitalWrite(LED,HIGH);
  }else
  {
    digitalWrite(LED,LOW);
  }
}
