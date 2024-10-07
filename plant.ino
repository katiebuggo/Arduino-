// C++ code
//
int moist = 0;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(A1, INPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(13, LOW);
  moist = analogRead(A1);
  Serial.println(moist);
  if (moist > 600) {
    digitalWrite(12, LOW);
    delay(1); // Wait for 1 millisecond(s)
    digitalWrite(13, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(13, LOW);
    delay(1000); // Wait for 1000 millisecond(s)
  } else {
    digitalWrite(12, HIGH);
  }
}