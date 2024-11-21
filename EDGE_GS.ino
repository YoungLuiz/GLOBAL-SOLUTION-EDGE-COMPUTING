int LDRPin = A0; 
int ledG = 13; 
int ledR = 11;
int ledB = 3;
int relePin = 2;  

int LDRValue = 0; 
int limiteEnergia = 800;

void setup() {  
  pinMode(ledG, OUTPUT);   
  pinMode(ledR, OUTPUT); 
  pinMode(ledB, OUTPUT);  
  pinMode(relePin, OUTPUT); 

  Serial.begin(9600);        
}

void loop() { 
  LDRValue = analogRead(LDRPin);  

  Serial.println(LDRValue);  

  
  if (LDRValue >= limiteEnergia) {
    digitalWrite(ledB, HIGH);   
    digitalWrite(ledG, LOW);    
    digitalWrite(ledR, LOW);    

 
    digitalWrite(relePin, LOW);  

  } else {
    digitalWrite(ledG, HIGH);   
    digitalWrite(ledR, LOW);    
    digitalWrite(ledB, LOW);    

    
    digitalWrite(relePin, HIGH);  
  }

  
  if (LDRValue < 500) {
    digitalWrite(ledR, HIGH);  
    delay(150);                 
    digitalWrite(ledR, LOW); 
    digitalWrite(ledG, LOW);  
  }

  delay(1000);  
}
