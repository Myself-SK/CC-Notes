// Sum of Individual Numbers
#include<stdio.h>
void main(){
	int n,sum=0;
	printf("Enter a Number:");
	scanf("%d",&n);
	while(n>0){
		sum = sum+n%10;
		n=n/10;
	}
	printf("%d",sum);
}
