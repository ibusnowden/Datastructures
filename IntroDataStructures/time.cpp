/*
 * int number = 456;
 * int* pointer = &number;
 */
#include <iostream>
#include <ctime>
#include <string>

int main() {
  time_t rawtime;
  struct tm* timeinfo;

  time(&rawtime);
  timeinfo = localtime (&rawtime);
  printf("Current local time and date: %s", asctime(timeinfo));
}


