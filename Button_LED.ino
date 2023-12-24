int led=11;
int push_btn = 7;

void setup()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(push_btn, INPUT);
}

int btnState;

void loop()
{
  btnState = digitalRead(push_btn);
  
  if (btnState == HIGH) {
    digitalWrite(led,HIGH);
  }
  else {
    digitalWrite(led,LOW);
  }
}