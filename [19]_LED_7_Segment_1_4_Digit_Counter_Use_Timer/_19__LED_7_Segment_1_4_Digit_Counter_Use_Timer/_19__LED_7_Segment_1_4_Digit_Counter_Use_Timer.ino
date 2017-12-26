#include <TimerOne.h>

#define SW_INC          0
#define SW_DEC          1
#define SW_RESET        2

const uint8_t LED7SEG_TABLE[] = {0x3F, 0x06, 0x5B, 0x4F, 0x66,   // 0 1 2 3 4
                                 0x6D, 0x7D, 0x07, 0x7F, 0x6F,   // 5 6 7 8 9
                                 0x00};
const uint8_t LED7SEG_PORT[] = {22, 23, 24, 25, 26, 27, 28, 29}; // a b c d e f g h
const uint8_t LED7SEG_CC[] = {53, 52, 51, 50}; // cc1 cc2 cc3 cc4
const uint8_t PB_SWITCH[] = {21, 20, 19}; // sw1 sw2 sw3
int LED7SEG_DATA[4] = {0, 0, 0, 0};
int data;
int disp_count;

void setup() {
  // put your setup code here, to run once:
  int i;

  for (i=0; i<8; i++) pinMode(LED7SEG_PORT[i], OUTPUT);
  for (i=0; i<4; i++) pinMode(LED7SEG_CC[i], OUTPUT);
  for (i=0; i<3; i++) pinMode(PB_SWITCH[i], INPUT);
  for (i=0; i<8; i++) digitalWrite(LED7SEG_PORT[i], LOW);
  for (i=0; i<4; i++) digitalWrite(LED7SEG_CC[i], LOW);
  data = disp_count = 0;

  Timer1.initialize(5000);
  Timer1.attachInterrupt(scan_display); 
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(PB_SWITCH[SW_INC]) == LOW)
  {
    delay(10);
    while (digitalRead(PB_SWITCH[SW_INC]) != HIGH);
    delay(10);
    if (data < 9999) data++;
  }

  if (digitalRead(PB_SWITCH[SW_DEC]) == LOW)
  {
    delay(10);
    while (digitalRead(PB_SWITCH[SW_DEC]) != HIGH);
    delay(10);
    if (data > 0) data--;
  }

  if (digitalRead(PB_SWITCH[SW_RESET]) == LOW)
  {
    delay(10);
    while (digitalRead(PB_SWITCH[SW_RESET]) != HIGH);
    delay(10);
    data = 0;
  }
}

void scan_display(void)
{
  int i;
  int data_buffer;
  
  // ?xxx
  data_buffer = data;
  LED7SEG_DATA[3] = data_buffer / 1000;
  data_buffer -= LED7SEG_DATA[3] * 1000;

  // x?xx
  LED7SEG_DATA[2] = data_buffer / 100;
  data_buffer -= LED7SEG_DATA[2] * 100;

  // xx?x
  LED7SEG_DATA[1] = data_buffer / 10;
  data_buffer -= LED7SEG_DATA[1] * 10;
  
  // xxx?
  LED7SEG_DATA[0] = data_buffer;

  if (data < 1000) LED7SEG_DATA[3] = 10;
  if (data < 100) LED7SEG_DATA[2] = 10;
  if (data < 10) LED7SEG_DATA[1] = 10;

  digitalWrite(LED7SEG_CC[0], LOW);
  digitalWrite(LED7SEG_CC[1], LOW);
  digitalWrite(LED7SEG_CC[2], LOW);
  digitalWrite(LED7SEG_CC[3], LOW);

  for (i=0; i<8; i++)
  {
    if ((LED7SEG_TABLE[LED7SEG_DATA[disp_count]]&bit(i)) == bit(i)) digitalWrite(LED7SEG_PORT[i], HIGH);
    else digitalWrite(LED7SEG_PORT[i], LOW);
  }
  digitalWrite(LED7SEG_CC[disp_count], HIGH);

  if (disp_count > 2) disp_count = 0;
  else disp_count++;
}

