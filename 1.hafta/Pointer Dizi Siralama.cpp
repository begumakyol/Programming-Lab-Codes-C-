#include <iostream>
using namespace std;
/*
soru: tanýmlanan dizinin elemanlarýnýn yerini deðiþtirmeden 
o dizinin elemanlarýný sýralayan c++ programý. 
çözüm için dizimize alternatif baþka bir dizi tanýmlýyoruz 
ve o dizinin her bir elemaný bizim orijinal dizimizin her bir elemanýnýn RAM'deki adresine
iþaret ediyor. yeni tanýmladýðýmýz dizimiz üzerinde sýralama yapýyoruz 
ve böylece ilk dizimizdeki hiçbir elemana dokunmamýþ oluyoruz. 
yazdýrma kýsmýnda da sonradan tanýmladýðýmýz diziyi yazdýrýyoruz ki 
konsolda elemanlar sýralý gözüksün.
*/

//önce swap fonksiyonunu tanýmladýk.

void swap(int &a, int &b){
		int temp=a;
		a=b;
		b=temp;
}

int main(){

	int i,j,k;

	int a[5] = {9,1,3,11,2};
	
	//ilk aþamada iþlemci 4 karþýlaþtýrma yaptý.
	//<9,1>,3,11,2
	//1,<9,3>,11,2
	//1,3,<9,11>,2
	//1,3,9,<11,2>
	//-------
	
	//ikinci aþamada iþlemci 3 karþýlaþtýrma yaptý.
	//<1,3>,9,2,11
	//1,<3,9>,2,11
	//1,3,<9,2>,11
	//-------
	
	//üçüncü aþamada iþlemci 2 karþýlaþtýrma yaptý.
	//<1,3>,2,9,11
	//1,<3,2>,9,11
	//-------
	
	//dördüncü aþamada iþlemci 1 karþýlaþtýrma yaptý.
	//<1,2>,3,9,11
	//-------

	//1.adým pointer dizisini tanýmladýk.
	int *b[5];	

	//2.adým pointer dizisine(b) orijinal dizinin(a) adreslerini atadýk.
	for (i=0; i<5; i++)
	{
		b[i]=&a[i];
	}
	
	//3.adým pointer dizisinde kýyaslama yaptýk.
	for(i=0 ; i<4 ; i++)
	{
		for( j=0; j<4-i; j++)
		{
			if(*b[j] > *b[j+1])
			{
				swap(b[j],b[j+1]);
			}
		}
	}
	
	//4.1.adým orijinal diziyi yazdýrdýk.
	cout << "orijinal dizi: "<<endl;
	for (i=0; i<5; i++)
	{
		cout << a[i] << " ";
	}
	
	//alt satýra geçtik.
	cout <<endl;
	
	//4.2.adým sýralanmýþ adreslerin sýralý halini yazdýrdýk.
	cout<<"Siralanmis hali: "<<endl;
	for (i=0; i<5; i++)
	{
		cout<<*b[i]<<" ";
	}
	
	return 0;	
	
}
