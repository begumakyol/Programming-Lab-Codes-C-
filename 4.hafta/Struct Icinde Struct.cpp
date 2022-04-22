//struct içinde struct yapýsýný kullanarak koordinat düzleminde iki nokta arasýndaki uzunluðu bulacaðýz.
#include <iostream>
#include <cmath>
using namespace std;

struct point { int x; int y;};
struct line {struct point p1; struct point p2;};

float findLength(line a){
	int fark1=a.p1.x - a.p2.x;
	int fark2=a.p1.y - a.p2.y;
	float length= sqrt(pow(fark1,2)+pow(fark2,2));
	return length;
}

int main (){
	
	point p1= {3,5}; //3,5 noktasý
	point p2= {2,8};
	cout<<"p1 x: "<<p1.x<<" "<<"p1 y: "<<p1.y<<endl;
	cout<<"p2 x: "<<p2.x<<" "<<"p2 y: "<<p2.y<<endl;
	
	cout<<"--------------------------------------"<<endl;
	
	point p[3]= {0,3,4,0,5,4}; //0,3 - 4,0 - 4,5 noktalarý 
	for(int i=0; i<3; i++){
		cout<<"x:"<<p[i].x<<" "<<"y:"<<p[i].y<<endl;
	}
	
	line x={p[0], p[1]};
	
	cout<<"--------------------------------------"<<endl;
	cout<<"uzunluk: "<<findLength(x);
	
	return 0;
}
