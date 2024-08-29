#include<iostream>
#include<string.h>
using namespace std;
class Bank{
	char name[100];
	int bal;
	
	public:
		void openAccount(char[]);
		void checkBal();
		void deposit(int);
		void withdraw(int);		
};
void Bank::openAccount(char name[100]){
	strcpy(this->name,name);
	bal=250;
}
void Bank::checkBal(){
	cout<<"Name :\t"<<name<<endl;
	cout<<"Bal :\t"<<bal<<endl;
}
void Bank::deposit(int amt){
	this->bal+=amt;
	cout<<amt<<" Deposited Successfully"<<endl;
}
void Bank::withdraw(int amt){
	if((this->bal-amt)>200){
		this->bal-=amt;
		cout<<amt<<" Withdrawn Successfully"<<endl;
	}
	else{
		cout<<"Insuffient Funds"<<endl;
	}
}
int main(){
	Bank b;
	b.openAccount("Shiva");
	b.checkBal();
	b.deposit(5000);
	b.withdraw(5500);
	b.checkBal();
	b.withdraw(4000);
	b.checkBal();
	
}

