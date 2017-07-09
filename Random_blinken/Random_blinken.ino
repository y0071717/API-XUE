int randNumber;
int randDelay;
void setup() {
randomSeed(analogRead(0));
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
pinMode(7, OUTPUT);
pinMode(8, OUTPUT);
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
}
void loop() {
   randNumber=random(3,11);
    randDelay=random(25,300);
    digitalWrite(randNumber, HIGH);
    delay(randDelay);
    digitalWrite(randNumber, LOW);  
}



