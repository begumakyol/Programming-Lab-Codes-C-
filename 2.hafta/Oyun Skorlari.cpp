#include <iostream>

using namespace std;

int main(){

	const int MAX_SCORES = 30;
	int scores[MAX_SCORES];
	int howMany=50;

/* 
MAX_SCORE 30 ise, howMany de�i�kenin de�eri 30�dan b�y�k olamaz
Alttaki iki sat�r� howMany <=MAX_SCORES ko�ulunu kontrol edecek �ekilde g�ncelleyiniz
*/

	while(howMany>30){
		cout << "Oynanan oyun sayisini giriniz: "; 
		cin >>howMany;
	}
		
	cout<<"Oynanan her bir oyunda kazanilan skorlari giriniz. "<<endl;
	for (int i = 0; i < howMany; i++){
		cout<<i+1<<". oyunun skoru: ";
		cin >>scores[i];		
	}
			
	cout<<endl;
			
	cout << "Skorlarin tersten siralamasi gosteriliyor."<<endl;
		
	for (int i = howMany-1; i>=0; i--){
		cout <<i+1<<". oyunun skoru: "<< scores[i]<<endl;
	}
			
	cout<<endl;
			
	cout<<"En yuksek skor gosteriliyor."<<endl;
		
	int max=scores[0];
			
	for (int i = 1; i<howMany; i++){
		if(scores[i]>max)
			max=scores[i];
	}
		
	cout<<"Max skor: "<<max<<endl;
			
	cout<<endl;
		
	cout<<"En dusuk skor gosteriliyor."<<endl;
		
	int min=scores[0];
		
	for (int i = 1; i<howMany; i++){
		if(scores[i]<min)
			min=scores[i];
	}
			
	cout<<"Min skor: "<<min<<endl;
			
	cout<<endl;
			
	cout<<"Oyunlarin ortalama skoru gosteriliyor."<<endl;
		
	float avg=0.0;
	float toplam=0.0;
			
	for (int i = 0; i<howMany; i++){
		toplam+=scores[i];
	}
		
	avg=toplam/howMany;
		
	cout<<"Ortalama: "<<avg<<endl;

/*
ortalama skorun oldugu oyunu ��yle buluruz.
ortalama de�erin y�zde 10 a�a��s�n� ve y�zde 10 yukar�s�n� buluruz. 
Bu aral�ktaki skora sahip oyun ortalama bir oyundur.
*/		
	float minOrta=avg*0.9; 
	float maxOrta=avg*1.1;
		
	for (int i = 0; i<howMany; i++){
		if(scores[i]>minOrta && scores[i]<maxOrta)
			cout<<i+1<<". oyunda kazanilan "<<scores[i]<<" skoru, ortalamaya en yakin skordur."<<endl;
	}
return 0;
}
