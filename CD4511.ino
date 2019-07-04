void setup()
{
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(4,OUTPUT);
  Serial.begin(9600); 
}
int i=0,n,a[32];
void loop()
{
  i=0;
  if(Serial.available()>0)
  {
    n=Serial.read();
    n=n-48;
    while (i!=4)
    {
        a[i]=n%2;
        i=i+1;
        n=n/2;
    }
    digitalWrite(4,0);delay(10);
    digitalWrite(7,a[0]&1);
    digitalWrite(8,a[1]&1);
    digitalWrite(12,a[2]&1);
    digitalWrite(13,a[3]&1);delay(10);
    digitalWrite(4,HIGH);delay(10);
  }
}
