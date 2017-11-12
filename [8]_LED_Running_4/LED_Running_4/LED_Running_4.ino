/* Author : Mr.KRITTINUNT CHOBTRONG */

byte LED[8] = {22, 23, 24, 25, 26, 27, 28, 29};
byte j = 1;

void outport8bit(byte data)
{
  int i;
  for (i=0; i<8; i++)
  {
    if ((data & bit(i)) == bit(i))
      digitalWrite(LED[i], HIGH);
    else
      digitalWrite(LED[i], LOW);
  }
}

void setup() {
  // put your setup code here, to run once:
  int i;
  for (i=0; i<8; i++)
    pinMode(LED[i], OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int i;
  for (i=0; i<7; i++)
  {
    outport8bit(j);
    delay(500);
    j = j << 1;
  }
  
  for (i=0; i<7; i++)
  {
    outport8bit(j);
    delay(500);
    j = j >> 1;
  }
}
