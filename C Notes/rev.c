// Reverse of Number
#include<stdio.h>
void main(){
	int n,rev=0;
	printf("Enter a Number:");
	scanf("%d",&n);
	while(n>0){
		rev = rev*10+n%10;
		n=n/10;
	}
	printf("%d",rev);
}
