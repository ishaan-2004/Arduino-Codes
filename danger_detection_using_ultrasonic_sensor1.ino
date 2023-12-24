// C++ code
int trigger = 8;
int echo = 9;

int green_led = 12;
int red_led = 13;

int distance;
long duration;

void setup()
{
  Serial.begin(9600);
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
  
  pinMode(green_led, OUTPUT);
  pinMode(red_led, OUTPUT);
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
  
  if(distance < 15) {
    digitalWrite(red_led,HIGH);
    digitalWrite(green_led,LOW);
    Serial.println("Danger");
  }
  else {
    digitalWrite(green_led,HIGH);
    digitalWrite(red_led,LOW);
    Serial.println("Safe");
  }
    
  
}