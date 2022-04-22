#include <iostream>
#include <cstdlib>
#include <ctime>
/*
srand(time(NULL)) komutu C dilinde rastgele say� �retirken her seferinde farkl� say� �retmemizi sa�lar. 
Fonksiyonun rastgele say� �retme mant��� ise i�inde bulundu�unuz zamana g�re say� �retmektir. 
time(NULL) ifadesi 1.1.1970 tarihinden bug�ne dek ge�en zaman� saniye cinsinden �l�er.
Bu de�er s�rekli de�i�ti�i i�in �retilen say� sadece rand() fonksiyonu kullan�larak �retilen 
say�ya g�re daha rastgele bir de�erdir.
*/
using std::cout;
using std::endl;

int main(){
	
	srand(time(0));
	int x= rand () %10; // rand() fonksiyonu ile rastgele sayilar herhangi bir degiskene atan�r.
	int y= 10+ rand()%10;
	
	cout << "x: " << x << endl;
	cout << "y: " << y << endl;
	
	return 0;
	
}
