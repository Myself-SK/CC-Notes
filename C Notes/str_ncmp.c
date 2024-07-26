#include<stdio.h>
#include<string.h>
void main(){
	char s[100],s1[100];
	strcpy(s,"Application");
	strcpy(s1,"App");
	int n = strncmp(s,s1,3);
	printf("%d",n);
}
