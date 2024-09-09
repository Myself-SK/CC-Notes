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
};
Airtel::Airtel(char name[]){
	strcpy(this->name,name);
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
	Airtel *a;
	a = new Airtel("Shiva");
	a->checkBal();
	a->recharge(500);
	a->checkBal();
}
