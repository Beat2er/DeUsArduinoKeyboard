# DeUsArduinoKeyboard
My approach at making an Arduino Keyboard library that supports the German and US layout
## Usage
Use like the [default Arduino Keyboard library](https://www.arduino.cc/reference/en/language/functions/usb/keyboard/).

```Keyboard_layout(string language);``` to select language.

Example: ```Keyboard_layout("de");``` or ```Keyboard_layout("en");```

When no language is set, the US layout is taken as dafault.


## Based on
- [Ascii mappings including ALT](https://github.com/BesoBerlin/Arduino-German-Keyboard) Thanks!
- [Structure and logic](https://github.com/MichaelDworkin/Arduino-Leonardo-USB-Keyboard-Deutsch-library) Thanks!
