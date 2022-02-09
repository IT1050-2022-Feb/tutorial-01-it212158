/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>//standared input output header

int main() {
   int no1, no2;//input numbers
   printf("Enter a value for no 1 : ");//display enter a value
   scanf("%d", &no1);//input no1 to keyboard
   printf("Enter a value for no 2 : ");//display enter a value
   scanf("%d", &no2);// input no2 to keyboard
   printf("%d ", minimum(no1, no2));//display enter minimum value
   printf("%d ", maximum(no1, no2));//display enter maximum value
   printf("%d ", multiply(no1, no2));
   int minimum(n1,n2)
{
	if(n1 < n2)//select minimum number
	{
		return n1;
	}
	else
	{
	return n2;
	}
	
} 
int maximum(n1,n2)
{

if(n1 > n2)//select maximum number
	{
		return n1;
	}
	else
	{
	return n2;
	}
}
int multiply(n1,n2)	
{
	int mul = 0;
	mul = n1*n2;
	return mul;
	
}
	
  

   return 0;
}//end
