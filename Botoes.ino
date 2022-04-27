/* Exemplo de uso de botao com pull up interno e externo
    for DS104 not 18/04/21
*/

int contador =0;

#define btn1 2
#define btn2 7

#define led1 8
#define led2 6
#define led3 4
#define led4 3

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(btn1, INPUT);
  pinMode(btn2, INPUT_PULLUP);
  
}

void loop()
{

  // se botao acionado liga led2 senao liga led1
  if (digitalRead(btn1)==LOW){
    digitalWrite(led1,HIGH);
    delay(500); 
    digitalWrite(led2,LOW);
    delay(500); 
    digitalWrite(led3,HIGH);
    delay(500); 
    digitalWrite(led4,LOW);
  }
  else {
    digitalWrite(led1,LOW);
    delay(500); 
    digitalWrite(led2,HIGH);
    delay(500); 
    digitalWrite(led3,LOW);
    delay(500); 
    digitalWrite(led4,HIGH);
  }
  
  if (digitalRead(btn2)==LOW){
    digitalWrite(led1,LOW);
    delay(500); 
    digitalWrite(led2,HIGH);
    delay(500); 
    digitalWrite(led3,LOW);
    delay(500); 
    digitalWrite(led4,HIGH);
  }
  else {
    digitalWrite(led1,HIGH);
    delay(500); 
    digitalWrite(led2,LOW);
    delay(500); 
    digitalWrite(led3,HIGH);
    delay(500); 
    digitalWrite(led4,LOW);
  }
  contador++;  //contador = contador + 1  
  if (contador > 4)
    contador = 0;

}