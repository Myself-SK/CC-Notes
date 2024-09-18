#include<stdio.h>
void main(){
	char op;
	int a,b,c;
	printf("enter a operation");
	scanf("%d%c%d",&a,&op,&b);
	switch (op){
		case '+':printf("%d",a+b);break;
		case '-':printf("%d",a-b);break;
		case '*':printf("%d",a*b);break;
		case '/':printf("%f",(float)a/b);break;
		default: printf("invalid operator");
			}
	

}
