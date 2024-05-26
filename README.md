# Robô aspirador usando Arduino

#### Ao explorar um código para entendê-lo e montar um robô aspirador usando Arduino envolve controlar motores para a movimentação, sensores para evitar obstáculos e, possivelmente, um aspirador para a limpeza. Na qual utiliza a Placa Arduino Uno, dois motores DC com um driver de motor L298N, e um sensor de distância ultrassônico HC-SR04 para detecção de obstáculos.

# Componentes Necessários
* Arduino Uno;
* Driver de Motor L298N;
* Motores DC (x2);
* Rodas;
* Sensor Ultrassônico HC-SR04;
* Bateria;
* Fios e Protoboard;

# Esquema de Ligação
1 - Conecte os motores ao driver L298N:

* Motor esquerdo: IN1 e IN2;
* Motor direito: IN3 e IN4;

2 - Conecte o driver L298N ao Arduino:

* ENA ao pino 9 (PWM);
* IN1 ao pino 8;
* IN2 ao pino 7;
* ENB ao pino 10 (PWM);
* IN3 ao pino 6;
* IN4 ao pino 5;

3 - Conecte o sensor ultrassônico HC-SR04 ao Arduino:

* VCC ao 5V;
* GND ao GND;
* TRIG ao pino 12;
* ECHO ao pino 11;

# Explicação

* Configuração dos Pinos: Configura os pinos do motor e do sensor ultrassônico.
* Medir Distância: Usa o sensor ultrassônico para medir a distância até o obstáculo mais próximo.
* Lógica de Movimento: Se a distância medida for menor que 20 cm, o robô para e vira à direita para evitar o obstáculo. Caso contrário, ele se move para frente.
* Depuração: A distância medida é impressa na porta serial para ajudar na depuração.
  
#### Observa-se que pode-se expandir para mais sensores, além de utilizar a lógica de navegação mais avançada, controle de velocidade, entre outras melhorias que pode-se ser feito.

#### Observação: Projeto e prototipagem em estudo;
