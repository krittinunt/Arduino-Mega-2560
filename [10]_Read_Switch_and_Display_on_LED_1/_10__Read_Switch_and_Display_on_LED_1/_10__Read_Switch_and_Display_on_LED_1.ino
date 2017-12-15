#define LED     22
#define SW      52

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  pinMode(SW, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED, digitalRead(SW));
}
