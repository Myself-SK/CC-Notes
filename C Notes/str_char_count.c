#include<stdio.h>
#include<string.h>
void main(){
	char s[100];
	int i,char_cnt,upper_cnt,lower_cnt,digit_cnt,space_cnt,spec_cnt;
	char_cnt=upper_cnt=lower_cnt=digit_cnt=space_cnt=spec_cnt=0;
	printf("Enter your String");
	gets(s);
	for(i=0;i<strlen(s);i++){
		if(isalpha(s[i]))
			char_cnt++;
		if(islower(s[i]))
			lower_cnt++;
		if(isupper(s[i]))
			upper_cnt++;
		if(isspace(s[i]))
			space_cnt++;
		if(isdigit(s[i]))
			digit_cnt++;
		if(ispunct(s[i]))
			spec_cnt++;
	}
	printf("Total Char Count = %d\n",char_cnt);
	printf("Total Upper Count = %d\n",upper_cnt);
	printf("Total Lower Count = %d\n",lower_cnt);
	printf("Total Digit Count = %d\n",digit_cnt);
	printf("Total Space Count = %d\n",space_cnt);
	printf("Total Special Count = %d\n",spec_cnt);
	
}
