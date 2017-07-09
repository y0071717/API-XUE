// Random flasher by mark oldroyd
// Simple random number flasher
// generation and integration into your circuit on the
// arduino.
//
// Circuit build : Simply connect 8 LED's to pins 3,4,5,6,7,8,9,10
// Be sure to connect a resistor to each LED.  I used 330 ohms.
//
//
int ranNum;
int ranDel;
void setup() {
// Seed RNG from analog port.
randomSeed(analogRead(0));
// Setup 8 output ports for LED's
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
    //Generate random number between 8 and 10
    ranNum=random(3,11);
    // Generate random delay time
    ranDel=random(25,300);
    //Turn on the LED
    digitalWrite(ranNum, HIGH);
    delay(ranDel);
    //Turn off the LED
    digitalWrite(ranNum, LOW);  
}


