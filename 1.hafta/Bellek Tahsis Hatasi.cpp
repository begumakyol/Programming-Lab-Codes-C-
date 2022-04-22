#include <iostream> 
#include <stdlib.h> // exit() fonksiyonu i�in 

 using namespace std; 
 
int main(void){ 
  
	int *ip, id; 
 	ip = new int[5]; // 5 boyutlu int dizi b�y�kl���nde bellek tahsis eder. 
 	
 	if (!ip){ 
		cout << "Bellek tahsis hatas�!";    
		exit(1); // Program� sona erdirir. 
	} 
	
	for (id=0; id<5; id++){
		ip[id] = (id+1) * (id+1);
	}
	
	for (id=0; id<5; id++){ 
		cout << &ip[id] << "Bellek adresindeki deger: " << ip[id] << endl;
	} 

	delete [] ip; 
   
return 0; 
} 
 

 
