/*
# create an array of integers with a length of 10
# Display the the average which is the sum of it elements
# Divided by the length of the array
*/
#include <iostream>
using namespace std;

int main() {

#define LENGTH 10

int* firstList = new int[LENGTH];
int sum = 0;
int average;

// Prompt the user to enter 10 integers
cout << "Enter 10 integers:";
 for (int count = 0; count < LENGTH; count++) {
     cin >> firstList[count];
 }
  
  for (int count = 0; count < LENGTH; count++) {
    sum += firstList[count];
  }
  average = sum * 1.0 / LENGTH;
  cout << "The average is: " << average;

  return 0;
}