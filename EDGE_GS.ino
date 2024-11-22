#include <Servo.h>

int initial_position = 90;
int LDR1 = A0;
int LDR2 = A1;
int erro = 5;     
int servopin = 3;
int meio = 90;

Servo myServo;

void setup() { 
  myServo.attach(servopin);  
  pinMode(LDR1, INPUT);   
  pinMode(LDR2, INPUT);
  myServo.write(initial_position);   //Move servo at 90 degree
  Serial.begin(9600);
  delay(2000);           
}  
 
void loop() {
  int left_ldr = analogRead(LDR1); // read  LDR 1
  int right_ldr = analogRead(LDR2); // read  LDR 2
  
  if(left_ldr > right_ldr){
    meio = meio + 10;
    myServo.write(meio);
  } else if (right_ldr > left_ldr){
    meio = meio - 10;
    myServo.write(meio);
  } else {
    Serial.println("Centralizado: " + String(left_ldr) + String(right_ldr));
  }

  Serial.println("Esquerda: " + String(left_ldr));
  Serial.println("Direita: " + String(right_ldr));
  delay(2000);

}

