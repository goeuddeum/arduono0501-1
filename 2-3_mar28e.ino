int Led1 = 1;
int Led2 = 2;
int Led3 = 3;
int Led4 = 4;
int Led5 = 5;
int Led6 = 6;

void style_1(void)
{
  unsigned char j;
  for(j=1;j<=6;j++)
    digitalWrite(j,HIGH);
    delay(200);

  for(j=6;j>=1;j--)
  {
    digitalWrite(j,LOW);
    delay(200);
  } 
}
void setup()
{ 
  unsigned char i;
  for(i=1;i<=6;i++)
    pinMode(i,OUTPUT);
}
void loop()
{   
  style_1();
  
}