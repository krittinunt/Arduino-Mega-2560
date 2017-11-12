/* Author : Mr.KRITTINUNT CHOBTRONG */

#define LED_1     22
#define LED_2     23
#define LED_3     24
#define LED_4     25
#define LED_5     26
#define LED_6     27
#define LED_7     28
#define LED_8     29

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
  pinMode(LED_3, OUTPUT);
  pinMode(LED_4, OUTPUT);
  pinMode(LED_5, OUTPUT);
  pinMode(LED_6, OUTPUT);
  pinMode(LED_7, OUTPUT);
  pinMode(LED_8, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_1, HIGH);
  digitalWrite(LED_2, LOW);
  digitalWrite(LED_3, LOW);
  digitalWrite(LED_4, LOW);
  digitalWrite(LED_5, LOW);
  digitalWrite(LED_6, LOW);
  digitalWrite(LED_7, LOW);
  digitalWrite(LED_8, HIGH);
  delay(1000);
  digitalWrite(LED_1, LOW);
  digitalWrite(LED_2, HIGH);
  digitalWrite(LED_3, LOW);
  digitalWrite(LED_4, LOW);
  digitalWrite(LED_5, LOW);
  digitalWrite(LED_6, LOW);
  digitalWrite(LED_7, HIGH);
  digitalWrite(LED_8, LOW);
  delay(1000);
  digitalWrite(LED_1, LOW);
  digitalWrite(LED_2, LOW);
  digitalWrite(LED_3, HIGH);
  digitalWrite(LED_4, LOW);
  digitalWrite(LED_5, LOW);
  digitalWrite(LED_6, HIGH);
  digitalWrite(LED_7, LOW);
  digitalWrite(LED_8, LOW);
  delay(1000);
  digitalWrite(LED_1, LOW);
  digitalWrite(LED_2, LOW);
  digitalWrite(LED_3, LOW);
  digitalWrite(LED_4, HIGH);
  digitalWrite(LED_5, HIGH);
  digitalWrite(LED_6, LOW);
  digitalWrite(LED_7, LOW);
  digitalWrite(LED_8, LOW);
  delay(1000);
  digitalWrite(LED_1, LOW);
  digitalWrite(LED_2, LOW);
  digitalWrite(LED_3, HIGH);
  digitalWrite(LED_4, LOW);
  digitalWrite(LED_5, LOW);
  digitalWrite(LED_6, HIGH);
  digitalWrite(LED_7, LOW);
  digitalWrite(LED_8, LOW);
  delay(1000);
  digitalWrite(LED_1, LOW);
  digitalWrite(LED_2, HIGH);
  digitalWrite(LED_3, LOW);
  digitalWrite(LED_4, LOW);
  digitalWrite(LED_5, LOW);
  digitalWrite(LED_6, LOW);
  digitalWrite(LED_7, HIGH);
  digitalWrite(LED_8, LOW);
  delay(1000);
}
