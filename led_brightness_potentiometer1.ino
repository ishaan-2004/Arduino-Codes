// C++ code


int led=12;
int pot_pin = A0;

void setup()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(pot_pin, INPUT);
}

int brightness = 0;

void loop()
{
  brightness = map(analogRead(pot_pin),0,1023,0,255);
  Serial.println(brightness);
  analogWrite(led,brightness);
  delay(50);
  
 
  
}