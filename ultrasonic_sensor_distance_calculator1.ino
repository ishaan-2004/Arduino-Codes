// C++ code
int trigger = 8;
int echo = 9;

int distance;
long duration;

void setup()
{
  Serial.begin(9600);
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
}

void loop()
{
  digitalWrite(trigger,LOW);
  delayMicroseconds(2);
  digitalWrite(trigger,HIGH);
  delayMicroseconds(2);
  digitalWrite(trigger,LOW);
  
  duration = pulseIn(echo,HIGH);
  distance = (duration/2) / 29.1;
  
  Serial.print("Distance :");
  Serial.print(distance);
  Serial.print("CM\n");
  
}