/*Write a main program that gets 4 pairs of numbers and displays their lcm and gcd.*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
	int a, b, number1, number2,i,test, gcd, lcm;

for (i = 1; i <= 4; i++){

  printf("Enter %d. pair: \n", i);
  scanf("%d%d", &number1, &number2);

  a = number1;
  b = number2;

  while (b != 0) {
    test = b;
    b = a % b;
    a = test;
  }
  gcd = a;
  lcm = (number1*number2)/gcd;/*for taking lcm */

  printf("GCD is : %d\n", gcd);
  printf("LCM is : %d\n", lcm);
}
  return 0;
}
