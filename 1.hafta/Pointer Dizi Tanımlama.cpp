#include <iostream>
using namespace std;

int main() {

	int a[4] = {3, 5, 7, 10}, i;
	
	int *ptr; //pointer tan�mlad�k. a dizisine e�itleyince *ptr, a dizisinin ilk eleman�na i�aret edecek. *ptr+1 ikinci elemana vs.
	ptr=a; 
	
	for(int i = 0; i < 4; i++){	
		cout << *(ptr+i) << " " ; //atadigimiz adreslerin degerlerini ekrana yazdirdik 	
	}
		
	/* ALTERNAT�F�
	int a[4] = {3, 5, 7, 10}, i;

	int *ptr[4]; //4 elemanl� bir pointer dizisi olu�turduk.
	
	for(int i = 0; i < 4; i++){
		ptr[i] = &a[i]; //isaretci dizisine a dizisinin indekslerinin adreslerini atadik 		
	}
	
	for(int i = 0; i < 4; i++){	
		cout << *ptr[i] << " " ; //atadigimiz adreslerin degerlerini ekrana yazdirdik 	
	}
	*/
	
	/*
	Pointer'lar farkl� �ekillerde kullan�labilir. 
	Her defas�nda, dizinin ba�lang�� eleman�n� ataman�z gerekmez. 
	�rne�in, ptr = &dizi[ 2 ] �eklinde bir komut kullanarak, 
	dizinin 3.eleman�n�n adresini pointer'a atayabilirsiniz.
	*/
		
return 0;
}
