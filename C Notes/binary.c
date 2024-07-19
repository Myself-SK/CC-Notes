#include<stdio.h>
void main(){
	int n;
	printf("Enter Array size:");
	scanf("%d",&n);
	int a[n],i,key,j,temp,start,end,mid;
	printf("Enter Array Elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("Sorted Array Elements:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	printf("Enter Element you want to Search:");
	scanf("%d",&key);
	start = 0;
	end = n-1;
	while(start<=end){
		mid = (start+end)/2;
		if(a[mid] == key){
			printf("Element is Found");
			return;
		}
		if(a[mid]>key)
			end = mid-1;
		else
			start = mid+1;
	}
	printf("Element is not Found");
}
