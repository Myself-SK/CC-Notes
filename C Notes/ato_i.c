#include<stdio.h>
#include<string.h>
void main(){
	char s[100],s1[100];
	strcpy(s,"1001234");
	strcpy(s1,"20");
	int a=atoi(s);
	int b=atoi(s1);
	char res[100];
	sprintf(res,"The sum of %d and %d = %d",a,b,a+b);
	puts(res);
}
