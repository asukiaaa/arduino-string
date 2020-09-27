#include "string_asukiaaa.h"

namespace string_asukiaaa {
  String padStart(String str, unsigned int len, char pad) {
    while (str.length() < len) {
      str = pad + str;
    }
    return str;
  }

  String padNumStart(long num, unsigned int len, char pad) {
    return padStart(String(num), len, pad);
  }

  String padNumStart(double num, unsigned int len, char pad) {
    return padStart(String(num), len, pad);
  }

  String padEnd(String str, int unsigned len, char pad) {
    while (str.length() < len) {
      str += pad;
    }
    return str;
  }

  String padNumEnd(long num, unsigned int len, char pad) {
    return padEnd(String(num), len, pad);
  }

  String padNumEnd(double num, unsigned int len, char pad) {
    return padEnd(String(num), len, pad);
  }
}
