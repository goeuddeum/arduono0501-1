// C++ code
//
int animationSpeed= 0;
void setup()
{
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
}
void loop()
{
  animationSpeed = 400;
  digitalWrite(13,HIGH);
  delay(animationSpeed);//wait for animation millsecond(s)
  digitalWrite(13,LOW);
  delay(animationSpeed);//wait for animation millsecond(s)
  digitalWrite(12,HIGH);
  delay(animationSpeed);//wait for animation millsecond(s)
  digitalWrite(12,LOW);
  delay(animationSpeed);//wait for animation millsecond(s)
  digitalWrite(11,HIGH);
  delay(animationSpeed);//wait for animation millsecond(s)
  digitalWrite(11,LOW);
  delay(animationSpeed);//wait for animation millsecond(s)
}