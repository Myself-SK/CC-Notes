#include<stdio.h>
void main(){
	int num1,num2,sum,dif,prod,quo; // Var declaration
	printf("Enter 2 numbers\n");
	scanf("%d",&num1);
	scanf("%d",&num2);
	sum = num1 + num2;
	dif = num1 - num2;
	prod = num1 * num2;
	quo = num1 / num2;
	printf("Total sum of %d and %d = %d\n",num1,num2,sum);
	printf("Total diff of %d and %d = %d\n",num1,num2,dif);
	printf("Total prod of %d and %d = %d\n",num1,num2,prod);
	printf("Total quotient of %d and %d = %d\n",num1,num2,quo);
//	The sum of num1 and num2 = res
//  The sum of 10 and 20 = 30
}
