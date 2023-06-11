// Find a palindrome by using modulo(the remainder)
#include <iostream>

int main() {
  int number;
  
  std::cout << "Enter a Three-digit number: ";
  std::cin >> number;

  // Check if the number is a palindrome
  if (number / 100 == number % 10)
     std::cout << number << " is a palindrome";
  else
     std::cout << number << " is not a palindrome";

  return 0;  
}
