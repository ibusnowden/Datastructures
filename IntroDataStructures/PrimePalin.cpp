#include <iostream>
using namespace std;

int main() {
   int count = 1;
   
   // Display each number in five position
   for (int m = 2; true; m++) {
      if (isPrime(m) && isPalindrome(m)) {
          cout << m << " ";
         // Set the precision
	  if (count % 10 == 0) {
             cout << "\n";
	  }
	  if (count == 10) {
             break;
	  }
         // Increase count
	  count++;
      } 
   }

   // Check if a number is a prime
     bool isPrime(int num) {
       for (int i = 2; i <= num / 2; i++) {
           if (num % 2 == 0)
             return false;
       }
      return true;
   }

    // Return the reversal of number
   int reversal(int number) {
      int result = 0;
  
      while (number != 0) {
        int lastDigit = number % 10;
       result = result * 10 + lastDigit;
       number = number / 10;
     }
     return number;
  }
 
  // Return true if a number is palindrome
   bool isPalindrome(int number) {
      return number == reversal(number);
    }

   return 0;
}
