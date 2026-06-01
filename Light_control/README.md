# Light_control

RGB LED color mixer driven by three analog sensors.

## What it does
Reads three analog inputs (A0–A2), scales each 0–1023 reading down to 0–255, and writes the results to the red, green, and blue channels of an RGB LED via PWM. Adjust the three sensors/potentiometers to mix the LED color. Raw and mapped values are printed over serial (9600 baud).

## Wiring
| Channel | Sensor in | LED out (PWM) |
|---------|-----------|---------------|
| Red     | A0        | pin 10        |
| Green   | A1        | pin 9         |
| Blue    | A2        | pin 11        |
