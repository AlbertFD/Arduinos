# Zoetrope

Variable-speed, reversible motor controller using an H-bridge.

## What it does
Drives a DC motor through an H-bridge so it can spin in either direction at a speed set by a potentiometer — built to spin a zoetrope.
- On/off button (pin 5): toggles the motor enabled state
- Direction button (pin 4): toggles spin direction
- Potentiometer (A0): sets motor speed (PWM on the enable pin)

## Wiring
- H-bridge control pins: 2 and 3
- H-bridge enable (PWM/speed): pin 9
- Direction switch: pin 4
- On/off switch: pin 5
- Speed potentiometer: A0
