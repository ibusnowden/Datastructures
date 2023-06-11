// Check if a number is divisible by two integer

#include <iostream>

int main() {
  int number;

  std::cout << "Enter a number: " ;
  std::cin >> number;

  // Check if the number is divisible by both integer
  if ((number % 5 == 0) && (number % 6 == 0))
	  std::cout << "The number is divisible by 5, and 6";
  // Check if the number is divisible by 5 or 6
  else if ((number % 5 == 0) || (number % 6 == 0))
	  std::cout << "The number is divisible by 5, or 6";
  // Check if the number is not divisible by 5 nor 6
  else
	  std::cout << "The number is nor divisible by 5, nor 6";

  return 0;
}
