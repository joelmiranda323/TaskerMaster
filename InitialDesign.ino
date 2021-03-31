#include <LiquidCrystal.h>

const int buttonPin1 = 13;
const int buttonPin2 = 12;
const int buttonPin3 = 11;
const int buttonPin4 = 10;

int buttonVal1 = 0;
int buttonVal2 = 0;
int buttonVal3 = 0;
int buttonVal4 = 0;

int i;

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);

void setup() {
  
  for(i = 10; i < 14; i++)
  {
    pinMode(i, OUTPUT);
  }
  
  lcd.setCursor(0, 0);
  
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  lcd.print("Hello! :)");
  delay(2500);
  
}

void loop() {
  
  buttonVal1 = digitalRead(buttonPin1);
  buttonVal2 = digitalRead(buttonPin2);
  buttonVal3 = digitalRead(buttonPin3);
  buttonVal4 = digitalRead(buttonPin4);
  
  lcd.setCursor(0, 0);
  lcd.print("How are you");
  lcd.setCursor(0, 1);
  lcd.print("feeling?");
        
  if(buttonVal1 == 1)
  {
    lcd.clear();
    
    lcd.print("Dance to some");
    lcd.setCursor(0, 1);
    lcd.print("music! :)");
    
    delay(1750);
    
    lcd.clear();
    
    lcd.setCursor(0, 0);
    lcd.print("Listening to:");
    lcd.setCursor(0, 1);
    lcd.print("Good Days by SZA");

    while(digitalRead(buttonPin1) == 0){}
    
    delay(500);
    
    lcd.clear();
  }
  else if(buttonVal2 == 1)
  {
    lcd.clear();
    
    lcd.print("Call a family");
    lcd.setCursor(0, 1);
    lcd.print("member! :)");
    
    delay(1750);
    
    lcd.clear();
    
    lcd.setCursor(0, 0);
    lcd.print("Mom's Number:");
    lcd.setCursor(0, 1);
    lcd.print("818-888-8888");
    
    while(digitalRead(buttonPin2) == 0){}
    
    delay(500);
    
    lcd.clear();
  }
  else if(buttonVal3 == 1)
  {
    lcd.clear();
    
    lcd.print("Cook food! :)");
    lcd.setCursor(0, 1);
    
    delay(1750);
    
    lcd.clear();
    
    lcd.setCursor(0, 0);
    lcd.print("Todays dish:");
    lcd.setCursor(0, 1);
    lcd.print("Mexican Tamales");
    
    while(digitalRead(buttonPin3) == 0){}
    
    delay(500);
    
    lcd.clear();
  }
  else if(buttonVal4 == 1)
  {
    lcd.clear();
    
    lcd.print("Look through old");
    lcd.setCursor(0, 1);
    lcd.print("photos! :)");
    
    delay(3000);
    
    lcd.clear();
  }
}
