/* Comunicação serial exemplo*/
#define led1 6  
#define led2 7
#define led3 9
#define led4 8
#define led5 5
#define led6 4
#define led7 3
#define led8 2





void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  
  Serial.begin(9600);
  Serial.print("OPA!");
  Serial.println(" Iniciei!");
  Serial.println(" Digite a para o primeiro efeito! ");
  Serial.println(" Digite b para o segundo efeito! ");
  Serial.println(" Digite c para o terceiro efeito! ");
  Serial.println(" Digite d para o quarto efeito! ");
  Serial.println(" Digite z para desligar todos os Leds ");
}
char c = 0;

void loop()
{
  if (Serial.available()){ // primeiro efeito! //
    c = Serial.read();
    if (c == 'a'){
      digitalWrite(led1, HIGH);
    delay (800);
      digitalWrite(led2, HIGH);
    delay (800);
      digitalWrite(led3, HIGH);
    delay (800);
      digitalWrite(led4, HIGH);
    delay (800);
      digitalWrite(led5, HIGH);
    delay (800);
      digitalWrite(led6, HIGH);
    delay (800);
      digitalWrite(led7, HIGH);
    delay (800);
      digitalWrite(led8, HIGH);
    delay (800);
      digitalWrite(led8, LOW);
    delay (800);
      digitalWrite(led7, LOW);
    delay (800);
      digitalWrite(led6, LOW);
    delay (800);
      digitalWrite(led5, LOW);
    delay (800);
      digitalWrite(led4, LOW);
    delay (800);
      digitalWrite(led3, LOW);
    delay (800);
      digitalWrite(led2, LOW);
    delay (800);
      digitalWrite(led1, LOW);
    delay (800);} 
      
    if (c == 'z'){ // parar // 
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, LOW);
     delay (800);
    
    
    Serial.print("Recebi letra : ");
    Serial.println(c);}
   
    if (c == 'b'){
      digitalWrite(led8, HIGH);
    delay (800);
      digitalWrite(led7, HIGH);
    delay (800);
      digitalWrite(led6, HIGH);
    delay (800);
      digitalWrite(led5, HIGH);
    delay (800);
      digitalWrite(led4, HIGH);
    delay (800);
      digitalWrite(led3, HIGH);
    delay (800);
      digitalWrite(led2, HIGH);
    delay (800);
      digitalWrite(led1, HIGH);
    delay (800);
      digitalWrite(led1, LOW);
    delay (800);
      digitalWrite(led2, LOW);
    delay (800);
      digitalWrite(led3, LOW);
    delay (800);
      digitalWrite(led4, LOW);
    delay (800);
      digitalWrite(led5, LOW);
    delay (800);
      digitalWrite(led6, LOW);
    delay (800);
      digitalWrite(led7, LOW);
    delay (800);
      digitalWrite(led8, LOW);
    delay (800);}   
      
    if (c == 'z'){ // parar // 
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, LOW);
     delay (800);
    
    
    Serial.print("Recebi letra : ");
    Serial.println(c);}
    
    if (c == 'c'){ // terceiro efeito // 
      digitalWrite(led1, HIGH);
    delay (400);
      digitalWrite(led3, HIGH);
    delay (400);
      digitalWrite(led5, HIGH);
    delay (400);
      digitalWrite(led7, HIGH);
    delay (400);
      digitalWrite(led2, LOW);
    delay (400);
      digitalWrite(led4, LOW);
    delay (400);
      digitalWrite(led6, LOW);
    delay (400);
      digitalWrite(led8, LOW);
    delay (400);
      digitalWrite(led1, LOW);
    delay (400);
      digitalWrite(led3, LOW);
    delay (400);
      digitalWrite(led5, LOW);
    delay (400);
      digitalWrite(led7, LOW);
    delay (400);
      digitalWrite(led2, HIGH);
    delay (400);
      digitalWrite(led4, HIGH);
    delay (400);
      digitalWrite(led6, HIGH);
    delay (400);
      digitalWrite(led8, HIGH);
    delay (400);}   
      
    if (c == 'z'){ // parar // 
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, LOW);
     delay (800);
    
    
    Serial.print("Recebi letra : ");
    Serial.println(c);}
    
    if (c == 'd'){ // quarto efeito // 
      digitalWrite(led1, HIGH);
    delay (800);
      digitalWrite(led6, HIGH);
    delay (800);
      digitalWrite(led3, HIGH);
    delay (800);
      digitalWrite(led8, HIGH);
    delay (800);
      digitalWrite(led2, LOW);
    delay (400);
      digitalWrite(led4, LOW);
    delay (400);
      digitalWrite(led5, LOW);
    delay (400);
      digitalWrite(led7, LOW);//
    delay (400);
      digitalWrite(led4, HIGH);
    delay (800);
      digitalWrite(led7, HIGH);
    delay (800);
      digitalWrite(led2, HIGH);
    delay (800);
      digitalWrite(led5, HIGH);
    delay (800);
      digitalWrite(led1, LOW);
    delay (400);
      digitalWrite(led3, LOW);
    delay (400);
      digitalWrite(led5, LOW);
    delay (400);
      digitalWrite(led7, LOW);
    delay (400);}   
      
    if (c == 'z'){ // parar // 
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, LOW);
     delay (800);
    
    
    Serial.print("Recebi letra : ");
    Serial.println(c);}
    
  }
}
