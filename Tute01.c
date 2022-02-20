/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int a, b, tot;
  float avg;

  printf("Input marks of subject 1 : ");
  scanf("%d", &a);

  printf("Input marks of subject 2 : ");
  scanf("%d", &b);

  tot = a + b;
  avg = tot / 2.0;

  printf("Average is %.2f", avg);
  
  return 0;
}

