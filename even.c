#include<stdio.h>
void main(){
	int n;
	scanf("%d",&n);
	int i,a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Input Completed\n");
	for(i=0;i<n;i++)
		if(a[i]%2==0)
			printf("%d\t",a[i]);
}
