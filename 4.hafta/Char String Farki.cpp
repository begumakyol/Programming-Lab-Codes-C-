//string ve char farký. yazdýrma iþlemleri.
#include <iostream>

using namespace std;

int main(){
	
	//string atama	
	string ogrenci = "Begum";
	string ogrenciler[3] = {"Begum" , "Gizem" , "Bahadir"};

	//char atama
	char harf = 'a';
	char ogrenci2[10] = "Begum"; 
	char ogrenciler2[3][10] = {"Begum" , "Gizem" , "Bahadir"}; //ilk indeks kýsmý kelime sayýsýný ikinci indeks kýsmý ise kelimenin maksimum uzunluðunu ifade eder
	
	//yazdýrma iþlemleri
	
	cout<<ogrenci<<endl;

	for(int i = 0; i < 3; i++) {	   //hatalý yazdýrma iþlemi-->  cout<<ogrenciler<<endl;
		cout << ogrenciler[i] << " ";
	}
	
	cout<<endl;
	
	cout<<harf<<endl;
	
	cout<<ogrenci2<<endl;
	
	for(int i = 0; i < 3; i++) {      //hatalý yazdýrma iþlemi-->  cout<<ogrenciler2<<endl;
		cout << ogrenciler2[i] << " ";
	}
	
return 0;
}
