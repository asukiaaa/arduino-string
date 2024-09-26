#include "string_asukiaaa.h"

namespace string_asukiaaa {
String padStart(const String& s, unsigned int totalLength, char pad) {
  if (totalLength <= s.length()) return s;
  unsigned int paddingLength = totalLength - s.length();

  String result;
  result.reserve(totalLength);
  while (paddingLength--) {
    result += pad;
  }
  result += s;
  return result;
}

String padNumStart(int num, unsigned int len, char pad) {
  return padStart(String(num), len, pad);
}

String padNumStart(long num, unsigned int len, char pad) {
  return padStart(String(num), len, pad);
}

String padNumStart(float num, unsigned int len, char pad) {
  return padStart(String(num), len, pad);
}

String padNumStart(double num, unsigned int len, char pad) {
  return padStart(String(num), len, pad);
}

String padEnd(const String& s, unsigned int totalLength, char pad) {
  if (totalLength <= s.length()) return s;
  unsigned int paddingLength = totalLength - s.length();

  String result;
  result.reserve(totalLength);
  result = s;
  while (paddingLength--) {
    result += pad;
  }
  return result;
}

String padNumEnd(int num, unsigned int len, char pad) {
  return padEnd(String(num), len, pad);
}

String padNumEnd(long num, unsigned int len, char pad) {
  return padEnd(String(num), len, pad);
}

String padNumEnd(float num, unsigned int len, char pad) {
  return padEnd(String(num), len, pad);
}

String padNumEnd(double num, unsigned int len, char pad) {
  return padEnd(String(num), len, pad);
}

String yesNo(bool value) { return value ? "yes" : "no"; }
String trueFalse(bool value) { return value ? "true" : "false"; }

void printHexBytesToStream(Stream* serial, uint8_t* bytes, size_t lenBytes) {
  for (size_t i = 0; i < lenBytes; ++i) {
    if (i != 0) {
      serial->print(" ");
    }
    serial->print(padStart(String(bytes[i], HEX), 2, '0'));
  }
}

void printlnHexBytesToStream(Stream* serial, uint8_t* bytes, size_t lenBytes) {
  printHexBytesToStream(serial, bytes, lenBytes);
  serial->println();
}

String getBySplit(const String str, String wordSplit, uint16_t index) {
  uint16_t indexPrevStart = 0;
  for (uint16_t i = 0; i < index + 1; ++i) {
    auto wordSplitIndex = str.indexOf(wordSplit, indexPrevStart);
    if (i == index) {
      return str.substring(indexPrevStart,
                           wordSplitIndex < 0 ? str.length() : wordSplitIndex);
    }
    if (wordSplitIndex < 0) {
      return "";
    }
    indexPrevStart = wordSplitIndex + wordSplit.length();
  }
  return "";
}
}  // namespace string_asukiaaa
