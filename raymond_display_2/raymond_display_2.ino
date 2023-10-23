void setup() {
  // put your setup code here, to run once:
  pinMode(1,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  zero();
  delay(500);
  one();
  delay(500);
  two();
  delay(500);
  three();
  delay(500);
  four();
  delay(500);
  five();
  delay(500);
  six();
  delay(500);
  seven();
  delay(500);
  eight();
  delay(500);
  nine();
  delay(500);
  a();
  delay(500);
  b();
  delay(500);
  c();
  delay(500);
  d();
  delay(500);
  e();
  delay(500);
  f();
  delay(500);
  g();
  delay(500);
  h();
  delay(500);
  i();
  delay(500);
  j();
  delay(500);
  k();
  delay(500);
  l();
  delay(500);
  m();
  delay(500);
  o();
  delay(500);
  p();
  delay(500);
  q();
  delay(500);
  r();
  delay(500);
  s();
  delay(500);
  t();
  delay(500);
  u();
  delay(500);
  v();
  delay(500);
  w();
  delay(500);
  x();
  delay(500);
  y();
  delay(500);
  z();
  delay(500);
}

void zero() {
  byte segments[] = {1, 1, 1, 1, 1, 1, 0, 0};
  writeLetter(segments);
}

void one() {
  byte segments[] = {0, 1, 1, 0, 0, 0, 0, 0};
  writeLetter(segments);
}

void two() {
  byte segments[] = {1, 1, 0, 1, 1, 0, 1, 0};
  writeLetter(segments);
}

void three() {
  byte segments[] = {1, 1, 1, 1, 0, 0, 1, 0};
  writeLetter(segments);
}

void four() {
  byte segments[] = {0, 1, 1, 0, 0, 1, 1, 0};
  writeLetter(segments);
}

void five() {
  byte segments[] = {1, 0, 1, 1, 0, 1, 1, 0};
  writeLetter(segments);
}

void six() {
  byte segments[] = {1, 0, 1, 1, 1, 1, 1, 0};
  writeLetter(segments);
}

void seven() {
  byte segments[] = {1, 1, 1, 0, 0, 0, 0, 0};
  writeLetter(segments);
}

void eight() {
  byte segments[] = {1, 1, 1, 1, 1, 1, 1, 0};
  writeLetter(segments);
}

void nine() {
  byte segments[] = {1, 1, 1, 1, 0, 1, 1, 0};
  writeLetter(segments);
}

void a() {
  byte segments[] = {1, 1, 1, 0, 1, 1, 1, 0};
  writeLetter(segments);
}

void b() {
  byte segments[] = {0, 0, 1, 1, 1, 1, 1, 0};
  writeLetter(segments);
}

void c() {
  byte segments[] = {0, 0, 0, 1, 1, 0, 1, 0};
  writeLetter(segments);
}

void d() {
  byte segments[] = {0, 1, 1, 1, 1, 0, 1, 0};
  writeLetter(segments);
}

void e() {
  byte segments[] = {1, 0, 0, 1, 1, 1, 1, 0};
  writeLetter(segments);
}

void f() {
  byte segments[] = {1, 0, 0, 0, 1, 1, 1, 0};
  writeLetter(segments);
}

void g() {
  byte segments[] = {1, 1, 1, 1, 0, 1, 1, 0};
  writeLetter(segments);
}

void h() {
  byte segments[] = {0, 1, 1, 0, 1, 1, 1, 0};
  writeLetter(segments);
}

void i() {
  byte segments[] = {1, 0, 0, 0, 1, 0, 0, 0};
  writeLetter(segments);
}

void j() {
  byte segments[] = {1, 0, 1, 1, 0, 0, 0, 0};
  writeLetter(segments);
}

void k() {
  byte segments[] = {0, 0, 0, 1, 1, 1, 1, 0};
  writeLetter(segments);
}

void l() {
  byte segments[] = {1, 0, 1, 0, 1, 1, 1, 0};
  writeLetter(segments);
}

void m() {
  byte segments[] = {1, 0, 1, 0, 1, 0, 1, 0};
  writeLetter(segments);
}

void n() {
  byte segments[] = {0, 0, 1, 0, 1, 0, 1, 0};
  writeLetter(segments);
}

void o() {
  byte segments[] = {0, 0, 1, 1, 1, 0, 1, 0};
  writeLetter(segments);
}

void p() {
  byte segments[] = {1, 1, 0, 0, 1, 1, 1, 0};
  writeLetter(segments);
}

void q() {
  byte segments[] = {1, 1, 1, 0, 0, 1, 1, 0};
  writeLetter(segments);
}

void r() {
  byte segments[] = {0, 0, 0, 0, 1, 0, 1, 0};
  writeLetter(segments);
}


void s() {
  byte segments[] = {1, 0, 1, 1, 0, 1, 0, 0};
  writeLetter(segments);
}

void t() {
  byte segments[] = {0, 0, 0, 1, 1, 1, 1, 0};
  writeLetter(segments);
}

void u() {
  byte segments[] = {0, 0, 1, 1, 1, 0, 0, 0};
  writeLetter(segments);
}

void v() {
  byte segments[] = {0, 1, 0, 1, 0, 1, 0, 0};
  writeLetter(segments);
}

void w() {
  byte segments[] = {0, 1, 0, 1, 0, 1, 1, 0};
  writeLetter(segments);
}

void x() {
  byte segments[] = {0, 0, 1, 0, 1, 0, 0, 0};
  writeLetter(segments);
}

void y() {
  byte segments[] = {0, 1, 1, 1, 0, 1, 1, 0};
  writeLetter(segments);
}

void z() {
  byte segments[] = {1, 1, 0, 1, 1, 0, 0, 0};
  writeLetter(segments);
}

void writeLetter(byte segments[]) {
  for (byte i = 0; i < 8; i++) {
    digitalWrite(i+1, segments[i]);
  }
}
