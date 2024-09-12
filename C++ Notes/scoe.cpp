#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
class A{
	int private_a;
	public:
		int public_a;
		read(){
			cout<<"Reading A"<<endl;
		}
		display(){
			cout<<"Displaying A"<<endl;
		}
};
class B:public A{
	int private_b;
	public:
		int public_b;
		read(){
			cout<<"Reading A"<<endl;
		}
		display(){
			cout<<"Displaying A"<<endl;
		}
};
int main(){
	A a;
	B b;
	cout<<b.public_a<<endl;
}
