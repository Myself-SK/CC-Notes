#include<stdio.h>
void main(){
	int n;
	printf("Enter array size:");
	scanf("%d",&n);
	int a[n],i,j,temp,k;
	printf("Enter Array Elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("\nArray Elements before Sorting:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	printf("\n");
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		for(k=0;k<n;k++)
			printf("%d\t",a[k]);	
		printf("\n");
	}
	printf("\nArray Elements after Sorting:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
}
