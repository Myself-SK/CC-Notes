#include<stdio.h>
#include<string.h>
void main(){
	char s[100];
	int i,cnt=0;
	printf("Enter your String:");
	gets(s);
	for(i=0;i<strlen(s);i++){
		s[i]++;
	}
	puts(s);
	
	for(i=0;i<strlen(s);i++){
		s[i]--;
	}
	puts(s);
}
