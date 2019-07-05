void setup()
{
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(1, LOW);
  delay(10); 
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  delay(10);
  digitalWrite(1, HIGH);
  digitalWrite(2, LOW);
  delay(10); 
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
  delay(10);
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  delay(10); 
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  delay(10);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  delay(10); 
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  delay(10);
  digitalWrite(4, HIGH);}

void loop()
{
}