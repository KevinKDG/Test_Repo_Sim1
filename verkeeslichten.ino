int red = 9;
int blauw = 10;
int groen = 11;
void setup(){
    pinMode(red, OUTPUT);
    pinMode(blauw, OUTPUT);
    pinMode(groen, OUTPUT);
    }

void loop() {
 digitalWrite(red, HIGH);
 digitalWrite(blauw, HIGH);
 digitalWrite(groen, LOW);
 delay(3000);
 digitalWrite(red, LOW);
 digitalWrite(blauw, HIGH);
 digitalWrite(groen, LOW);
 delay(2000);
 digitalWrite(red, LOW);
 digitalWrite(groen, HIGH);
 digitalWrite(blauw, HIGH);
 delay(3000);

}
