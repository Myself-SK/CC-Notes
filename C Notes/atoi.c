#include<stdio.h>
#include<string.h>
void main(){
	char a[] = "1000$23123";
	char b[] = "20";
	int num1 = atoi(a);
	int num2 = atoi(b);
	printf("%d",num1+num2);
}
