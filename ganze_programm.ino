#include <LiquidCrystal.h>

int LED1 =2;   
int LED2=3;
int LED3=4;

 int Button1 = 6; 
 int Button2 = 7;
 int Button3 = 8;
LiquidCrystal lcd(53, 51, 47, 43, 39, 35);


static int count = 0;       
int buttonState = 0;  
int prebuttonState = 0;


unsigned long minutes = 60000;

void setup()   {                
 // initialize the digital pin as an output:
 lcd.clear();
 Serial.begin(9600);
  lcd.begin(16, 2);
    
 pinMode(LED1, INPUT);
 pinMode(LED2, INPUT);
  pinMode(LED3, INPUT);
 pinMode(Button1, OUTPUT);
 pinMode(Button2,  OUTPUT); 
 pinMode(Button3,  OUTPUT);
  lcd.setCursor(0, 0);
 lcd.print("Dance! xwyz!");
 delay(1000);  
  lcd.setCursor(6, 1);
 lcd.print("3!");
 delay(1000);  
   lcd.setCursor(6, 1);
 lcd.print("2!");
  delay(1000);  
   lcd.setCursor(6, 1);
 lcd.print("1!");
  delay(1000);  
   lcd.setCursor(6, 1);
 lcd.print("Go!");
  delay(1000);  
  lcd.clear();

}

void loop() {
    if (millis() < minutes * 1) {

lcd.setCursor(0, 0);
 lcd.print("Dance! xwyz!");
  delay(1000);  
 
 int A = random(2,5);
    digitalWrite(A,HIGH);
   
 unsigned long time = millis();

 
  while( millis()-time < 300){ 
    
   buttonState= digitalRead(A+4);
  if(buttonState != prebuttonState)
   {if (buttonState == LOW){
    count=count+1;    
    lcd.setCursor(6, 1);
 lcd.print(count);
    }}       prebuttonState= buttonState;   }            

digitalWrite(A,LOW);
 delay(10);     
}
else {    
   lcd.setCursor(0, 0);
 lcd.print("Your Score is:");
  lcd.setCursor(6, 1);
 lcd.print(count);
 }
}
