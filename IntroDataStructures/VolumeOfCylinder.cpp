// Calculates the volume of a cylinder
#include <iostream>
using namespace std;

int main() {
   double  radius,
           length;
   cout << "Enter the radius and length of a cylinder: " << '\n';
   cin >> radius >> length;

   double area = radius * radius * 3.14159;
   double volume = area * length;

   cout << "The area is " << area << '\n';
   cout << "The volume is " << volume;

   return 0;
}
