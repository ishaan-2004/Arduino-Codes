int relay=12;
char input;

void setup()
{
  Serial.begin(9600);
  pinMode(relay, OUTPUT);
  Serial.print("Press Y to turn on device\n Press N to turn it off");
}


void loop()
{
  input = Serial.read();
  if (input == 'Y') {
    digitalWrite(relay,HIGH);
  }
  if (input == 'N') {
    digitalWrite(relay,LOW);
  }
}