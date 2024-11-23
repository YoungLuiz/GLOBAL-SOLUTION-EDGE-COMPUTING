# **Projeto de Seguidor Solar com Arduino**  

Este projeto consiste em um protótipo de seguidor solar automatizado que ajusta a posição dos painéis solares para maximizar a captação de energia. Utilizando sensores LDR (Light Dependent Resistor) e um servo motor controlado por Arduino, o sistema monitora a intensidade da luz solar em diferentes direções e posiciona os painéis de forma eficiente.  

---
## Integrantes

Luiz Gustavo Araújo de Lima e Silva - RM560110
<br/>
Lucas de Almeida Villar - RM560005

## **Sumário**  
- [Descrição do Projeto](#descrição-do-projeto)  
- [Objetivo](#objetivo)  
- [Funcionalidades](#funcionalidades)  
- [Requisitos do Sistema](#requisitos-do-sistema)  
- [Dependências](#dependências)  
- [Instruções de Uso](#instruções-de-uso)  
- [Estrutura de Arquivos](#estrutura-de-arquivos)  

---

## **Descrição do Projeto**  

Este protótipo utiliza dois sensores LDR para monitorar a intensidade da luz em direções diferentes e um servo motor para ajustar a posição do painel solar em tempo real. Quando um dos LDRs detecta maior intensidade de luz, o servo motor é acionado, movendo o painel para a posição ideal.  

O sistema é simples, eficiente e permite demonstrar o conceito de seguidores solares que podem ser acoplados a bases de painéis reais.  

---

## **Objetivo**  

O objetivo do projeto é aumentar a eficiência na captação de energia solar, ajustando continuamente a posição dos painéis solares de acordo com a direção de maior intensidade luminosa.  

---

## **Funcionalidades**  

- **Leitura de Intensidade de Luz:** Dois sensores LDR monitoram a luz em diferentes direções.  
- **Ajuste Automático da Posição:** Um servo motor reposiciona o painel solar para a direção de maior luz.  
- **Centralização Automática:** O painel permanece centralizado quando as leituras dos dois LDRs são similares.  
- **Monitoramento via Serial:** Valores lidos pelos sensores e a posição do servo são exibidos no Monitor Serial do Arduino IDE.  

---

## **Requisitos do Sistema**  

- **Hardware:**  
  - Arduino UNO (ou compatível)  
  - 2 Sensores LDR  
  - Servo Motor    
  - Fonte de energia (5V para o servo motor e Arduino)  
  - Protoboard e fios para conexões  

- **Software:**  
  - Arduino IDE  

---

## **Dependências**  

A biblioteca `Servo.h` é necessária para controlar o servo motor. Ela já está incluída por padrão na IDE do Arduino.  

---

## **Instruções de Uso**  

### **Passo 1: Conexões**  

1. **Sensores LDR:**  
   - Conecte o LDR da esquerda ao pino analógico A0.  
   - Conecte o LDR da direita ao pino analógico A1.   

2. **Servo Motor:**  
   - Conecte o pino de sinal do servo ao pino digital 3.  
   - Conecte o terminal VCC do servo à fonte de energia (5V).  
   - Conecte o terminal GND do servo ao GND do Arduino.  

### **Passo 2: Carregar o Código**  

1. Abra a IDE do Arduino.  
2. Copie e cole o código fornecido.  
3. Conecte o Arduino ao computador e selecione a porta correta na IDE.  
4. Faça o upload do código para o Arduino.  

### **Passo 3: Testar o Sistema**  

1. Após o upload, o Arduino começará a monitorar as leituras dos LDRs.  
2. O servo motor ajustará a posição do painel de acordo com as leituras:  
   - Se o LDR da esquerda detectar mais luz, o painel se moverá para a esquerda.  
   - Se o LDR da direita detectar mais luz, o painel se moverá para a direita.  
   - Se as leituras forem similares, o painel permanecerá centralizado.  
3. Confira os valores no Monitor Serial para verificar o funcionamento.  

---
## **Captura de Tela do Projeto**
![image](https://github.com/user-attachments/assets/71a275ac-3c7b-4cb9-a6f6-7b73be174922)


Clique [aqui](https://wokwi.com/projects/415208501165138945) para visualizar o projeto no Wokwi.

## Video do Projeto
https://youtu.be/oPnglz4LTrU?si=q0j9oi5974QGg6-N

 

---



