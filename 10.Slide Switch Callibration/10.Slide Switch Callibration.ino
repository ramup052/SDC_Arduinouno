// C++ code
//
void setup()
{
  pinMode(8, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int a=digitalRead(8);
  Serial.println(a);
}