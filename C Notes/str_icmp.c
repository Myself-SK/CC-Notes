#include<stdio.h>
#include<string.h>
void main(){
	char s[100],s1[100];
	strcpy(s,"Apple");
	strcpy(s1,"apple");
	int n = stricmp(s,s1);
	printf("%d",n);
}
