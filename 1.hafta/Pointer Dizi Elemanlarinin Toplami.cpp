#include <iostream> 

using namespace std; 

int main(){ 

	int dizi[5], i, toplam = 0; 
	int *pointer; 

	cout << "Herhangi bir 5 tam sayi girin: "; 

	for (i = 0; i < 5; i++){ 
		cin >> dizi[i]; 
	} 
/*Bir diziyi, pointer ile iþaret etmek istersek, ptr = dizi; yazmamýz yeterlidir.
Bir diziyi iþaret eden pointer aynen dizi gibi kullanýlabilir. Yani ptr = dizi; komutunu vermenizden sonra,
ptr[0] ile dizi[0] birbirinin aynýsýdýr. Eðer *ptr yazarsanýz, yine dizinin ilk elemaný dizi[0]'ý iþaret etmiþ olursunuz.
Ancak dizi iþaret eden pointer'lar genellikle, *( ptr + 0 ) þeklinde kullanýlýr. 
Burada 0 yerine ne yazarsanýz, dizinin o elemanýný elde ederseniz.
Diyelim ki, 5.elemaný ( yani dizi[ 4 ] ) kullanmak istiyorsunuz, o zaman *( ptr + 4 ) yazarsanýz.
*/
		pointer = dizi; 

	for (i = 0; i < 5; i++){ 
		toplam = toplam + *(pointer + i);  //    toplam+=*(pointer+i);
	} 

	cout<<endl;
	cout << "Dizinin elemanlarinin toplami: " << toplam; 

return 0; 
} 
