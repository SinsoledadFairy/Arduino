void setup()
{
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}
int income;
void loop()
{
  if(Serial.available()>0)
  {
   income=Serial.read();
    switch(income)
    {
      case 'f':
      forward();
      break;
      case 'b':
      back();
      break;
      case 'l':
      left();
      break;
      case 'r':
      right();
      break;
      case 's':
      stop();
      break;
      default:
      break;
  }
  }
}
void forward()
{
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(2,HIGH);  
  digitalWrite(4,HIGH);
  digitalWrite(8,LOW);
  digitalWrite(13,LOW);
}
void back()
{
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(13,HIGH);
  digitalWrite(2,LOW);
  digitalWrite(4,LOW);
}
void left()
{
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(2,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(13,LOW);
}
void right()
{
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(13,HIGH);
  digitalWrite(2,LOW);
  digitalWrite(8,LOW);
}
void stop()
{
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(2,LOW);
  digitalWrite(8,LOW);
  digitalWrite(4,LOW);
  digitalWrite(13,LOW);
}
