/* Author : Mr.KRITTINUNT CHOBTRONG */

#define LED_1     22

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_1, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_1, HIGH);
  delay(1000);
  digitalWrite(LED_1, LOW);
  delay(1000);
}
