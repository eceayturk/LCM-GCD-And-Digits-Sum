/*Program checks if an integer is five-digit,
2. returns the sum of the digits of any given integer,
3. takes an integer as a parameter, returns the left most and right most digit of the number.*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void myDigit (int number, int *left, int *right){/*With this function we use pointers for take last and first digits*/
	
	*right = number % 10;/*For take first and last digit we use % and / operations*/
	int firstDigit;
	while( number != 0){
		*left = number % 10;
		number = number / 10;
	  }
	}

int mySum(int number){
   int sum = 0, remaining;
      while(number > 0){
      remaining = number % 10;
      sum = sum + remaining;
      number = number / 10;
    }
   return sum;
}
int main(){
	int number, firstDigit, lastDigit, find;
	int n,x;
	
	printf("Enter a digit number (to stop enter a five-digit number):");
	scanf("%d",&number);
	
	while(number>0)
        if(number >= 10000 && number <= 99999){/*If the number has 5 digits program will stop*/
        	return 0;
    }
	else{
		x = mySum(number);
		printf("Sum of digits = %d\n", x);
		
   myDigit(number, &firstDigit, & lastDigit);/*We take first and last digit with & symbol from the pointers*/
	
	printf("\nLeft most digit is :%d",firstDigit);
	printf("\nRight most digit is :%d", lastDigit);
	
	return 0;
	}
	

	return 0;
	
	
	
}
