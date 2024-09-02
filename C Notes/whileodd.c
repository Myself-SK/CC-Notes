#include<stdio.h>
void main(){
	int i,n;
	printf("enter a number");
	scanf("%d",&n);
	i=1;
	while (i<=n){
	
		if (i%2==1) 
		printf("%d  ",i);
		i++;
	}
}
