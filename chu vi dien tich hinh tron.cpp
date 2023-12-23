#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	unsigned int r;
	double chuvi,dientich,sopi;
	cout<<"nhap ban kinh r = ";
	cin>>r;
	cout<<"nhap so pi = ";
	cin>>sopi;
	chuvi=2*r*sopi;
	dientich=r*r*sopi;
	cout<< "chu vi = "<<fixed<<setprecision(2)<<chuvi<<endl;
	cout<< "dien tich ="<<fixed<<setprecision(2)<<dientich<<endl;
	return 0;
}