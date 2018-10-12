algernon's Atreus firmware
==============================

[![CI status](https://ci.madhouse-project.org/api/badges/algernon/Atreus-Sketch/status.svg?branch=master)](https://ci.madhouse-project.org/algernon/Atreus-Sketch)

This is my work in progress firmware Sketch for the [Atreus][atreus], using [Kaleidoscope][ks]. Unlike my [Model01][fw:model01] or [ErgoDox][fw:ergodox] sketches, this one is not intended for daily use, but for playing selected games.

 [ks]: https://github.com/keyboardio/Kaleidoscope
 [atreus]: https://atreus.technomancy.us/
 [fw:model01]: https://git.madhouse-project.org/algernon/Model01-Sketch
 [fw:ergodox]: https://git.madhouse-project.org/algernon/ErgoDox-sketch

## Table of Contents

* [Typing layouts](#typing-layouts)
  - [ADORE](#adore)
  - [Dvorak](#dvorak)
  - [Raise & Lower](#raise-lower)
* [Games](#games)
  - [The Elder Scrolls Online](#the-elder-scrolls-online)
* [Plugins used](#plugins-used)
* [License](#license)

## Typing layouts

### ADORE

When the keyboard boots up, it starts in "typing mode", intended to input text. It uses the `ADORE` layout I'm working on.

![ADORE][layout:adore:png]

([source][layout:adore:src]) ([KLE][layout:adore:kle])

 [layout:adore:png]: data/adore-layer.png
 [layout:adore:src]: data/adore-layer.json
 [layout:adore:kle]: http://www.keyboard-layout-editor.com/#/gists/1945257744b53073795b0795e18b1ab1

### Dvorak

For times when I want to type faster than I type on `ADORE`, but can't use my main keyboard (like when silence is paramount, lest I wake the twins), having access to a `Dvorak` layer is useful.

![Dvorak layer][layout:dvorak:png]

([source][layout:dvorak:src]) ([KLE][layout:dvorak:kle])

 [layout:dvorak:png]: data/dvorak-layer.png
 [layout:dvorak:src]: data/dvorak-layer.json
 [layout:dvorak:kle]: http://www.keyboard-layout-editor.com/#/gists/b7f98ff835c0c76d39d6740f18f5477f

### Raise & Lower

The `Raise` and `Lower` layers are common between `ADORE` and `Dvorak`.

![Raise & Lower layers][layout:raise-lower:png]

 ([source][layout:raise-lower:src])([KLE][layout:raise-lower:kle])

 [layout:raise-lower:png]: data/raise-lower-layers.png
 [layout:raise-lower:src]: data/raise-lower-layers.json
 [layout:raise-lower:kle]: http://www.keyboard-layout-editor.com/#/gists/dd63761e66cc8d22985b368ebadfe4f5

## Games

### The Elder Scrolls Online

![The Elder Scrolls Online Layout][layout:teso:png]

([source][layout:teso:src]) ([KLE][layout:teso:kle])

 [layout:teso:png]: data/teso-layers.png
 [layout:teso:src]: data/teso-layers.json
 [layout:teso:kle]: http://www.keyboard-layout-editor.com/#/gists/f907f484c1c4f6bac6946e7e7487e955

## Plugins used

This sketch uses a moderate amount of plugins only, listed below.

* [CycleTimeReport][kaleidoscope:cycletimereport]
* [Escape-OneShot][kaleidoscope:escape-oneshot]
* [FocusSerial][kaleidoscope:focusserial]
* [Focus-Version][kaleidoscope:focus-version]
* [Hardware-Technomancy-Atreus][kaleidoscope:hardware-technomancy-atreus]
* [Macros][kaleidoscope:macros]
* [OneShot][kaleidoscope:oneshot]

  [kaleidoscope:focus-version]: https://git.madhouse-project.org/algernon/Kaleidoscope-Focus-Version
  [kaleidoscope:hardware-technomancy-atreus]: https://github.com/keyboardio/Kaleidoscope-Hardware-Technomancy-Atreus
  [kaleidoscope:oneshot]: https://github.com/keyboardio/Kaleidoscope-OneShot
  [kaleidoscope:macros]: https://github.com/keyboardio/Kaleidoscope-Macros
  [kaleidoscope:focusserial]: https://github.com/keyboardio/Kaleidoscope-FocusSerial
  [chrysalis]: https://github.com/algernon/Chrysalis
  [kaleidoscope:cycletimereport]: https://github.com/keyboardio/Kaleidoscope-CycleTimeReport
  [kaleidoscope:escape-oneshot]: https://github.com/keyboardio/Kaleidoscope-Escape-OneShot

# License

The code is released under the terms of the GNU GPL, version 3 or later. See the
COPYING file for details.
