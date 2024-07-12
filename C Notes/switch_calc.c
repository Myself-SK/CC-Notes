// Enter 2 numbers 10 20
// Select Operation:
// 1. Add
// 2. Sub
// 3. Mul
// 4. Div
// 5. Mod
// Enter your choice: 2
// The sum of 10 and 20 = 30
#include<stdio.h>
void main(){
	int a,b,choice,res;
	printf("Enter 2 Numbers:");
	scanf("%d%d",&a,&b);
	printf("Select Operation:\n1.Add\n2.Sub\n3.Mul\n4.Div\n5.Rem\nEnter your Choice:");
	scanf("%d",&choice);
	switch(choice){
		case 1: res=a+b;
				printf("The sum of %d and %d = %d",a,b,res);
				break;
		case 2: res=a-b;
				printf("The diff of %d and %d = %d",a,b,res);
				break;
		case 3: res=a*b;
				printf("The Prod of %d and %d = %d",a,b,res);
				break;
		case 4: res=a/b;
				printf("The quotient of %d and %d = %d",a,b,res);
				break;
		case 5: res=a%b;
				printf("The remainder of %d and %d = %d",a,b,res);
				break;
		default:printf("Invalid Operation");
						
	}
}
