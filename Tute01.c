/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   int sub1;
   int sub2;
   float avg;
   printf("enter mark1 =");
   scanf("%d",&sub1);
   printf("enter mark2 =");
   scanf("%d",&sub2);
   avg = (sub1 + sub2) / 2.00;
   printf("Average = %.2f ",avg);
  
return 0;
}

