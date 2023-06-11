/*
 * Find the greatest common divisor of two number
 */
#include <iostream>

int main() {
  int number1,
      number2,
      divisor;
  std::cout << "Enter the first number: ";
  std::cin >> number1;

  std::cout << "Enter the second number: ";
  std::cin >> number2;

  divisor = (number1 < number2) ? number1 : number2;
  for (; divisor >= 1; divisor--) {
     if ((number1 % divisor == 0) && (number2 % divisor == 0)) {
           break;
     }
  }

  std::cout << "GCD of " << number1 << " and " << number2 << " is " << divisor;

  return 0;
}
