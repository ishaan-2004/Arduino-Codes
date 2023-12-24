// C++ code
int ldr = A0;
int led = 12;
int val = 0;

void setup()
{
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  val = analogRead(ldr);
  Serial.print("LDR value is :");
  Serial.print(val);
  Serial.print("\n");
  
  if (val < 100) {
    digitalWrite(led, HIGH);
  }
  else {
     digitalWrite(led, LOW);
    
  }
  
}