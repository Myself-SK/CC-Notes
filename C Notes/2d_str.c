#include<stdio.h>
#include<string.h>
void main(){
	int n,i;
	printf("Enter Total Numbers of Name:");
	scanf("%d",&n);
	getchar();
	char s[n][100];
	printf("Enter Names:\n");
	for(i=0;i<n;i++){
		gets(s[i]);
	}
	printf("Entered Names:\n");
	for(i=0;i<n;i++){
		puts(s[i]);
	}
}
