# teensyduino experimentation

## `blink.ino`

The LED built into the teensy flashes on/off for 1.5 seconds each. Mostly copied from the example Arduino code.

## `rgbled.ino`

Added a function that takes three `LOW` or `HIGH` values as parameters for the red, blue, and green channels. Defined functions `green()`, `cyan()`, `blue()`, `magenta()`, and `yellow()` that simply display those colors on the RGB LED attached to pins 21-23.

The RGB LED connected to the breadboard flashes green for half a second, cyan for half a second, yellow for half a second, and then magenta for half a second, before looping indefinitely.

[See video on Instagram.](https://www.instagram.com/p/Bb7tOeYAvTN/?taken-by=kenziebottoms)