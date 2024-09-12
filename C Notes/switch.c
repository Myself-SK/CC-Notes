#include<stdio.h>
void main(){
	int a,b,d;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	printf("select an operation\n 1) addition\n 2) subtraction\n 3)multiplicatin\n 4)divvision\n");
	scanf("%d",&d);
	switch(d){
		case 1:{
			printf("sum of %d and %d = %d",a,b,a+b);
			break;
		}
		case 2:printf("difference of %d and %d = %d",a,b,a-b);break;
		case 3:printf("multiplication of %d and %d = %d",a,b,a*b);break;
		case 4:printf("division of %d and %d = %d",a,b,a/b);break;
		default:printf("tappu");
		
	}
	

}
