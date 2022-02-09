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
  	floot distance,amont =0;
	
	printf("enter the distance van travelled :");
	scanf("%f",&distance);
	
	if(distance > 30)
	{
		amount = 30*50+ (distance - 30)* 40;
		
	}
	else
	{
		amoumt = distance * 50;
		
	}
	 
	 printf("account is paid id %.2f",amount);
	  
	  
  
  return 0;
}
