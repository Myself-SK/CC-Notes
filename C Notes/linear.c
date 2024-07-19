#include<stdio.h>
void main(){
	int n;
	printf("Enter Array size:");
	scanf("%d",&n);
	int a[n],i,key;
	printf("Enter Array Elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter Element you want to Search:");
	scanf("%d",&key);
	for(i=0;i<n;i++){
		if(a[i]==key){
			printf("Element is found");
			return;
		}
	}
	printf("Element is not Found");
}
