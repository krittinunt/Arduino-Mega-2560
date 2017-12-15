#define LED7SEG_A       22
#define LED7SEG_B       23
#define LED7SEG_C       24
#define LED7SEG_D       25
#define LED7SEG_E       26
#define LED7SEG_F       27
#define LED7SEG_G       28
#define LED7SEG_H       29

#define LED7SEG_DIGI1   53
#define LED7SEG_DIGI2   52
#define LED7SEG_DIGI3   51
#define LED7SEG_DIGI4   50

void setup() {
  // put your setup code here, to run once:
  pinMode(LED7SEG_A, OUTPUT);
  pinMode(LED7SEG_B, OUTPUT);
  pinMode(LED7SEG_C, OUTPUT);
  pinMode(LED7SEG_D, OUTPUT);
  pinMode(LED7SEG_E, OUTPUT);
  pinMode(LED7SEG_F, OUTPUT);
  pinMode(LED7SEG_G, OUTPUT);
  pinMode(LED7SEG_H, OUTPUT);

  pinMode(LED7SEG_DIGI1, OUTPUT);
  pinMode(LED7SEG_DIGI2, OUTPUT);
  pinMode(LED7SEG_DIGI3, OUTPUT);
  pinMode(LED7SEG_DIGI4, OUTPUT);

  digitalWrite(LED7SEG_DIGI1, LOW);
  digitalWrite(LED7SEG_DIGI2, LOW);
  digitalWrite(LED7SEG_DIGI3, LOW);
  digitalWrite(LED7SEG_DIGI4, LOW);
  digitalWrite(LED7SEG_A, LOW);
  digitalWrite(LED7SEG_B, LOW);
  digitalWrite(LED7SEG_C, LOW);
  digitalWrite(LED7SEG_D, LOW);
  digitalWrite(LED7SEG_E, LOW);
  digitalWrite(LED7SEG_F, LOW);
  digitalWrite(LED7SEG_G, LOW);
  digitalWrite(LED7SEG_H, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED7SEG_DIGI4, LOW);
  digitalWrite(LED7SEG_A, HIGH);
  digitalWrite(LED7SEG_B, HIGH);
  digitalWrite(LED7SEG_C, HIGH);
  digitalWrite(LED7SEG_D, HIGH);
  digitalWrite(LED7SEG_E, HIGH);
  digitalWrite(LED7SEG_F, HIGH);
  digitalWrite(LED7SEG_G, LOW);
  digitalWrite(LED7SEG_H, LOW);
  digitalWrite(LED7SEG_DIGI1, HIGH);
  delay(8);
  
  digitalWrite(LED7SEG_DIGI1, LOW);
  digitalWrite(LED7SEG_A, LOW);
  digitalWrite(LED7SEG_B, HIGH);
  digitalWrite(LED7SEG_C, HIGH);
  digitalWrite(LED7SEG_D, LOW);
  digitalWrite(LED7SEG_E, LOW);
  digitalWrite(LED7SEG_F, LOW);
  digitalWrite(LED7SEG_G, LOW);
  digitalWrite(LED7SEG_H, LOW);
  digitalWrite(LED7SEG_DIGI2, HIGH);
  delay(8);

  digitalWrite(LED7SEG_DIGI2, LOW);
  digitalWrite(LED7SEG_A, HIGH);
  digitalWrite(LED7SEG_B, HIGH);
  digitalWrite(LED7SEG_C, HIGH);
  digitalWrite(LED7SEG_D, HIGH);
  digitalWrite(LED7SEG_E, LOW);
  digitalWrite(LED7SEG_F, LOW);
  digitalWrite(LED7SEG_G, HIGH);
  digitalWrite(LED7SEG_H, LOW);
  digitalWrite(LED7SEG_DIGI3, HIGH);
  delay(8);

  digitalWrite(LED7SEG_DIGI3, LOW);
  digitalWrite(LED7SEG_A, LOW);
  digitalWrite(LED7SEG_B, HIGH);
  digitalWrite(LED7SEG_C, HIGH);
  digitalWrite(LED7SEG_D, LOW);
  digitalWrite(LED7SEG_E, LOW);
  digitalWrite(LED7SEG_F, HIGH);
  digitalWrite(LED7SEG_G, HIGH);
  digitalWrite(LED7SEG_H, LOW);
  digitalWrite(LED7SEG_DIGI4, HIGH);
  delay(8);
}
