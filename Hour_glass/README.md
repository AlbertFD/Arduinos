# Hour_glass

An LED "hourglass" timer.

## What it does
Lights an additional LED every 6 seconds across pins 2–7. When the last LED (pin 7) lights, it prints `Tilt Me!!!!!` over serial. Flipping the switch on pin 8 resets all LEDs and restarts the timer — like turning an hourglass over.

## Wiring
- LEDs: pins 2–6 (lit one at a time, every `interval` = 6000 ms)
- Reset switch: pin 8 (INPUT)
- Serial: 9600 baud

## Tweak
Change `interval` to speed up or slow down the timer.
