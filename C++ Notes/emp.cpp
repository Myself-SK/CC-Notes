#include<iostream>
using namespace std;
class Company{
    private:
		int empid;
		char name[20];
    public:
		static int empCount;

	public: void join(){
	cout<<"Enter Employee Name"<<endl;
	cin>>name;
	empid = ++empCount;
}

			void display(){
	cout<<name<<" "<<empid<<endl;
}
			static void displayStrength(){
				cout<<"Employee Strength "<<empCount;
			}

};
int Company::empCount = 0;
int main(){
	Company e,j,k,l,m;
	e.join();
	e.display();
	j.join();
	j.display();
	k.join();
	k.display();
	Company::displayStrength();
}

