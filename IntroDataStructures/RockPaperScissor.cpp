/*
 ** Writes a program that generates:
 ** a scissor(0), rock(1), and paper(2)
 */
#include <iostream>
#include <random>
using namespace std;

 int main() {
    int count = 0;
    int userNumber;

    while (count <= 2 && count >= -2) {
       // Generates scissor, rock , and paper
       int computerNumber = 1 + rand() % 3;
       // Prompt the user to enter a scissor, rock, or paper
       cout << "Scissor (0), rock (1), paper (2): ";
       cin >> userNumber;

       // Check the guess
       switch (computerNumber) {
          case 0:
	     if (userNumber == 0) {
                cout << "It is a draw\n";
	     }
	     else if (userNumber == 1) {
                cout << "You won\n";
		count++;
	     }
	     else if (userNumber == 2) {
                cout << "You lost\n";
		count--;
	     }
	     break;
	  case 1:
	     if (userNumber == 0) {
                cout << "You lost\n";
		count--;
	     }
	     else if (userNumber == 1) {
	        cout << "Its a draw\n";
	     }
	     else if (userNumber == 2) {
                cout << "You won\n";
		count++;
	     }
	     break;
	  case 2:
	     if (userNumber == 0) {
                cout << "You won\n";
		count++;
	     }
	     else if (userNumber == 1) {
                cout << "You won\n";
		count++;
	     }
	     else if (userNumber == 2) {
                cout << "Its a draw\n";
	     }
	     break;
          }
    }

    if (count > 2) {
       cout << "You won more than two times\n";
    }
    else {
       cout << "The computer won more than two times\n";
    }

    return 0;
 }





