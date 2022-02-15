/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   int sub1;// declare variable
   int sub2;// declare variable
   float avg;// declare variable
   
   printf("enter mark1 =");// gert value
   scanf("%d",&sub1);// read value
   printf("enter mark2 =");// gert value
   scanf("%d",&sub2);// read value
   avg = (sub1 + sub2) / 2.00;// calculate average
   printf("Average = %.2f ",avg);// print average
return 0;
}// end the main funtion

