/*
 * A number is prime if the it is
 * greater than 1 and divisible by itself
 */

#include <iostream>

int main() {
  int count,        // Count the number of primes numbers.
      number;        // A number to be tested for primeness
 bool isPrime;      // If the current number is prime?
 
  std::cout << "The prime numbers from 2 to 1000 are \n";

  // Test if a number is prime
  while (number <= 1000) {
     isPrime = true;     // Assume prime is true

     for (int divisor = 2; divisor <= number / 2; divisor++) {
        if (number % divisor == 0) {    // Set prime to false if the number is prime
            isPrime = false;
	    break;
	}
     }

     // Print prime numbers and increase the count 
     if (isPrime) {
        if (count % 8 == 0) {
           std::cout << number ; // Print numbers and advance to the new lines
	}
	else {
           std::cout << number << " ";
	}
        count++;
     }
      number++;
  }

}
