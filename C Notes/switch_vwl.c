#include<stdio.h>
void main(){
	char c;
	printf("Enter a charecter");
	scanf("%c",&c);
	switch(c){
		case 'a':printf("Vowel");break;
		case 'e':printf("Vowel");break;
		case 'i':printf("Vowel");break;
		case 'o':printf("Vowel");break;
		case 'u':printf("Vowel");break;
		default:printf("Consonent");
	}
}
