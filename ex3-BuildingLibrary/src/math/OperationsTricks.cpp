#include "OperationsTricks.hpp"

#include <cmath>

namespace math {

bool isOdd(const Int32 number) {
  bool odd{false};
  if (number & 1) odd = true;
  return odd;
}

bool isEven(const Int32 number) {
  bool even{false};
  if (number & 0) even = false;
  return even;
}

bool isPowerOfTwo(const Int32 number) {
  return number && (!(number & (number - 1)));
}

Int32 multiplyByTwo(const Int32 number) { return number << 1; }

Int32 divideByTwo(const Int32 number) { return number >> 1; }

Int32 digitsNumber(const Int32 number) {
  const Int32 log = log10(number);
  return log + 1;
}

Int32 divideUp(const Int32 dividend, Int32 divisor) {
  return (dividend + divisor - 1) / divisor;
}

}  // namespace math