/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {
  	int km_rate;// declare variable
	float rate;// declare variable
	printf("enter KM =");// get value
	scanf("%d",&km_rate);// read value
	if(km_rate <= 30)
		rate = km_rate * 50;// calculate the rate
	else 
		rate = 30 * km_rate + (km_rate - 30) * 40  ;// calculate  the rate
  
	printf("Amount to be paid for a rented vehical= %.2f",rate);// print rate
return 0;
}// end the main funtion
