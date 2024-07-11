// check prime or not
#include<stdio.h>
void main(){
	int n,i,isPrime=1;
	printf("Enter a Number:");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0){
			isPrime=0;
			break;
		}
	}
	if(isPrime==1&&n!=1)
		printf("Prime Number");
	else
		printf("It is not a Prime Number");
}
