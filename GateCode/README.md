# GateCode

Arduino microcontroller for opening and closing gate valves in a beamline.

## What it does
Listens on the serial port (9600 baud) for text commands and switches four output pins (gate valves) on pins 2–5 open or closed, e.g. via relays driving the valve actuators. Type `help` in the Serial Monitor for the full command list.

## Commands
- `allon` / `alloff` — open / close all valves
- `1on`..`4on` — open valve 1–4 (pins 2–5)
- `1off`..`4off` — close valve 1–4
- `open?` — report which valves are currently open/closed
- `help` — print the command list

## Wiring
| Valve | Pin |
|-------|-----|
| 1     | 2   |
| 2     | 3   |
| 3     | 4   |
| 4     | 5   |

All valves start closed (LOW) at boot.

## Note
The sketch lives at `Gate_code_arduino/`. This is the current version (tracks each gate's open/closed state and supports the `open?` query).
