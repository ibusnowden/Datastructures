#include <iostream>
using namespace std;

int main() {
    double *scores = new double[5];
    double sum = 0;
    int    count = 0;
    double item;
    double average;

    do {
        cout << "Enter a new score: ";
        cin >> item;

        if (item >= 0) {
            scores[count] = item;
            sum += item;
            count++;
        }
    } while (item >= 0);

    cout << "count is " << count << "\n";
    average = sum / count;

    int numOfAbove = 0;
    int numOfBelow = 0;
    for (int i = 0; i < count; i++) {
        if (scores[i] >= average) {
            numOfAbove++;
        } else {
            numOfBelow++; 
        }
    }    

    cout << "Average is: " << average << "\n";
    cout << "Number of score above or equal to the average is: "
         << numOfAbove << "\n";
    cout << "Number of score below the average is : "
         << numOfAbove;

   return 0;
}