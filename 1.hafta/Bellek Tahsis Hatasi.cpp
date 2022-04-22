#include <iostream> 
#include <stdlib.h> // exit() fonksiyonu için 

 using namespace std; 
 
int main(void){ 
  
	int *ip, id; 
 	ip = new int[5]; // 5 boyutlu int dizi büyüklüðünde bellek tahsis eder. 
 	
 	if (!ip){ 
		cout << "Bellek tahsis hatasý!";    
		exit(1); // Programý sona erdirir. 
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
 

 
