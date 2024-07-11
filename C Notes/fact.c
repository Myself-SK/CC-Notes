// factorial number
#include<stdio.h>
void main(){
	int i,fact=1,n;
	printf("Enter a Number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		fact=fact*i; // fact*=i 
	printf("%d",fact);
}
