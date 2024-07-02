// n to 1 using goto 
#include<stdio.h>
void main(){
	int i=1,n;
	printf("Enter a Number:");
	scanf("%d",&n);
	up: printf("%d\t",n);
	n-=1;
	if(n>=1)
		goto up;
}
