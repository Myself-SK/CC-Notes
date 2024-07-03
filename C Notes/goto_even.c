// even numbers from n - 1 using goto
#include<stdio.h>
void main(){
	int n;
	printf("Enter the Range:");
	scanf("%d",&n);
	even: if(n%2==0)
			printf("%d\t",n);
		n--;			// n = n-1;
		if(n>=1)
			goto even;	
}
