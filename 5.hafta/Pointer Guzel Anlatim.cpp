#include <iostream>
using namespace std;


int main(int argc, char** argv) {
	
	
  char a[]="Hello World";
  char *ptr=a;
  
  cout<<*ptr<<endl;			//H--   
  
  *ptr++;					//		indeksi bir artt�r�r
  cout<<*ptr<<endl;			//e--
  
  ++*ptr;					//		eger solunda olursa alfabede veya say�larda bir sonrakine gecer
  cout<<*ptr<<endl;			//f--
  
  *++ptr;
  cout<<*ptr<<endl;			//l--	//bu l harfi 1.l dir

  
  int a2[6]={11,21,33,44,55,77};
  int *ptr2=a2;
  
  cout<<*ptr2<<endl;		//11--
  
  *ptr2++;
  cout<<*ptr2<<endl;		//21--
  
  ++*ptr2;
  cout<<*ptr2<<endl;		//22--
  
  *++ptr2;
  cout<<*ptr2<<endl;		//33--
  
	
	int c=5;
	int *pointer;
	pointer=&c;
	
	cout << *pointer << endl;		//5 say�s�
	cout << &pointer << endl;		//pointerin bellekteki adresi
	cout << pointer << endl;		//5 in bellekteki adresi
	
	int d=6;
	int *pointer2=&d;
	cout << *pointer2 << endl;
	
	char e[5]="ali";				//char dizisini pointere atarken pointer�da char olarak tan�mlamal�s�n
	char *pointer3=e;
	
	cout << *pointer3 << endl;		// c�kt�s� sadece a olur
	
	int f[5]={1,2,3,4};				
	int *pointer4=f;				//eger bir dizinin adresini pointere atayacaksan bas�nda ampersant isareti olmadan ata
	
	cout << *(pointer4+2) << endl;  //c�kt�s� 3 olur
	
	int g[5]={1,2,3,4};				//pointerlarda dizi atamalarinda belli bir indeks belirtilmedigi surece "&" isareti kullanilmaz
	int *pointer5=&g[3];
	
	cout << *pointer5 << endl;		//c�kt�s� 4 olur
		
	return 0;
}
