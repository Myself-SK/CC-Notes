// multiple of n using goto
// 5 * 1 = 5
#include<stdio.h>
void main(){
	int i=1,n;
	printf("Enter a Number:");
	scanf("%d",&n);
	up: printf("%d * %d = %d\n",n,i,n*i);
	i+=1;
	if(i<=10)
		goto up;
}
