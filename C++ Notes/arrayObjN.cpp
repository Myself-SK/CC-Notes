#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
class Airtel{
	char name[100];
	float bal;
	public:
		void activate(char []);
		void recharge(int);
		void checkBal();
};
void Airtel::activate(char name[]){
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
	int n,i;
	cout<<"Enter total number of Subscribers"<<endl;
	cin>>n;
	srand(time(0));
	Airtel a[n];
	for(i=0;i<n;i++){
		char name[100];
		cout<<"Enter "<<i+1<<" Subscribers Name"<<endl;
		cin>>name;
		a[i].activate(name);
	}
	for(i=0;i<n;i++){
		int rann = rand()%100;
		arr[i].recharge(rann);
	}
	for(i=0;i<n;i++){
		arr[i].checkBal();
	}
	
}
