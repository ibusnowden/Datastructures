/*
 * Writes a program that finds the numbers of
 * of dollars, quarters, dimes, nickels, and pennies
 * in a dollars amount
 * for exmple: 1156$ for 11$ and 56cents 
 */
#include <iostream>

int main() {
  int amount,
      remainingAmount,
      numberOfDollars,
      numberOfQuarters,
      numberOfDimes,
      numberOfNickels,
      numberOfPennies;

  std::cout << "Enter the amount: ";
  std::cin >> amount;

  remainingAmount = amount;

  // Find the number of one dollars
  numberOfDollars = remainingAmount / 100;
  remainingAmount = remainingAmount % 100;

  // Find the number of quarters in the remaining amount
  numberOfQuarters = remainingAmount / 25;
  remainingAmount = remainingAmount % 25;

  // Find the number of dimes in the remaining amount
  numberOfDimes = remainingAmount / 10;
  remainingAmount = remainingAmount % 10;

  // Find the number of nickels
  numberOfNickels = remainingAmount / 5;
  remainingAmount = remainingAmount % 5;

  // Find the number of pennies
  numberOfPennies = remainingAmount;

  std::cout << "Your amount " << amount << " consist of " << '\n';
  std::cout << numberOfDollars << " dollars\n";
  std::cout << numberOfQuarters << " quarters\n";
  std::cout << numberOfDimes << " dimes\n";
  std::cout << numberOfNickels << " nickels\n";
  std::cout << numberOfPennies << " pennies\n";

  return 0;
  
}
