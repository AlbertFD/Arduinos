# Servo

Potentiometer-controlled servo motor.

## What it does
Reads a potentiometer on A0, maps its value (0–1023) to a servo angle (0–179°), and writes that angle to a servo on pin 9. Turn the knob to sweep the servo. Raw pot value and angle are printed over serial (9600 baud).

## Wiring
- Potentiometer: A0
- Servo signal: pin 9

## Requires
The `Servo.h` library (included with the Arduino IDE).
