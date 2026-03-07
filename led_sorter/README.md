# Led Sorter 🔴🟢🔵🟡

## Description
This simple Arduino project is meant to sort a random LED among 4, shuffling them and lighting up the chosen LED.
A buzzer plays a repeating sound to simulate the shuffling.

## How it works
First, the LEDs are shuffled, each one lighting up on its own and then one of them is randomly chosen to light up, this repeats until the Arduino is disconnected.

## Components
- Arduino UNO
- Breadboard
- Jumper wires
- 4 LEDs
- Resistors
- Active buzzer (optional)

## Circuit
Each LED is connected to GND and to a digital pin through a resistor and a jumper wire, the buzzer is only connected to a digital pin and GND
The buzzer is optional, serving only as a shuffling sound. You can change the pins by modifying the variables in the start.

## Possible improvements
- Using a button to start the shuffle
- Adding more leds
- Using a passive buzzer to make more dynamic frequencies
