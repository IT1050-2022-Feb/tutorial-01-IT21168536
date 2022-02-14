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
  	int km_rate;
	float rate;
	printf("enter KM =");
	scanf("%d",&km_rate);
	
	if(km_rate <= 30)
		rate = km_rate * 50;
	else 
		rate = 30 * km_rate + (km_rate - 30) * 40  ;
  
	printf("Amount to be paid for a rented vehical= %.2f",rate);
return 0;
}
