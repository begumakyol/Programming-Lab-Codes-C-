
#include <iostream>
using namespace std;

int main() {
	
	int a[4] = {3, 5, 7, 10};
	int *pointer;
	
	pointer = &a[2]; //pointerlarda dizi atamalarinda belli bir indeks belirtilmedigi surece "&" isareti kullanilmaz 
	
	cout << "a dizisinin ikinci indeksinin adresi: " << pointer << endl;
	cout << "a dizisinin ikinci indeks adresinde depolanan deger: " << *pointer << endl;
	
/* 2.YOL

	pointer = a;
	
	cout << "a dizisinin ikinci indeksinin adresi: " << pointer + 2 << endl;
	cout << "a dizisinin ikinci indeks adresinde depolanan deger: " << *(pointer + 2) << endl;
*/

	return 0;
}

