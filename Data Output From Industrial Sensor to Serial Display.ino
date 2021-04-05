int sensor = 8;
void setup() 
{
Serial.begin(9600);

pinMode(8,INPUT);
}

void loop()
{
 if( digitalRead(sensor)==1)
 {
  
Serial.println("var");
delay(100);
 }

else
{
Serial.println("yok");

delay(100);

}}
