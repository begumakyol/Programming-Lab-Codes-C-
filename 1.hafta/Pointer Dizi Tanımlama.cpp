#include <iostream>
using namespace std;

int main() {

	int a[4] = {3, 5, 7, 10}, i;
	
	int *ptr; //pointer tanýmladýk. a dizisine eþitleyince *ptr, a dizisinin ilk elemanýna iþaret edecek. *ptr+1 ikinci elemana vs.
	ptr=a; 
	
	for(int i = 0; i < 4; i++){	
		cout << *(ptr+i) << " " ; //atadigimiz adreslerin degerlerini ekrana yazdirdik 	
	}
		
	/* ALTERNATÝFÝ
	int a[4] = {3, 5, 7, 10}, i;

	int *ptr[4]; //4 elemanlý bir pointer dizisi oluþturduk.
	
	for(int i = 0; i < 4; i++){
		ptr[i] = &a[i]; //isaretci dizisine a dizisinin indekslerinin adreslerini atadik 		
	}
	
	for(int i = 0; i < 4; i++){	
		cout << *ptr[i] << " " ; //atadigimiz adreslerin degerlerini ekrana yazdirdik 	
	}
	*/
	
	/*
	Pointer'lar farklý þekillerde kullanýlabilir. 
	Her defasýnda, dizinin baþlangýç elemanýný atamanýz gerekmez. 
	Örneðin, ptr = &dizi[ 2 ] þeklinde bir komut kullanarak, 
	dizinin 3.elemanýnýn adresini pointer'a atayabilirsiniz.
	*/
		
return 0;
}
