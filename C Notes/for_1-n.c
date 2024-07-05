#include<stdio.h>
void main(){
	int i,n;
	printf("Enter the range:\n");
	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//		printf("%d\t",i);

//	for(i=n;i>=1;i--)
//		printf("%d\t",i);	

//	for(i=1;i<=10;i++)
//		printf("%d * %d = %d\n",n,i,n*i);


	for(i=1;i<=n;i++)
		if(i%2==0)
			printf("%d\t",i);
	
}
