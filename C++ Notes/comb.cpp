#include<iostream>
using namespace std;
// n!/((n-r)!*r!)
int main(){
	int n,r,nf=1,nr=1,rf=1,res=0;
	cout<<"Enter value for N"<<endl;
	cin>>n;
	cout<<"Enter value for R"<<endl;
	cin>>r;
	for(int i=1;i<=n;i++)
		nf=nf*i;
		
	for(int i=1;i<=(n-r);i++)
		nr=nr*i;
		
	for(int i=1;i<=r;i++)
		rf=rf*i;
	
	res = nf/(nr*rf);
	cout<<"Combination of "<<res;
}

