//string ve char fark�. yazd�rma i�lemleri.
#include <iostream>

using namespace std;

int main(){
	
	//string atama	
	string ogrenci = "Begum";
	string ogrenciler[3] = {"Begum" , "Gizem" , "Bahadir"};

	//char atama
	char harf = 'a';
	char ogrenci2[10] = "Begum"; 
	char ogrenciler2[3][10] = {"Begum" , "Gizem" , "Bahadir"}; //ilk indeks k�sm� kelime say�s�n� ikinci indeks k�sm� ise kelimenin maksimum uzunlu�unu ifade eder
	
	//yazd�rma i�lemleri
	
	cout<<ogrenci<<endl;

	for(int i = 0; i < 3; i++) {	   //hatal� yazd�rma i�lemi-->  cout<<ogrenciler<<endl;
		cout << ogrenciler[i] << " ";
	}
	
	cout<<endl;
	
	cout<<harf<<endl;
	
	cout<<ogrenci2<<endl;
	
	for(int i = 0; i < 3; i++) {      //hatal� yazd�rma i�lemi-->  cout<<ogrenciler2<<endl;
		cout << ogrenciler2[i] << " ";
	}
	
return 0;
}
