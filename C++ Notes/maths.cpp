#include<iostream>
using namespace std;
class basicMaths{
	int a,b;
	public:
		void set(int a,int b){
			this->a=a;
			this->b=b;
		}
		void add(){
			cout<<"Sum of "<<a<<" and "<<b<<" = "<<a+b<<endl;
		}
		void sub(){
			cout<<"Sum of "<<a<<" and "<<b<<" = "<<a-b<<endl;
		}
		void mul(){
			cout<<"Sum of "<<a<<" and "<<b<<" = "<<a*b<<endl;
		}
		void div(){
			cout<<"Sum of "<<a<<" and "<<b<<" = "<<a/b<<endl;
		}
};
class advanced:public basicMaths{
	int n;
	public:
		void set(int n,int x,int y){
			basicMaths::set(x,y);
			this->n=n;
		}
		void fact(){
			int f=1;
			for(int i=1;i<=n;i++){
				f*=i;
			}
			cout<<"Factorial of "<<n<<" = "<<f<<endl;
		}
};
int main(){
	basicMaths a;
	advanced b;
	b.set(5,10,20);
	b.fact();
	b.add();
}
