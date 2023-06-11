// Display 10 number in reverse order
#include <iostream>
using namespace std;

int main() {
    int *numbers = new int[10];

    cout << "Read a number: ";
    for (int count = 0; count < 10; count++) {
        cin >> numbers[count];
    }
    // Display the array reversely
    cout << "The reversal of the input is: ";
    for (int i = 9; i >= 0; i--) {
        cout << numbers[i] << " ";
        //delete[] numbers;
    }
    return 0;
}