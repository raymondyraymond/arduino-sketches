/*

*/

int DELAY = 500;

void setup() {
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  l();
  delay(DELAY);
  e();
  delay(DELAY);
  a();
  delay(DELAY);
  h();
  delay(DELAY);
  space();
  delay(DELAY);
  r();
  delay(DELAY);
  a();
  delay(DELAY);
  y();
  delay(DELAY);
  m();
  delay(DELAY);
  o();
  delay(DELAY);
  n();
  delay(DELAY);
  d();
  delay(DELAY);
  space();
  delay(DELAY);

}


void l() {
  byte segments[] = {0, 0, 0, 1, 1, 1, 0, 0};
  writeLetter(segments);
}

void e() {
  byte segments[] = {1, 0, 0, 1, 1, 1, 1, 0};
  writeLetter(segments);
}

void a() {
  byte segments[] = {1, 1, 1, 0, 1, 1, 1, 0};
  writeLetter(segments);
}

void h() {
  byte segments[] = {0, 1, 1, 0, 1, 1, 1, 0};
  writeLetter(segments);
}

void space() {
  byte segments[] = {0, 0, 0, 0, 0, 0, 0, 0};
  writeLetter(segments);
}

void r() {
  byte segments[] = {0, 0, 0, 0, 1, 0, 1, 0};
  writeLetter(segments);
}

void y() {
  byte segments[] = {0, 1, 1, 1, 0, 1, 1, 0};
  writeLetter(segments);
}

void m() {
  byte segments[] = {1, 0, 1, 0, 1, 0, 1, 0};
  writeLetter(segments);
}

void o() {
  byte segments[] = {0, 0, 1, 1, 1, 0, 1, 0};
  writeLetter(segments);
}

void n() {
  byte segments[] = {0, 0, 1, 0, 1, 0, 1, 0};
  writeLetter(segments);
}

void d() {
  byte segments[] = {0, 1, 1, 1, 1, 0, 1, 0};
  writeLetter(segments);
}

void writeLetter(byte segments[]) {
  for (byte i = 0; i < 8; i++) {
    digitalWrite(i + 1, segments[i]);
  }
}
