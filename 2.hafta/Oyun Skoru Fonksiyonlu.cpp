#include <iostream>

using namespace std;

void printScores (int scores [ ], int howMany){
	for (int i = 0; i < howMany; i++){
		cout<<i+1<<". oyunun skoru: ";
		cin >>scores[i];
	}	
}

void printScoresInReverseOrder(int scores [ ], int howMany){
	for (int i = howMany-1; i>=0; i--){
		cout <<i+1<<". oyunun skoru: "<< scores[i]<<endl;
	}			
}

int maxScore(int scores [ ], int howMany){
	int max=scores[0];
	for (int i = 1; i<howMany; i++){
		if(scores[i]>max)
			max=scores[i];
	}
return max;
}

int minScore(int scores [ ], int howMany){
	int min=scores[0];
	for (int i = 1; i<howMany; i++){
		if(scores[i]<min)
			min=scores[i];
	}
return min;
}

float getAverage(int scores [ ], int howMany){
	float avg=0.0;
	float toplam=0.0;
	for (int i = 0; i<howMany; i++){
		toplam+=scores[i];
	}
	avg=toplam/howMany;
return avg;
}

int numberOfAroundScores(int scores [ ], int howMany, float avg){
	float minOrta=avg*0.9; 
	float maxOrta=avg*1.1;
	int count=0;
	for (int i = 0; i<howMany; i++){
		if(scores[i]>minOrta && scores[i]<maxOrta)
			count++;
	}
return count;
}

int main(){

	const int MAX_SCORES = 30;
	int scores[MAX_SCORES];
	int howMany=40;
	
	while(howMany>30){
		cout << "Oynanan oyun sayisini giriniz: "; 
		cin >>howMany;
	}
	
	cout<<endl;
	
	cout<<"Oynanan her bir oyunda kazanilan skorlari giriniz. "<<endl;
	printScores(scores, howMany);
	
	cout<<endl;
	
	cout << "Skorlarin tersten siralamasi gosteriliyor."<<endl;
	printScoresInReverseOrder(scores, howMany);
	
	cout<<endl;
	
	cout<<"En yuksek skor gosteriliyor."<<endl;
	int max=maxScore(scores, howMany);
	cout<<"Max skor: "<<max<<endl;
	
	cout<<endl;
	
	cout<<"En dusuk skor gosteriliyor."<<endl;
	int min=minScore(scores, howMany);
	cout<<"Min skor: "<<min<<endl;
	
	cout<<endl;
	
	cout<<"Oyunlarin ortalama skoru gosteriliyor."<<endl;
	float avg=getAverage(scores,howMany);			
	cout<<"Ortalama: "<<avg<<endl;
	
	int numOfAround=numberOfAroundScores(scores, howMany, avg);
	cout<<numOfAround<<" oyun ortalamaya en yakin skoru icerir."<<endl;

return 0;
}
