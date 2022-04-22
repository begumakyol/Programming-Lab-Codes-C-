#include <iostream>
#include <cmath>
#define PI 3.14159265

using namespace std;

int main(){

	float a,b,c,d,e,f,aci;
	cout<<"aci giriniz: "<<endl;
	cin>>aci;

	a=tan(aci*PI/180);
	b=1/tan(aci*PI/180);
	c=sin(aci*PI/180);
	d=cos(aci*PI/180);
	e=1/cos(aci*PI/180);
	f=1/sin(aci*PI/180);

	cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl<<e<<endl<<f;
	
return 0;
}
