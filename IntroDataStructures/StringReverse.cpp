// Reverse a string
#include <iostream>
#include <string>
using namespace std;

void reverse(string s) {
     for (int i = s.length() - 1; i >= 0; i--)
	   cout << s[i];
}

int main(void) {
  string name;
  cout << "Enter a string: ";
  cin >> name;
  cout << "The reversed string: ";
  reverse(name);

  return 0;

}
