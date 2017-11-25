int RED = 23;
int GREEN = 22;
int BLUE = 21;

void setup() {
  // put your setup code here, to run once:
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
  pinMode(7, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(7) == LOW) {
    rgb(HIGH, HIGH, HIGH);
  } else {
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
}

void rgb(uint8_t r, uint8_t g, uint8_t b) {
  digitalWrite(RED, r);
  digitalWrite(GREEN, g);
  digitalWrite(BLUE, b);
}

void green() {
  rgb(LOW, HIGH, LOW);
}
void blue() {
  rgb(LOW, LOW, HIGH);
}
void red() {
  rgb(HIGH, LOW, LOW);
}
void cyan() {
  rgb(LOW, HIGH, HIGH);
}
void magenta() {
  rgb(HIGH, LOW, HIGH);
}
void yellow() {
  rgb(HIGH, HIGH, LOW);
}

