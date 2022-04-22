#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

//Benim naciz vucudum, bir gun elbet toprak olacaktir. Fakat Turkiye Cumhuriyeti, ilelebet payidar kalacaktir.

int kelimeSayisi(char metin[], int size){ 	//Metindeki bo�luk say�s�n� bularak kelime say�s�n� hesaplayan fonksiyon
	int sayac = 0;
	for(int i = 0; i < size; i++){
		if( metin[i] == ' ' )
				sayac+=1;
	}
return sayac+1; //3 kelime aras�nda 2 bo�luk vard�r, bu y�zden +1 ekliyoruz.
}

int cumleSayisi(char metin [], int size){	//Metindeki noktalama i�aretlerine g�re c�mle say�s�n� bulan fonksiyon 
	int sayac = 0;
	for(int i  =0; i < size; i++){
		if(metin[i] == '!' || metin[i] == '?' || metin[i] == '.')
			sayac += 1;
	}
return sayac;
}

bool duzgunCumle(char metin [], int size){ 	//C�mlenin b�y�k harfle ba�lay�p noktalama i�areti ile bitip bitmedi�ini kontrol eden fonksiyon
	
	if( ( metin[0] >= 'A') && ( metin[0] <= 'Z') ){
		if(metin[size-1] == '.' || metin[size-1] == '!' || metin[size-1] == '?') 
		return true;
	}
return false;	
}

void duzgunCumleSayisi(char cumle[], int size){	//Bu fonksiyon ekrana, metnin i�inde ka� adet do�ru yaz�lm�� c�mle, ka� adet yanl�� yaz�lm�� c�mle oldu�unu ekrana yazmal�. (C�mle say�s� noktalama i�aretlerinden tespit edilecek. D�zg�n olup olmad��� ise c�mlenin b�y�k harfle ba�lay�p ba�lamad���na bak�larak bulunacak.)
	
	int count = 0;
	int index[10];
	for (int i = 0; i < size; i++){
		if ( cumle[i] == '.' || cumle[i] == '!' || cumle[i] == '?' ){	
			index[count] = i;	
			count++;
		}
	}
	
	int ilkHarf = 0;
	int duzgunCount = 0;
	for(int i = 0; i < count; i++){	
		if(cumle[ilkHarf] >= 'A' && cumle[ilkHarf] <= 'Z'){
			duzgunCount++;
		}
		ilkHarf = index[i]+2;	
	}
	
	cout<<"Duzgun cumle sayisi: "<<duzgunCount<<endl;
	cout<<"Yanlis cumle sayisi: "<<count-duzgunCount<<endl;
}

int main(){

	const int diziUzunlugu = 200;
	char metin[diziUzunlugu];
	char ornekCumle[250] = {" Istikbal Goklerdedir!"};
	int metinUzunlugu = 0;

	cout<<"Bir metin girin:"<<endl;
	cin.getline(metin, diziUzunlugu); //getline(cin, metin); tek c�mle i�in.

	metinUzunlugu=strlen(metin); 

	cout<<"Metin, toplam: "<<metinUzunlugu<<" karakterden olusmaktadir."<<endl;
	cout<<"Metin, toplam: "<<kelimeSayisi(metin,metinUzunlugu)<<" kelimeden olusmaktadir."<<endl;
	cout<<"Metin, toplam: "<<cumleSayisi(metin,metinUzunlugu)<<" cumleden olusmaktadir."<<endl;
	
	cout<<"Girilen metnin ilk cumlesi, ";

	if( duzgunCumle(metin,metinUzunlugu) )
		cout<<"duzgun";
	else
		cout<<"hatali";	
	
	cout<<" bir cumledir."<<endl; 
	
	strcat(ornekCumle, " "); 	//onrekCumle'nin sonuna bir bo�luk ekleme
	strcat(ornekCumle, metin); 	//onrekCumle'nin sonuna kullan�c�n�n girdi�i metni ekleme. �nce metin sonra ornekCumle gelir.
	//strcat() fonksiyonu ise iki karakter dizisinden ikincisini birincinin sonuna ekler.

	cout<<"Birlestirilmis ornek cumle: "<<ornekCumle<<endl;
	
	duzgunCumleSayisi(metin,metinUzunlugu);

return 0;
}
