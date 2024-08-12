#include<iostream>
using namespace std;
int main(){
	int age;
	cout<<"Enter your Year of Birth"<<endl;
	cin>>age;
	if(2024-age>=18)
		cout<<"You are Eligible to Vote"<<endl;
	else
		cout<<"Wait "<<18-(2024-age)<<" years to vote";
	return 0;
}
