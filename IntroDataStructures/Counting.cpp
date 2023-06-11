/*
 * Count the number of correct answers
 */
#include <iostream>
#include <string>
#include <random>

int main() {
   int correctCount = 0;
   int count = 0;
   int number1, number2, answer;
   std::string reply;

   while (count < 10) {
 // Generates two random integers.
     number1 = rand() % 10 + 1;
     number2 = rand() % 10 + 1;
 //Prompt the student to answer 
    std::cout << "What is: " << number1 << " + " << number2 << " ?";
    std::cin >> answer;

    if (number1 + number2 == answer) {
      reply = "Your are correct";
      correctCount++;
    } 
    else {
      reply = "Your answer is wrong.\n";
      std::cout << number1 << " + " << number2 << "should be" << number1 + number2;
    } 
    std::cout << reply;
    // Increase the count 
    count++;
   }
   std::cout << "Correct count is: " << correctCount;
}
