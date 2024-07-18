#include<stdio.h>
void main(){
	int n;
	printf("Enter array size:");
	scanf("%d",&n);
	int a[n],i,j,temp;
	printf("Enter Array Elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("\nArray Elements before Sorting:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	for(i=1;i<n;i++){
		for(j=0;j<n-i;j++){
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp; 
			}
		}
	}
	
	printf("\nArray Elements after Sorting:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
}
