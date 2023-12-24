int led=12;
char input;

void setup()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  Serial.print("Press Y to turn on LED\n Press N to turn off the LED");
}

void loop()
{
  input=Serial.read();
  if(input == 'Y') {
    digitalWrite(led, HIGH);
  }
  delay(1000); // Wait for 1000 millisecond(s)
  if (input == 'M') {
    digitalWrite(led, LOW);
  }
}