#define led 13
#define botao 2
int estadoBotao = 0;

void setup() 
{
Serial.begin (9600);
pinMode (led, OUTPUT);
pinMode (botao, INPUT);
}
void loop() 
{
  
  estadoBotao = digitalRead(botao);

  if (estadoBotao == HIGH)
  {
    digitalWrite (led, HIGH);
  }
  
  else
  {
    digitalWrite (led, LOW);
  }

}
