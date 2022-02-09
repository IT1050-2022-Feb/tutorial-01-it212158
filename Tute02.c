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

#include <stdio.h>//standard input output header

int main() {
  	floot distance,amont =0;//input values
	
	printf("enter the distance van travelled :");//display enter the distance
	scanf("%f",&distance);//input the distance to kryboard
	
	if(distance > 30)//check the distance
		
	{
		amount = 30*50+ (distance - 30)* 40;//calculate the amount
		
	}
	else
	{
		amoumt = distance * 50;//calculate the amount
		
	}
	 
	 printf("account is paid id %.2f",amount);//display amount
	  
	  
  
  return 0;
}//end
