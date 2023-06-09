# Arduino-Potentiometer-LED-Control
Learning about how Potentiometers work to control voltages.

This repository contains an Arduino script that demonstrates the usage of potentiometers to control LEDs. The script reads the voltage produced by a potentiometer and lights up corresponding LEDs based on the voltage level.

## Circuit Diagram
The circuit includes a potentiometer connected to the Arduino board. One leg of the potentiometer is connected to +5V, the second leg is connected to ground (GND), and the third leg is connected to analog input pin A5. The LEDs are connected to digital output pins 11 (goodPin), 10 (cautionPin), and 9 (alertPin).

![Potentiometer circuit](https://i.imgur.com/3kBN1qI.png)
#
*Potentiometer Circuit*

#

![LED circuit](https://i.imgur.com/3GqwKBp.png)
#
*LED circuit, note that there are 3 LED's*

## Getting Started
To get started with this project, follow these steps:

1. Set up the circuit as described in the circuit diagram.
2. Connect your Arduino board to your computer.
3. Open the Arduino IDE and create a new sketch.
4. Copy the code into the sketch.
5. Upload the sketch to your Arduino board.
6. Open the serial monitor to view the voltage readings.
7. Observe the LEDs lighting up based on the voltage level.

## Youtube Video Demonstration
[![Demonstration](https://i.imgur.com/FoRdBbf.jpg)](https://youtu.be/hCT-pqUyx0I)


