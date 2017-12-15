#define LED     22
#define SW      52

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  pinMode(SW, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(SW) == LOW)
  {
    delay(10);
    while (digitalRead(SW) != HIGH);
    delay(10);
    digitalWrite(LED, !digitalRead(LED));
  }
}
