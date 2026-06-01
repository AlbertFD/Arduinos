# GateCode

Serial-controlled 4-gate (relay/channel) controller for an Arduino.

## What it does
Listens on the serial port (9600 baud) for text commands and switches four output pins (gates) on pins 2–5 open or closed. Type `help` in the Serial Monitor for the full command list.

## Commands
- `allon` / `alloff` — open / close all gates
- `1on`..`4on` — open gate 1–4 (pins 2–5)
- `1off`..`4off` — close gate 1–4
- `open?` — report which gates are currently open/closed
- `help` — print the command list

## Wiring
| Gate | Pin |
|------|-----|
| 1    | 2   |
| 2    | 3   |
| 3    | 4   |
| 4    | 5   |

All gates start closed (LOW) at boot.

## Note
The sketch lives at `Gate_code_arduino/`. This is the current version (tracks each gate's open/closed state and supports the `open?` query).
