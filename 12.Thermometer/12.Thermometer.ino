// C++ code
//
void setup()
{
  pinMode(A0,INPUT);
  Serial.begin(9600);
}

void loop()
{
  int t=analogRead(A0);
  float R=(float)t/1023;
  float temp=R*500;
  Serial.println(temp);

}