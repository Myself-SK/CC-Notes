// Vowel ot not using switch
#include<stdio.h>
void main(){
	char ch;
	printf("Enter a Charecter:");
	scanf("%c",&ch);
//	switch(ch){
//		case 'A':
//		case 'a': printf("A is a Vowel");
//				  break;
//		case 'e': printf("Vowel");
//				  break;
//		case 'i': printf("Vowel");
//				  break;
//		case 'o': printf("Vowel");
//				  break;
//		case 'u': printf("Vowel");		
//				  break;
//		default: printf("Consonent");		
//	}
	switch(ch){
		case 'A':
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u': printf("Vowel");		
				  break;
		default: printf("Consonent");		
	}

}
