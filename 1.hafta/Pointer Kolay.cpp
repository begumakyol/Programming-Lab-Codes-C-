#include <iostream> 

using namespace std; 

int main(){ 

	int dizi[5]; 
	int *ptr=dizi;

	cout<<"Boslukla ayrilmis 5 ayri sayi girin: "; 

	cin>>*ptr>>*(ptr+1)>>*(ptr+2)>>*(ptr+3)>>*(ptr+4); 

	cout<<"Girdiginiz sayilarin tersten siralamasi: "<<endl; 
		
	for(int i = 4; i >= 0 ; i--){
		cout<<*(ptr+i)<<endl;
	}

return 0; 

} 
