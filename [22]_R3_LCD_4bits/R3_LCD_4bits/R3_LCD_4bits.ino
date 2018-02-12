#define LCD_E          12
#define LCD_RW         11
#define LCD_RS         10

#define LCD_D7         9
#define LCD_D6         8
#define LCD_D5         7
#define LCD_D4         6

void setup() {
  // put your setup code here, to run once:
  pinMode(LCD_E, OUTPUT);
  pinMode(LCD_RW, OUTPUT);
  pinMode(LCD_RS, OUTPUT);
  pinMode(LCD_D7, OUTPUT);
  pinMode(LCD_D6, OUTPUT);
  pinMode(LCD_D5, OUTPUT);
  pinMode(LCD_D4, OUTPUT);
  
  // set pin E, RW, RS to logic 0
  digitalWrite(LCD_E, LOW);
  digitalWrite(LCD_RW, LOW);
  digitalWrite(LCD_RS, LOW);
  
  // Wait 20mSec for LCD power up
  delay(20);
   
  // Function Set
  digitalWrite(LCD_D7, LOW);
  digitalWrite(LCD_D6, LOW);
  digitalWrite(LCD_D5, HIGH);
  digitalWrite(LCD_D4, LOW);
  
  digitalWrite(LCD_E, HIGH);
  delayMicroseconds(50);
  digitalWrite(LCD_E, LOW);
  delay(5);
  
  digitalWrite(LCD_D7, HIGH);
  digitalWrite(LCD_D6, LOW);
  digitalWrite(LCD_D5, LOW);
  digitalWrite(LCD_D4, LOW);
  
  digitalWrite(LCD_E, HIGH);
  delayMicroseconds(50);
  digitalWrite(LCD_E, LOW);
  delay(5);
  
    // Clear Display
  digitalWrite(LCD_D7, LOW);
  digitalWrite(LCD_D6, LOW);
  digitalWrite(LCD_D5, LOW);
  digitalWrite(LCD_D4, LOW);
  
  digitalWrite(LCD_E, HIGH);
  delayMicroseconds(50);
  digitalWrite(LCD_E, LOW);
  delay(5);
  
  digitalWrite(LCD_D7, LOW);
  digitalWrite(LCD_D6, LOW);
  digitalWrite(LCD_D5, LOW);
  digitalWrite(LCD_D4, HIGH);
  
  digitalWrite(LCD_E, HIGH);
  delayMicroseconds(50);
  digitalWrite(LCD_E, LOW);
  delay(5);
  
  // Display/Cursor
  digitalWrite(LCD_D7, LOW);
  digitalWrite(LCD_D6, LOW);
  digitalWrite(LCD_D5, LOW);
  digitalWrite(LCD_D4, LOW);
  
  digitalWrite(LCD_E, HIGH);
  delayMicroseconds(50);
  digitalWrite(LCD_E, LOW);
  delay(5);
  
  digitalWrite(LCD_D7, HIGH);
  digitalWrite(LCD_D6, HIGH);
  digitalWrite(LCD_D5, HIGH);
  digitalWrite(LCD_D4, HIGH);
  
  digitalWrite(LCD_E, HIGH);
  delayMicroseconds(50);
  digitalWrite(LCD_E, LOW);
  delay(5);
  
  // Entry Mode Set
  digitalWrite(LCD_D7, LOW);
  digitalWrite(LCD_D6, LOW);
  digitalWrite(LCD_D5, LOW);
  digitalWrite(LCD_D4, LOW);
  
  digitalWrite(LCD_E, HIGH);
  delayMicroseconds(50);
  digitalWrite(LCD_E, LOW);
  delay(5);
  
  digitalWrite(LCD_D7, LOW);
  digitalWrite(LCD_D6, HIGH);
  digitalWrite(LCD_D5, HIGH);
  digitalWrite(LCD_D4, LOW);
  
  digitalWrite(LCD_E, HIGH);
  delayMicroseconds(50);
  digitalWrite(LCD_E, LOW);
  delay(5);
  
  // Home Display
  digitalWrite(LCD_D7, LOW);
  digitalWrite(LCD_D6, LOW);
  digitalWrite(LCD_D5, LOW);
  digitalWrite(LCD_D4, LOW);
  
  digitalWrite(LCD_E, HIGH);
  delayMicroseconds(50);
  digitalWrite(LCD_E, LOW);
  delay(5);
  
  digitalWrite(LCD_D7, LOW);
  digitalWrite(LCD_D6, LOW);
  digitalWrite(LCD_D5, HIGH);
  digitalWrite(LCD_D4, LOW);
  
  digitalWrite(LCD_E, HIGH);
  delayMicroseconds(50);
  digitalWrite(LCD_E, LOW);
  delay(5);
  
  // print T to LCD
  digitalWrite(LCD_D7, LOW);
  digitalWrite(LCD_D6, HIGH);
  digitalWrite(LCD_D5, LOW);
  digitalWrite(LCD_D4, HIGH);
  
  digitalWrite(LCD_RS, HIGH);
  digitalWrite(LCD_E, HIGH);
  delayMicroseconds(50);
  digitalWrite(LCD_E, LOW);
  delay(5);
  
  digitalWrite(LCD_D7, LOW);
  digitalWrite(LCD_D6, HIGH);
  digitalWrite(LCD_D5, LOW);
  digitalWrite(LCD_D4, LOW);
  
  digitalWrite(LCD_E, HIGH);
  delayMicroseconds(50);
  digitalWrite(LCD_E, LOW);
  digitalWrite(LCD_RS, LOW);
  delay(5);
  
  // print e to LCD
  digitalWrite(LCD_D7, LOW);
  digitalWrite(LCD_D6, HIGH);
  digitalWrite(LCD_D5, HIGH);
  digitalWrite(LCD_D4, LOW);
  
  digitalWrite(LCD_RS, HIGH);
  digitalWrite(LCD_E, HIGH);
  delayMicroseconds(50);
  digitalWrite(LCD_E, LOW);
  delay(5);
  
  digitalWrite(LCD_D7, LOW);
  digitalWrite(LCD_D6, HIGH);
  digitalWrite(LCD_D5, LOW);
  digitalWrite(LCD_D4, HIGH);
  
  digitalWrite(LCD_E, HIGH);
  delayMicroseconds(50);
  digitalWrite(LCD_E, LOW);
  digitalWrite(LCD_RS, LOW);
  delay(5);
  
  // print s to LCD
  digitalWrite(LCD_D7, LOW);
  digitalWrite(LCD_D6, HIGH);
  digitalWrite(LCD_D5, HIGH);
  digitalWrite(LCD_D4, HIGH);
  
  digitalWrite(LCD_RS, HIGH);
  digitalWrite(LCD_E, HIGH);
  delayMicroseconds(50);
  digitalWrite(LCD_E, LOW);
  delay(5);
  
  digitalWrite(LCD_D7, LOW);
  digitalWrite(LCD_D6, LOW);
  digitalWrite(LCD_D5, HIGH);
  digitalWrite(LCD_D4, HIGH);
  
  digitalWrite(LCD_E, HIGH);
  delayMicroseconds(50);
  digitalWrite(LCD_E, LOW);
  digitalWrite(LCD_RS, LOW);
  delay(5);
  
  // print t to LCD
  digitalWrite(LCD_D7, LOW);
  digitalWrite(LCD_D6, HIGH);
  digitalWrite(LCD_D5, HIGH);
  digitalWrite(LCD_D4, HIGH);
  
  digitalWrite(LCD_RS, HIGH);
  digitalWrite(LCD_E, HIGH);
  delayMicroseconds(50);
  digitalWrite(LCD_E, LOW);
  delay(5);
  
  digitalWrite(LCD_D7, LOW);
  digitalWrite(LCD_D6, HIGH);
  digitalWrite(LCD_D5, LOW);
  digitalWrite(LCD_D4, LOW);
  
  digitalWrite(LCD_E, HIGH);
  delayMicroseconds(50);
  digitalWrite(LCD_E, LOW);
  digitalWrite(LCD_RS, LOW);
  delay(5);
  
  // Set DD-RAM Address to LCD line 2
  digitalWrite(LCD_D7, HIGH);
  digitalWrite(LCD_D6, HIGH);
  digitalWrite(LCD_D5, LOW);
  digitalWrite(LCD_D4, LOW);
  
  digitalWrite(LCD_E, HIGH);
  delayMicroseconds(50);
  digitalWrite(LCD_E, LOW);
  delay(5);
  
  digitalWrite(LCD_D7, LOW);
  digitalWrite(LCD_D6, LOW);
  digitalWrite(LCD_D5, LOW);
  digitalWrite(LCD_D4, LOW);
  
  digitalWrite(LCD_E, HIGH);
  delayMicroseconds(50);
  digitalWrite(LCD_E, LOW);
  delay(5);
  
  // print L to LCD
  digitalWrite(LCD_D7, LOW);
  digitalWrite(LCD_D6, HIGH);
  digitalWrite(LCD_D5, LOW);
  digitalWrite(LCD_D4, LOW);
  
  digitalWrite(LCD_RS, HIGH);
  digitalWrite(LCD_E, HIGH);
  delayMicroseconds(50);
  digitalWrite(LCD_E, LOW);
  delay(5);
  
  digitalWrite(LCD_D7, HIGH);
  digitalWrite(LCD_D6, HIGH);
  digitalWrite(LCD_D5, LOW);
  digitalWrite(LCD_D4, LOW);
  
  digitalWrite(LCD_E, HIGH);
  delayMicroseconds(50);
  digitalWrite(LCD_E, LOW);
  digitalWrite(LCD_RS, LOW);
  delay(5);
  
  // print C to LCD
  digitalWrite(LCD_D7, LOW);
  digitalWrite(LCD_D6, HIGH);
  digitalWrite(LCD_D5, LOW);
  digitalWrite(LCD_D4, LOW);
  
  digitalWrite(LCD_RS, HIGH);
  digitalWrite(LCD_E, HIGH);
  delayMicroseconds(50);
  digitalWrite(LCD_E, LOW);
  delay(5);
  
  digitalWrite(LCD_D7, LOW);
  digitalWrite(LCD_D6, LOW);
  digitalWrite(LCD_D5, HIGH);
  digitalWrite(LCD_D4, HIGH);
  
  digitalWrite(LCD_E, HIGH);
  delayMicroseconds(50);
  digitalWrite(LCD_E, LOW);
  digitalWrite(LCD_RS, LOW);
  delay(5);
  
  // print D to LCD
  digitalWrite(LCD_D7, LOW);
  digitalWrite(LCD_D6, HIGH);
  digitalWrite(LCD_D5, LOW);
  digitalWrite(LCD_D4, LOW);
  
  digitalWrite(LCD_RS, HIGH);
  digitalWrite(LCD_E, HIGH);
  delayMicroseconds(50);
  digitalWrite(LCD_E, LOW);
  delay(5);
  
  digitalWrite(LCD_D7, LOW);
  digitalWrite(LCD_D6, HIGH);
  digitalWrite(LCD_D5, LOW);
  digitalWrite(LCD_D4, LOW);
  
  digitalWrite(LCD_E, HIGH);
  delayMicroseconds(50);
  digitalWrite(LCD_E, LOW);
  digitalWrite(LCD_RS, LOW);
  delay(5);
}

void loop() {
  // put your main code here, to run repeatedly:

}
