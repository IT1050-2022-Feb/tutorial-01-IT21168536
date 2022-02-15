/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
    int n, sum = 0;// declare variable
    printf("Enter the number : ");//  get value
    scanf("%d",&n);// read value
    for(int i = 0; i <= n; i++)
    {
        sum = i + sum  ;// calculate
    }
    printf("The sum of the numbers = %d",sum);// print sum
  return 0;
}// end the main funtion


