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
  delay(500);
  cyan();
  delay(500);
  yellow();
  delay(500);
  magenta();
  delay(500);
}

void RGB(uint8_t r, uint8_t g, uint8_t b) {
  digitalWrite(RED, r);
  digitalWrite(GREEN, g);
  digitalWrite(BLUE, b);
}

void green() {
  RGB(LOW, HIGH, LOW);
}
void cyan() {
  RGB(LOW, HIGH, HIGH);
}
void blue() {
  RGB(LOW, LOW, LOW);
}
void magenta() {
  RGB(HIGH, LOW, HIGH);
}
void yellow() {
  RGB(HIGH, HIGH, LOW);
}

