#ifndef _STRING_ASUKIAAA_H_
#define _STRING_ASUKIAAA_H_

#include <Arduino.h>

#define STRING_ASUKIAAA_VERSION_MAJOR 1
#define STRING_ASUKIAAA_VERSION_MINOR 0
#define STRING_ASUKIAAA_VERSION_PATCH 3

namespace string_asukiaaa {
String padStart(const String& str, unsigned int len, char pad);
String padNumStart(int num, unsigned int len, char pad);
String padNumStart(long num, unsigned int len, char pad);
String padNumStart(float num, unsigned int len, char pad);
String padNumStart(double num, unsigned int len, char pad);
String padEnd(const String& str, unsigned int len, char pad);
String padNumEnd(int num, unsigned int len, char pad);
String padNumEnd(long num, unsigned int len, char pad);
String padNumEnd(float num, unsigned int len, char pad);
String padNumEnd(double num, unsigned int len, char pad);
String yesNo(bool value);
String trueFalse(bool value);
void printHexBytesToStream(Stream* serial, uint8_t* bytes, size_t lenBytes);
void printlnHexBytesToStream(Stream* serial, uint8_t* bytes, size_t lenBytes);
String getBySplit(const String str, String wordSplit, uint16_t index);
}  // namespace string_asukiaaa

#endif
