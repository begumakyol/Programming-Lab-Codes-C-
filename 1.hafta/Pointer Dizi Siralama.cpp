#include <iostream>
using namespace std;
/*
soru: tan�mlanan dizinin elemanlar�n�n yerini de�i�tirmeden 
o dizinin elemanlar�n� s�ralayan c++ program�. 
��z�m i�in dizimize alternatif ba�ka bir dizi tan�ml�yoruz 
ve o dizinin her bir eleman� bizim orijinal dizimizin her bir eleman�n�n RAM'deki adresine
i�aret ediyor. yeni tan�mlad���m�z dizimiz �zerinde s�ralama yap�yoruz 
ve b�ylece ilk dizimizdeki hi�bir elemana dokunmam�� oluyoruz. 
yazd�rma k�sm�nda da sonradan tan�mlad���m�z diziyi yazd�r�yoruz ki 
konsolda elemanlar s�ral� g�z�ks�n.
*/

//�nce swap fonksiyonunu tan�mlad�k.

void swap(int &a, int &b){
		int temp=a;
		a=b;
		b=temp;
}

int main(){

	int i,j,k;

	int a[5] = {9,1,3,11,2};
	
	//ilk a�amada i�lemci 4 kar��la�t�rma yapt�.
	//<9,1>,3,11,2
	//1,<9,3>,11,2
	//1,3,<9,11>,2
	//1,3,9,<11,2>
	//-------
	
	//ikinci a�amada i�lemci 3 kar��la�t�rma yapt�.
	//<1,3>,9,2,11
	//1,<3,9>,2,11
	//1,3,<9,2>,11
	//-------
	
	//���nc� a�amada i�lemci 2 kar��la�t�rma yapt�.
	//<1,3>,2,9,11
	//1,<3,2>,9,11
	//-------
	
	//d�rd�nc� a�amada i�lemci 1 kar��la�t�rma yapt�.
	//<1,2>,3,9,11
	//-------

	//1.ad�m pointer dizisini tan�mlad�k.
	int *b[5];	

	//2.ad�m pointer dizisine(b) orijinal dizinin(a) adreslerini atad�k.
	for (i=0; i<5; i++)
	{
		b[i]=&a[i];
	}
	
	//3.ad�m pointer dizisinde k�yaslama yapt�k.
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
	
	//4.1.ad�m orijinal diziyi yazd�rd�k.
	cout << "orijinal dizi: "<<endl;
	for (i=0; i<5; i++)
	{
		cout << a[i] << " ";
	}
	
	//alt sat�ra ge�tik.
	cout <<endl;
	
	//4.2.ad�m s�ralanm�� adreslerin s�ral� halini yazd�rd�k.
	cout<<"Siralanmis hali: "<<endl;
	for (i=0; i<5; i++)
	{
		cout<<*b[i]<<" ";
	}
	
	return 0;	
	
}
