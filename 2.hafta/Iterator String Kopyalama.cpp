#include <iostream> 
#define MAX_SIZE 100 // stringin maksimum boyunu 100'e sabitle. 

using namespace std; 

int main(){ 
	char text1[MAX_SIZE], text2[MAX_SIZE]; 
	char *str1 = text1; 
	char *str2 = text2; 

	cout<<"Herhangi bir kelime giriniz: "<<endl; 
	cin>>text1; 

// text1’i text2’ye karakter karakter kopyalama 
	while(*(str2++) = *(str1++)); 
	
	cout<<"Ilk string: "<<text1<<endl;; 
	cout<<"2. string: "<<text2<<endl; 
	
return 0; 
} 
