// 1 t0 n using goto
#include<stdio.h>
void main(){
	int i=1,n;
	printf("Enter a Number:");
	scanf("%d",&n);
	up: printf("%d\n",i);
	i+=1;
	if(i<=n)
		goto up;
}
