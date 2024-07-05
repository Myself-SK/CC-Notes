#include<stdio.h>
void main(){
	int hh,mm,ss;
	char dummy;
	printf("Enter Current Time:");
	scanf("%d%c%d%c%d",&hh,&dummy,&mm,&dummy,&ss);
	while(!kbhit()){
		system("cls");
		ss++;
		if(ss>=60){
			ss=0;
			mm++;
		}
		if(mm>=60){
			mm=0;
			hh++;
		}
		if(hh>=23){
			hh=0;
		}
		printf("%d:%d:%d",hh,mm,ss);
		sleep(1);
	}
}
