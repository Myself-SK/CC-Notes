#include<iostream>
using namespace std;
class A{
	private:
		int a;
	public:
		A(int a){
			
			cout<<"A"<<endl;
			this->a=a;
		}
		void displayA(){
			cout<<"A = "<<a<<endl;
		}
};
class B{
	private:
		int b;
	public:
		B(int b){
			
			cout<<"B"<<endl;
			this->b=b;
		}
		void displayB(){
			cout<<"B = "<<b<<endl;
		}
};
class C:public A,public B{
	private:
		int c;
	public:
		C(int a,int b,int c):B(a),A(b){
			cout<<"C"<<endl;
			this->c=c;
		}
		void displayC(){
			cout<<"C = "<<c<<endl;
		}
};
int main(){
	C b(10,20,30);
	b.displayA();
	b.displayB();
	b.displayC();
}
