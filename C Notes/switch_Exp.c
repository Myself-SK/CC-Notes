// Enter an Expression: 10+20
// 30
#include<stdio.h>
void main(){
	int a,b;
	char c;
	printf("Enter an Operation:");
	scanf("%d%c%d",&a,&c,&b);
	switch(c){
		case '+': printf("%d",a+b);
				break;
		case '-':  printf("%d",a-b);
				break;
		case '*':  printf("%d",a*b);
				break;
		case '/':  printf("%d",a/b);
				break;
		case '%': printf("%d",a%b);
				break;
		default:printf("Invalid Operation");
						
	}
}
