// C++ code
int PIR = 8;
int led = 12;
int state = LOW;
int val = 0;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(PIR, INPUT);
  Serial.begin(9600);
}

void loop()
{
  val = digitalRead(PIR);
  if (val == HIGH) {
    digitalWrite(led, LOW);
    delay(500);
    
    if (state == LOW) {
      Serial.println("Motion Detected");
      state = HIGH;
    }
  }
  else {
     digitalWrite(led, HIGH);
  	 delay(500);
    
    if (state == HIGH) {
      Serial.println("Motion Stopped");
      state = LOW;
    }
  }
  
}