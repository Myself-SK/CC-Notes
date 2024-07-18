#include<stdio.h>
void main(){
	int n;
	printf("Enter array size:");
	scanf("%d",&n);
	int a[n],i,sum=0;
	
	printf("Enter Array elements:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Entered Array elements:");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	for(i=0;i<n;i++)
		sum+=a[i];
	printf("The sum of Array elements are:%d",sum);
			
}
