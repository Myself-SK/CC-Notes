#include<stdio.h>
void main(){
	int i,n;
	printf("enter a number");
	scanf("%d",&n);
	i=1;
	do{
		printf("%d*%d=%d\n",i,n,i*n);
		i++;
	
	}while(i<=10);
}
