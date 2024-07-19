#include<stdio.h>
#include<string.h>
void main(){
	int i;
	char s[100];
	gets(s);
	
	for(i=0;i<strlen(s);i++)
		printf("%c",s[i]);
	
	printf("\n%d",strlen(s));
	
}
