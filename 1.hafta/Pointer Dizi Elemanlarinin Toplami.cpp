#include <iostream> 

using namespace std; 

int main(){ 

	int dizi[5], i, toplam = 0; 
	int *pointer; 

	cout << "Herhangi bir 5 tam sayi girin: "; 

	for (i = 0; i < 5; i++){ 
		cin >> dizi[i]; 
	} 
/*Bir diziyi, pointer ile i�aret etmek istersek, ptr = dizi; yazmam�z yeterlidir.
Bir diziyi i�aret eden pointer aynen dizi gibi kullan�labilir. Yani ptr = dizi; komutunu vermenizden sonra,
ptr[0] ile dizi[0] birbirinin ayn�s�d�r. E�er *ptr yazarsan�z, yine dizinin ilk eleman� dizi[0]'� i�aret etmi� olursunuz.
Ancak dizi i�aret eden pointer'lar genellikle, *( ptr + 0 ) �eklinde kullan�l�r. 
Burada 0 yerine ne yazarsan�z, dizinin o eleman�n� elde ederseniz.
Diyelim ki, 5.eleman� ( yani dizi[ 4 ] ) kullanmak istiyorsunuz, o zaman *( ptr + 4 ) yazarsan�z.
*/
		pointer = dizi; 

	for (i = 0; i < 5; i++){ 
		toplam = toplam + *(pointer + i);  //    toplam+=*(pointer+i);
	} 

	cout<<endl;
	cout << "Dizinin elemanlarinin toplami: " << toplam; 

return 0; 
} 
