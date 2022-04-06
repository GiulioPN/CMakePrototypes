#ifndef _OPERATIONSTRICKS_
#define _OPERATIONSTRICKS_

#include "Types.hpp"

namespace math {

bool isOdd(const Int32 number);
bool isEven(const Int32 number);

bool isPowerOfTwo(const Int32 number);

Int32 multiplyByTwo(const Int32 number);
Int32 divideByTwo(const Int32 number);

Int32 digitsNumber(const Int32 number);
Int32 divideUp(const Int32 dividend, Int32 divisor);

}  // namespace math

#endif