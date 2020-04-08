
#define SEGMENT_A 2
#define SEGMENT_B 3
#define SEGMENT_C 4
#define SEGMENT_D 5
#define SEGMENT_E 6
#define SEGMENT_F 7
#define SEGMENT_G 8
#define SEGMENT_H 9

int digitToSegmentMapping[] = {
  0x7e, 0x12, 0xbc, 0xb6, 0xd2, 0xe6, 0xee, 0x32, 0xfe, 0xf6
};

void showDigit(int digit) {
  int segmentValues = digitToSegmentMapping[digit % 10];
  digitalWrite(SEGMENT_A, segmentValues & 0x01);
  digitalWrite(SEGMENT_B, segmentValues & 0x02);
  digitalWrite(SEGMENT_C, segmentValues & 0x04);
  digitalWrite(SEGMENT_D, segmentValues & 0x08);
  digitalWrite(SEGMENT_E, segmentValues & 0x10);
  digitalWrite(SEGMENT_F, segmentValues & 0x20);
  digitalWrite(SEGMENT_G, segmentValues & 0x40);
  digitalWrite(SEGMENT_H, segmentValues & 0x80);
}


void setup() {
  pinMode(SEGMENT_A, OUTPUT);
  pinMode(SEGMENT_B, OUTPUT);
  pinMode(SEGMENT_C, OUTPUT);
  pinMode(SEGMENT_D, OUTPUT);
  pinMode(SEGMENT_E, OUTPUT);
  pinMode(SEGMENT_F, OUTPUT);
  pinMode(SEGMENT_G, OUTPUT);
  pinMode(SEGMENT_H, OUTPUT);
}




int value = 0;

void loop() {
  showDigit(value++);
  delay(1000);                       
}
