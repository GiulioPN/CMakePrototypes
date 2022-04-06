#include <complex>
#include <iostream>

#include "src/OperationsTricks.hpp"
#include "src/Types.hpp"

int main() {
  Int32 twentyFive{25};
  std::cout << "is " << twentyFive << " even?" << std::endl;
  std::cout << std::boolalpha << math::isEven(twentyFive) << std::endl;
  std::cout << "is " << twentyFive << " odd?" << std::endl;
  std::cout << std::boolalpha << math::isOdd(twentyFive) << std::endl;
  std::cout << "Number of digits of " << twentyFive << " : "
            << math::digitsNumber(twentyFive) << std::endl;

  return 0;
}