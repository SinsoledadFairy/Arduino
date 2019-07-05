char i = 0;
int n=250;   
int pin = 13;   
void setup() 
{   
  pinMode(pin,OUTPUT);
  Serial.begin(9600); 
}   
void loop() 
{   if(Serial.available()>0)
  {
    i=Serial.read();
    Serial.print(i);
    if(i=='a'){dot();dash(); delay(3000);};
    if(i=='b'){dash();dot();dot();dot(); delay(3000);};
    if(i=='c'){dash();dot();dash();dot(); delay(3000);};
    if(i=='d'){dash();dot();dot(); delay(3000);};
    if(i=='e'){dot();delay(3000);};
    if(i=='f'){dot();dot();dash();dot(); delay(3000);};
    if(i=='g'){dash();dash();dot(); delay(3000);};
    if(i=='h'){dot();dot();dot();dot(); delay(3000);};
    if(i=='i'){dot();dot(); delay(3000);};
    if(i=='j'){dot();dash();dash();dash(); delay(3000);};
    if(i=='k'){dash();dot();dash(); delay(3000);};
    if(i=='l'){dot();dash();dot();dot(); delay(3000);};
    if(i=='m'){dash();dash(); delay(3000);};
    if(i=='n'){dash();dot(); delay(3000);};
    if(i=='o'){dash();dash();dash(); delay(3000);};
    if(i=='p'){dot();dash();dash();dot(); delay(3000);};
    if(i=='q'){dash();dash();dot();dash(); delay(3000);};
    if(i=='r'){dot();dash();dot(); delay(3000);};
    if(i=='s'){dot();dot();dot(); delay(3000);};
    if(i=='t'){dash(); delay(3000);};
    if(i=='u'){dot();dot();dash(); delay(3000);};
    if(i=='v'){dot();dot();dot(); dash(); delay(3000);};
    if(i=='w'){dot();dash();dash(); delay(3000);};
    if(i=='x'){dash();dot();dot();dash(); delay(3000);};
    if(i=='y'){dash();dot();dash();dash(); delay(3000);};
    if(i=='z'){dash();dash();dot();dot(); delay(3000);};
    if(i=='\0'){c_space(); delay(3000);}; 
    if(i=='\n'){w_space(); delay(3000);};
  }
}
void dot() 
{   
  digitalWrite(pin, HIGH);   
  delay(n);   
  digitalWrite(pin, LOW);   
  delay(n); 
}   
void dash() 
{   
  digitalWrite(pin, HIGH);   
  delay(n*4);   
  digitalWrite(pin, LOW);   
  delay(n); 
}
void c_space()
{
  digitalWrite(pin,LOW);
  delay(n*3);
}

void w_space()
{
  digitalWrite(pin,LOW);
  delay(n*7);
}
