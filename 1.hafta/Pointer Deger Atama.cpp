#include <iostream>
using namespace std;

int main() {

//pointer de�i�ken hem i�erisine bir de�er alabiliyor hem de ald��� de�erin ramdeki konumunu kendi �st�nde kaydediyor.
	int a = 5;
	int *pointer; //pointer ifadesinin tanimlanmasi
	
	pointer = &a; //pointer degiskenine a degiskeninin adresini atadik
	
	cout << "a degiskenin adresi: " << pointer << endl;
	cout << "a degiskenin adresinde depolanan deger: " << *pointer << endl;
	
	*pointer = 7; //adreste depolanan degeri degistirdik
	cout << "a degiskenin adresinde depolanan deger: " << *pointer << endl;
	
	return 0;
}
