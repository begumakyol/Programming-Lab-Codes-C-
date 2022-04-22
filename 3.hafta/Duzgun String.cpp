#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

//Benim naciz vucudum, bir gun elbet toprak olacaktir. Fakat Turkiye Cumhuriyeti, ilelebet payidar kalacaktir.

int kelimeSayisi(char metin[], int size){ 	//Metindeki boþluk sayýsýný bularak kelime sayýsýný hesaplayan fonksiyon
	int sayac = 0;
	for(int i = 0; i < size; i++){
		if( metin[i] == ' ' )
				sayac+=1;
	}
return sayac+1; //3 kelime arasýnda 2 boþluk vardýr, bu yüzden +1 ekliyoruz.
}

int cumleSayisi(char metin [], int size){	//Metindeki noktalama iþaretlerine göre cümle sayýsýný bulan fonksiyon 
	int sayac = 0;
	for(int i  =0; i < size; i++){
		if(metin[i] == '!' || metin[i] == '?' || metin[i] == '.')
			sayac += 1;
	}
return sayac;
}

bool duzgunCumle(char metin [], int size){ 	//Cümlenin büyük harfle baþlayýp noktalama iþareti ile bitip bitmediðini kontrol eden fonksiyon
	
	if( ( metin[0] >= 'A') && ( metin[0] <= 'Z') ){
		if(metin[size-1] == '.' || metin[size-1] == '!' || metin[size-1] == '?') 
		return true;
	}
return false;	
}

void duzgunCumleSayisi(char cumle[], int size){	//Bu fonksiyon ekrana, metnin içinde kaç adet doðru yazýlmýþ cümle, kaç adet yanlýþ yazýlmýþ cümle olduðunu ekrana yazmalý. (Cümle sayýsý noktalama iþaretlerinden tespit edilecek. Düzgün olup olmadýðý ise cümlenin büyük harfle baþlayýp baþlamadýðýna bakýlarak bulunacak.)
	
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
	cin.getline(metin, diziUzunlugu); //getline(cin, metin); tek cümle için.

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
	
	strcat(ornekCumle, " "); 	//onrekCumle'nin sonuna bir boþluk ekleme
	strcat(ornekCumle, metin); 	//onrekCumle'nin sonuna kullanýcýnýn girdiði metni ekleme. önce metin sonra ornekCumle gelir.
	//strcat() fonksiyonu ise iki karakter dizisinden ikincisini birincinin sonuna ekler.

	cout<<"Birlestirilmis ornek cumle: "<<ornekCumle<<endl;
	
	duzgunCumleSayisi(metin,metinUzunlugu);

return 0;
}
