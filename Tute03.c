/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>//standared input output header
int main() {
  	int i,n,sum=0;//input values
	printf("enter a number :");//diplay enter a number
	scanf("%d",&n);//input number to keyboard
	
	for(i=1; i<=n; i++)// for loop
	{
		sum= sum+i;//calculate sum
		
	}
	printf("sum of the first %d numbers = %d",n,sum);//diaplay sum
	
  
  return 0;
}//end

