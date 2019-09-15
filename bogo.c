#include <stdio.h>

#include <stdlib.h>

#include <stdbool.h>

#include <time.h>
 // GLOBALS HERE
unsigned int attempt;

// GENERATE RANDOM LIST OF NUMBERS TO SORT
void generate_list(int * a, int n) {
  //printf("DEBUG: generate_list -> size=%d ", size);
  int i;
  for (i = 0; i < n; i++) {
    a[i] = rand() % 10;
  }
}

// PRINT CURRENT LIST OF INTEGERS
void printList(int * a, int n) {
  int i;
  for (i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
}

// DETERMINE IF INTEGERS ARE SORTED
bool is_sorted(int * a, int n) {
  //printf("DEBUG: is_sorted -> n=%d ", n);
  int i = n;
  while (--n >= 1) {
    if (a[n] < a[n - 1]) {
      //printf("DEBUG: if -> a[n]=$d < a[n-1]=%d", a[n], a[n-1]);
      ++attempt;
      printf("Attempt # %d: ", attempt);
      printList(a, i);
      return false;
    }
  }
  printf("CONGRATULATIONS YOU HAVE BOGO SORTED!!!");
  printf("FINAL SORTED VALUES ARE...\n");
  printList(a, i);
  return true;
}

// PREMIUM QUALITY BOGO HERE
void shuffle(int * a, int n) {
  //printf("DEBUG: shuffle -> n=%d ", n);
  int i, t, r;
  for (i = 0; i < n; i++) {
    t = a[i];
    r = rand() % n;
    a[i] = a[r];
    a[r] = t;
  }
}

// A CONVENIENTLY TIDY ABSTRATION
void bogo_sort(int * a, int n) {
  //printf("DEBUG: bogo_sort -> n=%d ", n);
  while (!is_sorted(a, n)) shuffle(a, n);
}

// THE MAIN SHOW
int main() {
  // SEED RAND HERE
  srand(time(0));
  attempt = 0;
  int i, size;

  //range;

  printf("Welcome to BOGOSORT in C! :) \n");
  printf("HOW MANY ITEMS DO YOU WANT TO SORT?\n");
  printf("ITEMS: ");
  scanf("%d", & size);

  // printf("What is the max integer size \n");
  // printf("MAX INT SIZE: ");
  // scanf("%d", &range);

  int numbers[size];
  generate_list(numbers, size);
  bogo_sort(numbers, size);
  printf("\n");
}
