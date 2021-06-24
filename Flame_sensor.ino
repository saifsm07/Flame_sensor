int led_pin = 13 ;
int flame_sensor_pin = 8;
int flame_pin = HIGH;

void setup()
{
  pinMode(led_pin, OUTPUT);
  pinMode(flame_sensor_pin,INPUT);
  Serial.begin(9600);
}

void loop()
{
  flame_pin = digitalRead(flame_sensor_pin);
  if(flame_pin == LOW)
  {
    Serial.println(" FLAME , FLAME , FLAME ");
    digitalWrite(led_pin, HIGH); 
  }
  else
  {
    Serial.println("You are safe...");
    digitalWrite(led_pin, LOW);
  }
  
}
