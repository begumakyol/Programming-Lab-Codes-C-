#include <iostream> 
#define MAX_SIZE 100 // Maximum size of the string 

using namespace std; 

int main(){ 

	char text[MAX_SIZE]; 
	char *str = text; 

	int count = 0; 
	cout<<"Herhangi bir kelime girin: "; 

	cin>>text; 

// string�in son eleman�na kadar iterasyon 

	while(*(str++) != '\0') count++; 

/*
while( * (str++) != '\0' );  ve  while( * (str++));  ve  while( * (str++) != 0 );  ve  while( * (str++)==0) 
ile ayn�d�r. '\0' karakteri "null" de�erdir. ko�ul olarak bak�ld���nda bu de�er 0'a e�ittir. 
while �n i�i 1 oldu�u s�rece �al���r. 0 oldu�unda �al��maz. 
* str ,'\0' a denk geldi�inde parantez i�i 0'a e�it olaca�� i�in otomatikten while d�ng�s�nden ��kar. 
bu y�zden "!=0" (yani 0'a e�it de�il iken) diye belirtmeye gerek yoktur.
while( * (str++)==0); bu kullan�m da ayn� sonucu verir. 
stringin son eleman�na kadar iterat�r 0'a e�it mi? de�il. 
o zaman �al���r. son eleman�nda 0'a e�it mi? ('\0' ifadesi) evet. o zaman while d�ng�s�nden ��kar.
*/

	cout<<text<<" kelimesinin uzunlugu: "<<count; 

return 0; 
} 
