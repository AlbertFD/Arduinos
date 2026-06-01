# motor

Switch-controlled DC motor on/off.

## What it does
Reads a switch on pin 2. When the switch is HIGH the motor (pin 9) runs; when LOW it stops. A simple on/off motor control.

## Wiring
- Switch: pin 2 (INPUT)
- Motor (via transistor/driver): pin 9

> Drive a motor through a transistor or motor driver and a flyback diode — don't connect a motor directly to an Arduino pin.
