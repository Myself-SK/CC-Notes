#include<iostream>
using namespace std;
class A{
	private:
		int a;
	public:
		void readA(){
			cin>>a;
		}
		void displayA(){
			cout<<"A = "<<a<<endl;
		}
};
class B:public A{
	private:
		int b;
	public:
		void readB(){
			cin>>b;
		}
		void displayB(){
			cout<<"B = "<<b<<endl;
		}
};
class C: public B{
	private:
		int c;
	public:
		void readC(){
			cin>>c;
		}
		void displayC(){
			cout<<"C = "<<c<<endl;
		}
};
int main(){
	C b;
	b.readA();
	b.displayA();
	b.readB();
	b.displayB();
	b.readC();
	b.displayC();
}
