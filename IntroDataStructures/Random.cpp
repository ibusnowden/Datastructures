// Sum two generated random number
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
  int number1 = rand() % 100;
  int number2 = rand() % 100;
  int answer;
  srand(time(NULL));

  std::cout << "What is " << number1 << " + " << number2 << " ?";
  std::cin >> answer;

  if (number1 + number2 == answer)
	  std::cout << "You Correct " << '\n';
  else
	  std::cout << "You Wrong! " << number1 <<  " + " << number2 << 
		       " should be " << number1 + number2;

  return 0; 
}
