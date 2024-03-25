# CP1 Edge Computing

Turma: 1ESPH Integrantes: Arthur Fellipe, Eduardo Pires, Leonardo Munhoz

LINK DO TINKERCAD: https://www.tinkercad.com/things/kxzj29PMpFi-cp1-edge

Componentes Utilizados:

- Arduino Uno
- Sensor de Luminosidade LDR
- Resistor de 10 kΩ
- Resistores de 220Ω
- LED Verde
- LED Amarelo
- LED Vermelho
- Buzzer
- Protoboard
- Cabos Jumper

# Montagem no Tinkercad:

Conecte o sensor LDR:

- Pino A0 do Arduino ao Terminal 2 do LDR.
- Pino negativo (GND) do Arduino ao Terminal 1 do Resistor 10kΩ .
- Pino positivo (5V) do Arduino ao Terminal 1 do LDR.
- Conecte a outra extremidade do resistor de 10kΩ ao pino restante do LDR.


 Conecte os LEDs:

- Anodo do LED Vermelho ao pino digital 2 do Arduino.
- Cátodo do LED Vermelho ao GND do Arduino.
- Anodo do LED Amarelo ao pino digital 3 do Arduino.
- Cátodo do LED Amarelo ao GND do Arduino.
- Anodo do LED Verde ao pino digital 4 do Arduino.
- Cátodo do LED Verde ao GND do Arduino.


Conecte o buzzer:

- Pino negativo do buzzer ao pino digital 5 do Arduino.
- Pino positivo do buzzer ao GND do Arduino.

Código: na Pasta "cp1Edge"
