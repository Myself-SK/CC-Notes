#include<stdio.h>
void main(){
	char s[100];
	gets(s);
	while(!kbhit()){
		system("cls");
		sprintf(s,"%s%c",&s[1],s[0]);
		puts(s);
		Sleep(400);
	}
}
