#include<stdio.h>
void main (){
	int i,n;
	printf("enter a number");
	scanf("%d",&n);
	i=n;
	do{
		printf("%d\n",i);
		i--;
	}while (i>=1);
}
