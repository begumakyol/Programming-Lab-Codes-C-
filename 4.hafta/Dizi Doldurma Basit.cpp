#include <iostream>
#include <cstdlib> //stdlib.h
#include <ctime>
#include <iomanip>
 
using namespace std;

void fillArray( int m[][10] , int size){
	int a=0;
	for(int i=0; i<size; i++){
		for(int j=0; j<size; j++){
		m[i][j]=a;
		cout<<setw(4)<<m[i][j];
		a++;
		}
	cout<<endl;
	}
} 



int main(){
 	
	int sayilar[10][10];	
	fillArray(sayilar,10);
 	
 	
return 0;
}
