/*
 * Comparing 3 string using the size() method
 */
#include <iostream>
#include <string>

int main() {
  std::string s1, s2, s3, temp;
  std::cout <<"Enter the first city: ";
  std::cin >> s1;
  std::cout << "Enter the second city: ";
  std::cin >> s2;
  std::cout << "Enter the third city: ";
  std::cin >> s3;

  if (s1.compare(s2) > 0) {
    // Swap s1 with s1
     temp = s1;
       s1 = s2;
       s2 = temp;
  }

  if (s2.compare(s3) > 0) {
    // Swap s2 with s3:
     temp = s2;
       s2 = s3;
       s3 = temp;
  }

  if (s1.compare(s2) > 0) {
    // Swap s1 with s3
      temp = s1;
        s1 = s2;
	s2 = temp;
  }

  std::cout << "The three cities in alphabetical order are: "
	    << s1 << " " << s2 << " " << s3;

  return 0;
}

