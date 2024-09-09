#include<stdio.h>
void main(){
	int i,n;
	printf("enter a number");
	scanf("%d",&n);
	i=1;
	do{
		if(i%2==1)
		printf("%d\n",i);
		i++;
	}while(i<=n);
}
