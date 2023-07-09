// C++ code
//
int red=10,yellow=11,green=13;
void setup()
{
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop()
{
digitalWrite(red, HIGH);
 delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(yellow, HIGH);
  delay(1000);
  digitalWrite(yellow, LOW);
  delay(1000);
  digitalWrite(yellow, HIGH);
  delay(1000);
  digitalWrite(yellow, LOW);
  delay(1000);
  digitalWrite(yellow, HIGH);
  delay(1000);
  digitalWrite(yellow, LOW);
digitalWrite(red, LOW);
 delay(1000);
   digitalWrite(green, HIGH);
    delay(1000);
   digitalWrite(green, LOW);
    delay(1000); // Wait for 1000 millisecond(s)
}