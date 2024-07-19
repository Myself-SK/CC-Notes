#include<stdio.h>
#include<string.h>
void main(){
	int i;
	char s[10] = "Hi";
	for(i=0;s[i]!='\0';i++)
	printf("%d = %c\n",i , s[i]);
}
