#include<iostream>
#include<math.h>
using namespace std;
class Square{
	float length;
	
	public:
		void createSqaure(float l){
			this->length = l;
		}
		
		void calcArea(){
			cout<<"Area of Square = "<<length*length<<endl;
		}
		void calcPerimeter(){
			cout<<"Perimeter of Square = "<<4*length<<endl;
		}
		void calcDiagnoal(){
			cout<<"Diagonal of Square = "<<sqrt(2)*length<<endl;
		}
};
int main(){
	Square s;
	float l;
	cout<<"Enter Length"<<endl;
	cin>>l;
	s.createSqaure(l);
	s.calcArea();
	s.calcPerimeter();
	s.calcDiagnoal();
}
