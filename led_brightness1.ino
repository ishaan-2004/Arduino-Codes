// C++ code


int led=12;

void setup()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

int brightness = 0;

void loop()
{
  brightness = brightness+1;
  Serial.println(brightness);
  analogWrite(led,brightness);
  delay(50);
  
  if(brightness > 255) {
    brightness =0;
  }
  
}