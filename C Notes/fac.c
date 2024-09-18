#include<stdio.h>
void main(){
	int n,f=1,i;
	printf("Enter a Number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		f*=i;
	printf("Factorial of %d = %d",n,f);
}
