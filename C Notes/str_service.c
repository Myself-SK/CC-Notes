#include<stdio.h>
#include<string.h>
void main(){
	char s[100];
	int i,cnt=0;
	printf("Enter  your Phone Number:");
	gets(s);
	if(strlen(s)!=10)
		printf("Invalid Number");
	else{
		if(strncmp(s,"8050",4)==0)
			printf("Airtel");
		else if(strncmp(s,"6362",4)==0)
			printf("Jio");
		else if(strncmp(s,"8123",4)==0)
			printf("VI");
		else if(strncmp(s,"9204",4)==0)
			printf("BSNL");
		else
			printf("Invalid Provider"); 
	}
}
