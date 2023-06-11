/*
 * * Determines the week-day of each every first day of the year.
 */
#include <iostream>

int main() {
   int year,
       firstDay;
   int  numberOfDaysInMonth = 0;
   std::cout << "Enter a year: ";
   std::cin >> year;

   std::cout << "Enter the first day of the year: ";
   std::cin >> firstDay;

   // Display calendar for each
   for (int month = 1; month <= 12; month++) {
      switch(month) {
        case 1: std::cout << "January1, " << year << " is ";
	        numberOfDaysInMonth = 31;
	       break;
	case 2: std::cout << "\nFebruary 1, " << year << " is ";
	       if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
		   numberOfDaysInMonth = 29;
	       else
		   numberOfDaysInMonth = 28;
	       break;
        case 3: std::cout << "\nMarch1, " << year << " is ";
	       numberOfDaysInMonth = 31;
	       break;
	case 4: std::cout << "\nApril1, " << year << " is ";
	       numberOfDaysInMonth = 30;
	       break;
        case 5: std::cout << "\nMay1, " << year << " is ";
	       numberOfDaysInMonth = 31;
	       break;
	case 6: std::cout << "\nJun1, " << year << " is ";
	       numberOfDaysInMonth = 30;
	       break;
	case 7: std::cout << "\nJuly1, " << year << " is ";
	       numberOfDaysInMonth = 31;
	       break;
	case 8: std::cout << "\nAugust1, " << year << " is ";
	       numberOfDaysInMonth = 31;
	       break;
	case 9: std::cout << "\nSeptember1," << year << " is ";
	       numberOfDaysInMonth = 30;
	       break;
	case 10: std::cout<< "\nOctober1, " << year << " is ";
		numberOfDaysInMonth = 31;
		break;
        case 11: std::cout << "\nNovember1, " << year << " is ";
		numberOfDaysInMonth = 30;
		break;
        case 12: std::cout << "\nDecember1, " << year << " is ";
		numberOfDaysInMonth = 31;
		break;
      }
      
      switch (firstDay) {
	      case 0: std::cout << "Sunday"; break;
	      case 1: std::cout << "Monday"; break;
	      case 2: std::cout << "Tuesday"; break;
	      case 3: std::cout << "Wednesday"; break;
	      case 4: std::cout << "Thursday"; break;
	      case 5: std::cout << "Friday"; break;
	      case 6: std::cout << "Saturday"; break;
      }
      // Get the start day for the next month
        firstDay = (firstDay + numberOfDaysInMonth) %  7;
   }

     return 0;
}








