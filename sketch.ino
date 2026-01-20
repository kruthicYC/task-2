// Pin definitions
int ledPin = 13;
int buttonPin = 2;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);  // Enable internal pull-up
}

void loop() {
  int buttonState = digitalRead(buttonPin);

  // Button pressed → LOW (because of pull-up)
  if (buttonState == LOW) {
    digitalWrite(ledPin, HIGH);  // LED ON
  } else {
    digitalWrite(ledPin, LOW);   // LED OFF
  }
}