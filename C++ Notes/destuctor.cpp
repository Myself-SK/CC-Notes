#include<iostream>
#include<string.h>
using namespace std;
class Airtel{
	char name[100];
	float bal;
	public:
		Airtel(char []);
		void recharge(int);
		void checkBal();
		~Airtel();
};
Airtel::Airtel(char name[]){
	strcpy(this->name,name);
	bal=10;
}
Airtel::~Airtel(){
	cout<<"Thanks for your Usage"<<endl;
}
void Airtel::recharge(int x){
	bal+=x;
	cout<<x<<" amount has been recharged to your Account"<<endl;
}
void Airtel::checkBal(){
	cout<<"Your Current Balance is "<<bal<<endl;
}
int main(){
	Airtel a("Shiva");
	a.recharge(10);
	a.checkBal();
	a.recharge(20);
	a.checkBal();
}
