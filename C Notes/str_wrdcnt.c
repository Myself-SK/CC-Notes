#include<stdio.h>
#include<string.h>
void main(){
	char s[100];
	int i,cnt=1;
	printf("Enter a String:");
	gets(s);
	for(i=0;i<strlen(s);i++){
		if(s[i]==' '&&s[i+1]!=' ')
			cnt+=1;
	}	
	printf("Total Word Count = %d",cnt);
}
