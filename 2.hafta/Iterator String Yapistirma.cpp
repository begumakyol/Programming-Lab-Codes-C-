#include <iostream> 
#define MAX_SIZE 100 

//iki stringi birbirine yapýþtýrma.

using namespace std; 

int main(){ 
	char str1[MAX_SIZE], str2[MAX_SIZE]; 
	char *s1 = str1; 
	char *s2 = str2; 
	
	cout<<"Ilk string: "; 
	cin>>str1; 
	cout<<"2. string: "; 
	cin>>str2; 

//str1’in sonuna kadar gitme
	while(*(++s1)); //while ýn içi 0 olana kadar çalýþýr.

//str2’yi str1’e kopyalama 
	while(*(s1++) = *(s2++));

	cout<<"Birlesmis hali: "<<str1; 

return 0; 
} 

 
