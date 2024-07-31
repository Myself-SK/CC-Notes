#include<stdio.h>
#include<string.h>
void main(){
	int n,i,j;
	printf("Enter Total Numbers of Name:");
	scanf("%d",&n);
	getchar();
	char s[n][100],temp[n][100];
	printf("Enter Names:\n");
	for(i=0;i<n;i++){
		gets(s[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(strcmp(s[i],s[j])==1){
				strcpy(temp[i],s[i]);
				strcpy(s[i],s[j]);
				strcpy(s[j],temp[i]);
			}
		}
	}
	
	printf("Sorted Names:\n");
	for(i=0;i<n;i++){
		puts(s[i]);
	}
}
