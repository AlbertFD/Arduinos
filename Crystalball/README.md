# Crystalball

A Magic 8-Ball on an LCD. Tilt the crystal ball to "ask" a question, and it shows one of eight random replies on a 16x2 character display.

## Behavior

On power-up the display reads `Ask the / Crystal Ball!`. Each time the tilt switch changes state (when you tilt it), the sketch picks a random number 0–7 and prints `The ball says:` on the top row with the matching answer below:

| # | Reply |
|---|-------|
| 0 | Yes |
| 1 | Most Likely |
| 2 | Certainly |
| 3 | Outlook good |
| 4 | Unsure |
| 5 | Ask again |
| 6 | Doubtful |
| 7 | No |

A reply is generated on the tilt (HIGH→LOW transition), and the code only acts when the switch state changes, so a steady tilt won't re-roll repeatedly.

## Hardware

- Arduino board
- 16x2 character LCD (HD44780-compatible), wired in 4-bit mode
- Tilt switch on pin 6
- 10k potentiometer for LCD contrast, plus the usual backlight/contrast wiring

## Wiring

LCD pins are set by `LiquidCrystal lcd(12, 11, 5, 4, 3, 2)`:

| LCD pin | Arduino pin |
|---------|-------------|
| RS | 12 |
| Enable | 11 |
| D4 | 5 |
| D5 | 4 |
| D6 | 3 |
| D7 | 2 |

The tilt switch connects to **pin 6** (`INPUT`), reading LOW when tilted.

## Usage

Open `Crystalball.ino` in the Arduino IDE, select your board and port, and upload. Requires the `LiquidCrystal` library (bundled in this repo's `libraries/`). Tilt the ball and ask away.

## Note

`random()` is not seeded, so the sequence of replies repeats on each reset. To vary it, seed from a floating analog pin with `randomSeed(analogRead(A0))` in `setup()`.
