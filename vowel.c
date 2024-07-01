#include<stdio.h>
void main(){
	char ch;
	printf("Enter a Charecter:");
	scanf("%c",&ch);
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' ||ch=='u')
		printf("Vowel");
	else if(ch=='A' || ch == 'E' || ch=='I' || ch =='O' || ch=='U')
		printf("Vowel");
	else
		printf("Consonent");
}
