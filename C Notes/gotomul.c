#include<stdio.h>
void main(){
	int i,n;
	printf("enter a number");
	scanf("%d",&n);
	i=1;
	poi: printf("%d * %d = %d \n",n,i,n*i);
	i++;
	if (i<=10)
	goto poi;
	
}
