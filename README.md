# arduino-string (string_asukiaaa)

This library supplies useful functions to manage string on Arduino.

## Usaste

See [an example project for string](./examples/padString/padString.ino).

Include
```c
#include <string_asukiaaa.h>
```

padStart and padEnd
```c
// strA becomes "0000000123"
String strA = string_asukiaaa::padStart("123", 10, '0'));
// strB becomes "bb--------"
String strB = string_asukiaaa::padEnd("bb", 10, '-'));
```

padNumStart and padNumEnd
```c
// strA becomes "0000000123"
String strA = string_asukiaaa::padNumStart(123, 10, '0'));
// strB becomes "99--------"
String strB = string_asukiaaa::padNumEnd(99, 10, '-'));
```

## License

MIT

## Reference

- [Add padStart and padEnd | ArduinoCore-avr](https://github.com/arduino/ArduinoCore-avr/pull/392)
