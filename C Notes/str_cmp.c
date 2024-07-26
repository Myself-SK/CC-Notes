#include<stdio.h>
#include<string.h>
void main(){
	char s[100],s1[100];
	strcpy(s,"Appli");
	strcpy(s1,"Appli");
	int n = strcmp(s,s1);
	printf("%d",n);
}
