
int pinoBuzzer = 5;

void setup() {

  pinMode(pinoBuzzer, OUTPUT);
}

void loop() {

  tone(pinoBuzzer, 261);
  delay(1000);

  tone(pinoBuzzer, 293);
  delay(1000);

  tone(pinoBuzzer, 329);
  delay(1000);

  tone(pinoBuzzer, 349);
  delay(1000);

  tone(pinoBuzzer, 391);
  delay(1000);

  tone(pinoBuzzer, 440);
  delay(1000);

  tone(pinoBuzzer, 493);
  delay(1000);

  noTone(pinoBuzzer);

  delay(5000);
}
