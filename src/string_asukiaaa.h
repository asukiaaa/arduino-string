#ifndef _STRING_ASUKIAAA_H_
#define _STRING_ASUKIAAA_H_

#include <Arduino.h>

namespace string_asukiaaa {
  String padStart(String str, unsigned int len, char pad);
  String padNumStart(long num, unsigned int len, char pad);
  String padNumStart(double num, unsigned int len, char pad);
  String padEnd(String str, unsigned int len, char pad);
  String padNumEnd(long num, unsigned int len, char pad);
  String padNumEnd(double num, unsigned int len, char pad);
}

#endif
