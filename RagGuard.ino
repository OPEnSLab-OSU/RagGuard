/*
 * Sketch:  RagGuard.ino
 * Purpose: Turns on a motor for a set amount of time, then off
 *         for a set amount of time using an ATtiny85 uC
 * By: Aiden Olsen
 */

#define MOTOR_PIN 3
#define MOTOR_ON_SEC 30
#define MOTOR_OFF_MIN 60

const long delay_on_ms = MOTOR_ON_SEC * 1000;
const long delay_off_ms = MOTOR_OFF_MIN * 60 * 1000;

void setup() {
  // initialize motor pin low
  pinMode(MOTOR_PIN, OUTPUT);
  digitalWrite(MOTOR_PIN, LOW);
}

void loop() {
  // start motor for MOTOR_ON_SEC
  digitalWrite(MOTOR_PIN, HIGH);
  delay(delay_on_ms);
  // stop motor for MOTOR_OFF_MIN
  digitalWrite(MOTOR_PIN, LOW);
  delay(delay_off_ms);
}
