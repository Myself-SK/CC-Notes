#include<iostream>
using namespace std;
class GPS{
	int lat,lon;
	public:
		void set(int lat,int lon){
			this->lat = lat;
			this->lon = lon;
		}
		void operator ++(int){
			lat=lat+1;
			lon=lon+1;
		}	
		void operator ++(){
			lat=lat+1;
			lon=lon+1;
		}
	
		void operator --(){
			lat=lat-1;
			lon=lon-1;
		}
		int operator ==(GPS b){
			if((this->lat == b.lat)&&(this->lon == b.lon))
				return 1;
			else
				return 0;
		}
		void display(){
			cout<<"Lat:\t"<<lat<<endl;
			cout<<"Long:\t"<<lon<<endl;
		}
};
int main(){
	GPS a,b;
	a.set(10,20);
	b.set(10,20);
	if(a==b)
		cout<<"Destination Reached"<<endl;
	else
		cout<<"Destination has not yet Reached Need to Move"<<endl;
}
