#include<stdio.h>
void main(){
	int i,n;
	printf("enter a number");
	scanf("%d",&n);
	i=1;
	kai: if (i%3==0 || i%5==0)
			printf("");
		else
			printf("%d ",i);
		i++;
	if (i<=n)
goto kai;
}


