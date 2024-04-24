
int led=3;

void setup() 
{
  Serial.begin(9600);
  pinMode (led, OUTPUT);
}

void loop()
{
  int led_isik = analogRead(A0);
  Serial.println(led_isik);
  if(led_isik<=500)
  {
    digitalWrite(led,HIGH);
  }
  else
  {
    digitalWrite(led, LOW);
  }
  delay(500);
}
