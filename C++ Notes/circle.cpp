#include<iostream>
using namespace std;
class Circle{
	float radius;
	
	public:
		void setRadius(float r){
			this->radius = r;
		}
		
		void calcDiameter(){
			cout<<"Diameter of Circle = "<<2*radius<<endl;
		}
		
		void calcCircumference(){
			cout<<"Circumference of a Circle = "<<2*3.14*radius<<endl;
		}
		void calcArea(){
			cout<<"Area of a Circle = "<<3.14*radius*radius<<endl;
		}
};
int main(){
	Circle c;
	float r;
	cout<<"Enter Radius"<<endl;
	cin>>r;
	c.setRadius(r);
	c.calcDiameter();
	c.calcCircumference();
	c.calcArea();	
}
