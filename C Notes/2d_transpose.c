#include<stdio.h>
void main(){
	int r,c;
	printf("Enter your Matrix Dimension");
	scanf("%d%d",&r,&c);
	int a[r][c],i,j;
	printf("Enter Matrix Elements:\n");
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			scanf("%d",&a[i][j]);
	printf("Entered Matrix Elements are:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("Transposed Matrix Elements are:\n");
	for(i=0;i<c;i++){
		for(j=0;j<r;j++){
			printf("%d ",a[j][i]);
		}
		printf("\n");
	}
}
