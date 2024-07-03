// odd numbers from 1-n using goto
#include<stdio.h>
void main(){
	int i=1,n;
	printf("Enter a Range:");
	scanf("%d",&n);
	odd:if(i%2!=0)
			printf("%d\t",i);
		i++;
		if(i<=n)
			goto odd;
}
