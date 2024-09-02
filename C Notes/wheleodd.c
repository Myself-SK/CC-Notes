#include<stdio.h>
void main(){
	int i,n;
	printf("enter a number");
	scanf("%d",&n);
	i=10;
	while (i>=1){
		printf("%d*%d=%d\n",n,i,n*i);
		i--;
	}
}

