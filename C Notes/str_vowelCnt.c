#include<stdio.h>
#include<string.h>
void main(){
	char s[100];
	int i,cnt=0;
	printf("Enter a String:");
	gets(s);
	strlwr(s);
	for(i=0;i<strlen(s);i++){
		if(s[i]=='a' ||s[i]=='o' ||s[i]=='i' ||s[i]=='e' ||s[i]=='u')
			cnt+=1;
	}	
	printf("Total Vowel Count = %d",cnt);
}
