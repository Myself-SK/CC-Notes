#include<stdio.h>
void main(){
	int r,c;
	printf("Enter your Matrix Dimension");
	scanf("%d%d",&r,&c);
	int a[r][c],b[r][c],i,j,sum[r][c];
	printf("Enter A Matrix Elements:\n");
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			scanf("%d",&a[i][j]);
	printf("Enter B Matrix Elements:\n");
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			scanf("%d",&b[i][j]);
	printf("Entered A Matrix Elements are:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("Entered B Matrix Elements are:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			sum[i][j] = a[i][j]+b[i][j];
		}
	}
	
	printf("Sum of 2 Matrix Elements are:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d ",sum[i][j]);
		}
		printf("\n");
	}
}
