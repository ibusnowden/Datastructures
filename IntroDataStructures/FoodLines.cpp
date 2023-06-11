/*
 * Determines the number of people in each lines
 */

#include <iostream>

// Index of the shortest lines
int shortestLinesIndex(int lines[], int n) {
   int j;
   int shortest;
   for (j = 1 ; j < n; j++) {
     if (lines[j] < lines[shortest]) 
	   shortest = j;
   }
    return shortest;
}

// Add shortest line by one new joined people
void solve(int lines[], int n, int m) {
  int i, shortest;
  for (i = 0; i < m; i++) {
     shortest = shortestLinesIndex(lines, n);
     printf("%d\n", lines[shortest]);
     lines[shortest]++;
  }
}

// Solves the problem

#define MAX_LINES 100

int main() {
  int lines[MAX_LINES];
  int n, m, i;
  scanf("%d%d", &n, &m);
  for (i = 0; i < n; i++) {
    scanf("%d", &lines[i]);
    solve(lines, n, m);
  }
  return 0;
}
