int RED = 23;
int GREEN = 22;
int BLUE = 21;

void setup() {
  // put your setup code here, to run once:
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  green();
  delay(200);
  cyan();
  delay(200);
  blue();
  delay(200);
  magenta();
  delay(200);
  red();
  delay(200);
  yellow();
  delay(200);
}

void RGB(uint8_t r, uint8_t g, uint8_t b) {
  digitalWrite(RED, r);
  digitalWrite(GREEN, g);
  digitalWrite(BLUE, b);
}

void green() {
  RGB(LOW, HIGH, LOW);
}
void blue() {
  RGB(LOW, LOW, HIGH);
}
void red() {
  RGB(HIGH, LOW, LOW);
}
void cyan() {
  RGB(LOW, HIGH, HIGH);
}
void magenta() {
  RGB(HIGH, LOW, HIGH);
}
void yellow() {
  RGB(HIGH, HIGH, LOW);
}

