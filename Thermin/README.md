# Thermin

A light-based theremin (pitch instrument).

## What it does
At startup, an LED (pin 13) turns on for 5 seconds while the sketch calibrates the light range read from a photoresistor on A0 (record min/max). After calibration the LED turns off and the device plays a tone on pin 8 whose pitch (50–4000 Hz) tracks the light level — wave your hand over the sensor to change the note.

## Wiring
- Light sensor (photoresistor): A0
- Speaker / piezo buzzer: pin 8
- Calibration LED: pin 13

## Use
Cover/expose the sensor over a range of light during the first 5 seconds to calibrate.
