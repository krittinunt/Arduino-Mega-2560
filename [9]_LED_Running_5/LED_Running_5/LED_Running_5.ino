/* Author : Mr.KRITTINUNT CHOBTRONG */

static const byte data_table[16] = {0b10000001, 0b11000011, 
                                    0b11100111, 0b11111111,
                                    0b00000000, 0b11111111, 
                                    0b00001111, 0b11110000,
                                    0b11000000, 0b00110000, 
                                    0b00001100, 0b00000011,
                                    0b11111111, 0b00000000, 
                                    0b11111111, 0b00000000};

byte LED[8] = {22, 23, 24, 25, 26, 27, 28, 29};

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
  for (i=0; i<16; i++)
  {
    outport8bit(data_table[i]);
    delay(500);
  }
}
