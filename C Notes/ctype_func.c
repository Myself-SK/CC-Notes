#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main(){
	char s[100],s1[100];
	strcpy(s,"Hello Hi$");
	strcpy(s1,"20");
//	printf("%d",isdigit(s1[0]));
//	printf("%d",isspace(s[5]));
//	printf("%d",isalpha(s[0]));
//	printf("%d",isupper(s[0]));
//	printf("%d",islower(s[1]));
//	printf("%d",ispunct(s[0]));
//	s[0] = tolower(s[0]);
	s[1] = toupper(s[1]);
	puts(s);
}
