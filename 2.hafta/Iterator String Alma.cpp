#include <iostream> 
#define MAX_SIZE 100 // Maximum size of the string 

using namespace std; 

int main(){ 

	char text[MAX_SIZE]; 
	char *str = text; 

	int count = 0; 
	cout<<"Herhangi bir kelime girin: "; 

	cin>>text; 

// string’in son elemanýna kadar iterasyon 

	while(*(str++) != '\0') count++; 

/*
while( * (str++) != '\0' );  ve  while( * (str++));  ve  while( * (str++) != 0 );  ve  while( * (str++)==0) 
ile aynýdýr. '\0' karakteri "null" deðerdir. koþul olarak bakýldýðýnda bu deðer 0'a eþittir. 
while ýn içi 1 olduðu sürece çalýþýr. 0 olduðunda çalýþmaz. 
* str ,'\0' a denk geldiðinde parantez içi 0'a eþit olacaðý için otomatikten while döngüsünden çýkar. 
bu yüzden "!=0" (yani 0'a eþit deðil iken) diye belirtmeye gerek yoktur.
while( * (str++)==0); bu kullaným da ayný sonucu verir. 
stringin son elemanýna kadar iteratör 0'a eþit mi? deðil. 
o zaman çalýþýr. son elemanýnda 0'a eþit mi? ('\0' ifadesi) evet. o zaman while döngüsünden çýkar.
*/

	cout<<text<<" kelimesinin uzunlugu: "<<count; 

return 0; 
} 
