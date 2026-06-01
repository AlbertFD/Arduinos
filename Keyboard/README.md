# Keyboard

A four-key musical keyboard using a resistor-ladder of buttons on one analog pin.

## What it does
Reads a single analog input (A0) wired as a resistor ladder of four buttons. Each button produces a distinct voltage / analog value, which triggers one of four notes (C4, D4, E4, F4 — 262/294/330/349 Hz) on a buzzer on pin 8. Releasing all keys silences the tone. Analog readings are printed over serial (9600 baud) for tuning the thresholds.

## Wiring
- Button ladder (4 keys): A0
- Speaker / piezo buzzer: pin 8

## Tune
If a key doesn't sound, watch the serial output and adjust the value ranges in the sketch to match your readings.
