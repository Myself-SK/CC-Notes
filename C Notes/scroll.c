#include<stdio.h>
#include<string.h>
void main(){
	char s[100],s1[100];
	printf("Enter a Message:\n");
	gets(s);
	while(!kbhit()){
		system("cls");
		sprintf(s,"%s%c",&s[1],s[0]);
		puts(s);
		Sleep(400);
	}
}
