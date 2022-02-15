/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
int minimum(int n1, int n2);// function prototype
int maximum(int n1, int n2);// function prototype
int multiply(int n1, int n2); // function prototype 
int main() {
   
   int no1, no2;
   printf("Enter a value for no 1 : ");// get value
   scanf("%d", &no1);// read value
   printf("Enter a value for no 2 : ");// get value
   scanf("%d", &no2);// read value
   printf("min     = %d\n", minimum(no1, no2));// print minimum
   printf("max     = %d\n", maximum(no1, no2));// print maximum
   printf("multiply= %d\n", multiply(no1, no2));// print multiply
   return 0;
}
//called funtion
int minimum(int n1, int n2){
if(n1<n2)
   return n1;// return value
else
   return n2;// return value
}
//called funtion
int maximum(int n1, int n2){
if(n1<n2)
   return n2;// return value
else
   return n1;// return value
}
//called funtion
int multiply(int n1, int n2){
int mult;
mult = n1 * n2;// calculate multiply
   return mult;// return value
}
