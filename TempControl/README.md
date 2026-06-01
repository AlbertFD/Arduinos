# TempControl

Button-triggered LED indicator.

## What it does
While the button (pin 2) is released, a green LED stays on. When pressed, the green LED turns off and two LEDs alternate every 250 ms.

> Note: this sketch is currently identical to `Rocket_Control_Project` — it appears to be a starting point that hasn't yet been adapted for actual temperature control (no temperature sensor is read).

## Wiring
- Button: pin 2 (INPUT)
- Green LED: pin 3
- Red LEDs: pins 4 and 5
