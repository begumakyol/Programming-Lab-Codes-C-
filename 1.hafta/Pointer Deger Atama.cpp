#include <iostream>
using namespace std;

int main() {

//pointer deðiþken hem içerisine bir deðer alabiliyor hem de aldýðý deðerin ramdeki konumunu kendi üstünde kaydediyor.
	int a = 5;
	int *pointer; //pointer ifadesinin tanimlanmasi
	
	pointer = &a; //pointer degiskenine a degiskeninin adresini atadik
	
	cout << "a degiskenin adresi: " << pointer << endl;
	cout << "a degiskenin adresinde depolanan deger: " << *pointer << endl;
	
	*pointer = 7; //adreste depolanan degeri degistirdik
	cout << "a degiskenin adresinde depolanan deger: " << *pointer << endl;
	
	return 0;
}
