/*
 ** Prompt the user to enter a guessing.
 */
#include <iostream>
#include <stdlib.h>

int main() {
   int first = rand() % 10;
   int second = rand() % 10;
   int guess;

   while (first == second) {
      second = rand() % 10;
   }

   std::cout << "Enter your two digits lottery pick: ";
   std::cin >> guess;

   if ((guess / 10 == first) && (guess % 10 == second)) {
    std::cout << "Exact match: you win $10,000";
   }
   else if ((guess % 10 == first) && (guess / 10 == second)) {
     std::cout << "Match all digits: you win $3000";
   }
   else if ((guess % 10 == first) || (guess % 10 == second) 
	   || (guess / 10 == first) || (guess / 10 == second)) {
      std::cout << "Match one digit: you win $1,000";
   }
   else {
      std::cout << "Sorry, no match";
   }

      std::cout << "\nLottery is " << first << second;

  return 0; 
}
