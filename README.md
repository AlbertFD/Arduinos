# Arduino Code

A collection of Arduino sketches by Albert Forsyth. Each project lives in its own folder with a `.ino` sketch and its own README describing the wiring and behavior.

## Projects

| Project | What it does |
|---------|--------------|
| [GateCode](GateCode/) | Serial-controlled 4-gate (relay/channel) controller. Open/close gates by typing commands; supports state tracking and an `open?` query. |
| [Hour_glass](Hour_glass/) | LED "hourglass" timer — lights an LED every 6 s across pins 2–7; flip the switch to reset. |
| [Thermin](Thermin/) | Light-based theremin. Self-calibrates a photoresistor, then plays a pitch that tracks light level. |
| [Rocket_Control_Project](Rocket_Control_Project/) | Button-triggered launch indicator with green/red LEDs and a blinking sequence. |
| [Servo](Servo/) | Potentiometer-controlled servo — knob position maps to servo angle (0–179°). |
| [TempControl](TempControl/) | Button/LED indicator (currently a copy of Rocket_Control_Project; no temp sensor yet). |
| [Light_control](Light_control/) | RGB LED color mixer driven by three analog sensors on A0–A2. |
| [motor](motor/) | Switch-controlled DC motor on/off. |
| [Zoetrope](Zoetrope/) | Variable-speed, reversible DC motor via an H-bridge, with on/off and direction buttons and a speed pot. |
| [Keyboard](Keyboard/) | Four-key musical keyboard using a resistor-ladder of buttons on one analog pin. |

## Usage

Open any project's `.ino` file in the Arduino IDE, select your board and port, and upload. Sketches that print over serial use **9600 baud** — open the Serial Monitor at that rate. See each project's README for wiring details.

## Repo notes

- `libraries/` — local Arduino libraries.
- `README` — original storage note (superseded by this file).
