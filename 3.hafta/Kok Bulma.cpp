#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	float a,b,c, delta;

	cout<<"sirasiyla ikinci dereceden denklemin katsayilarini giriniz: (a,b,c)"<<endl;
	cin>>a;
	cin>>b;
	cin>>c;
	
	delta=pow(b,2)-(4*a*c); //pow(b,3) küp alýrdý. pow(b,2)=b*b
	cout<<"delta: " <<delta<<endl;
	
	float kok1=(-b+sqrt(delta))/2*a;
	float kok2=(-b-sqrt(delta))/2*a;
	
	if(delta>0){
		cout<<"Iki farkli kok vardir. Ilk kok: " << kok1 <<"\t"<< "Ikinci kok: " <<kok2;
	}
	else if(delta==0){
		cout<<"Cakisik iki kok vardir: " <<kok1;
	}
	else{
		cout<<"Reel kok yoktur.";
	}
	
return 0;	
}
