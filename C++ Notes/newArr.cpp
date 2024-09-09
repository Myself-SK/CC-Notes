#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
class Airtel{
	char name[100];
	float bal;
	public:
		Airtel();
		void recharge(int);
		void checkBal();
};
Airtel::Airtel(){
	cin>>name;
	bal=10;
}
void Airtel::recharge(int x){
	bal+=x;
	cout<<x<<" amount has been recharged to your Account"<<endl;
}
void Airtel::checkBal(){
	cout<<name<<" your Current Balance is "<<bal<<endl;
}
int main(){
	int n=3,i;
	Airtel *a;
	a = new Airtel[n];
	srand(time(0));
	for(i=0;i<3;i++){
		(a+i)->checkBal();
		int rann = rand()%100;
		(a+i)->recharge(rann);
		(a+i)->checkBal();
	}
}
