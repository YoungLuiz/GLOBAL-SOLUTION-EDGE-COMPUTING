# Projeto de Controle de Carregamento de Energia com Arduino

Este projeto visa controlar o processo de carregamento de uma bateria a partir de um sistema de geração de energia (como um painel solar), utilizando um **Arduino** com um **sensor LDR (Light Dependent Resistor)** para monitorar a intensidade da luz e um **relé** para interromper o carregamento quando a energia atinge um nível pré-definido. O objetivo é evitar sobrecarga e otimizar o uso da energia gerada de maneira eficiente e automática.

## Sumário

- [Descrição do Projeto](#descrição-do-projeto)
- [Objetivo](#objetivo)
- [Funcionalidades](#funcionalidades)
- [Requisitos do Sistema](#requisitos-do-sistema)
- [Dependências](#dependências)
- [Instruções de Uso](#instruções-de-uso)
- [Estrutura de Arquivos](#estrutura-de-arquivos)
- [Licença](#licença)

## Descrição do Projeto

O projeto utiliza um **Arduino** para controlar o processo de carregamento de uma bateria, com base na energia gerada por um sistema fotovoltaico. O **sensor LDR** monitora a intensidade da luz, determinando quando a energia gerada é suficiente para carregar a bateria. Quando a energia atinge o nível máximo permitido, o **relé** desliga automaticamente o carregamento para evitar a sobrecarga.

Além disso, LEDs de **status** são usados para indicar o estado atual do sistema:
- **LED Verde**: Carregando a bateria.
- **LED Vermelho**: Energia insuficiente para carregar a bateria.
- **LED Azul**: Carregamento completo (energia atingiu o limite).

## Objetivo

Garantir que o processo de carregamento de baterias seja feito de maneira segura, evitando sobrecarga, e otimizar o uso da energia renovável gerada por sistemas solares.

## Funcionalidades

- **Monitoramento de Energia**: Utiliza um sensor LDR para medir a intensidade de luz e determinar a quantidade de energia gerada.
- **Controle Automático do Carregamento**: Quando a energia atinge o limite definido, o carregamento é interrompido automaticamente.
- **Feedback Visual**: LEDs indicam o status do carregamento:
  - **LED Verde**: Indica que o sistema está carregando a bateria.
  - **LED Vermelho**: Indica que a energia está insuficiente para carregar a bateria.
  - **LED Azul**: Indica que o carregamento foi interrompido, pois a energia atingiu o limite.

## Requisitos do Sistema

- **Arduino UNO** (ou compatível)
- **Sensor LDR** (para medir a intensidade da luz)
- **Relé** (para controlar o carregamento da bateria)
- **3 LEDs** (Verde, Vermelho e Azul para feedback visual)
- **Fios de conexão** (para ligar os componentes ao Arduino)
- **Resistor de 10kΩ** (para o sensor LDR)
- **Fonte de energia** (para o Arduino e o sistema de carregamento)

## Instruções de Uso

### Passo 1: Conexões

1. **Sensor LDR**:
   - Conecte o A0 do LDR ao pino analógico `A0` do Arduino.
   - Conecte o GND do LDR no resistor e no terra da PROTOBOARD.
   - Conecte o VCC do LDR no positivo da PROTOBOARD
2. **LEDs**:
   - **LED Verde**: Conecte o cátodo (perna mais curta) ao GND e o ânodo ao pino digital `13`.
   - **LED Vermelho**: Conecte o cátodo ao GND e o ânodo ao pino digital `11`.
   - **LED Azul**: Conecte o cátodo ao GND e o ânodo ao pino digital `3`.

3. **Relé**:
   - Conecte o pino de controle do relé ao pino digital `2` no Arduino.

### Passo 2: Carregar o Código

1. Abra o **Arduino IDE**.
2. Copie o código do projeto no editor de código da IDE.
3. Conecte o Arduino ao computador e selecione a porta correta na IDE.
4. Faça o upload do código para o Arduino.

### Passo 3: Testando o Sistema

1. Após carregar o código, o Arduino começará a ler a intensidade de luz do sensor LDR.
2. O status do carregamento será indicado pelos LEDs:
   - **LED Verde**: O carregamento está em andamento.
   - **LED Vermelho**: A energia está insuficiente para carregar a bateria.
   - **LED Azul**: O carregamento foi interrompido quando a energia atingiu o limite.

### Passo 4: Ajustar o Limite de Energia

O limite de energia pode ser ajustado diretamente no código através da variável `limiteEnergia`. O valor desta variável define o nível em que o carregamento é interrompido (no intervalo de 0 a 1023).



## Captura de Tela do Projeto

Clique [aqui](image/Captura%20de%20tela%202024-11-20%20232546.png) para visualizar a captura em tamanho maior.
<br/>
Link do projeto: https://wokwi.com/projects/414886988115281921
