#include <iostream>
#include <cstdlib>
#include <ctime>
/*
srand(time(NULL)) komutu C dilinde rastgele sayý üretirken her seferinde farklý sayý üretmemizi saðlar. 
Fonksiyonun rastgele sayý üretme mantýðý ise içinde bulunduðunuz zamana göre sayý üretmektir. 
time(NULL) ifadesi 1.1.1970 tarihinden bugüne dek geçen zamaný saniye cinsinden ölçer.
Bu deðer sürekli deðiþtiði için üretilen sayý sadece rand() fonksiyonu kullanýlarak üretilen 
sayýya göre daha rastgele bir deðerdir.
*/
using std::cout;
using std::endl;

int main(){
	
	srand(time(0));
	int x= rand () %10; // rand() fonksiyonu ile rastgele sayilar herhangi bir degiskene atanýr.
	int y= 10+ rand()%10;
	
	cout << "x: " << x << endl;
	cout << "y: " << y << endl;
	
	return 0;
	
}
