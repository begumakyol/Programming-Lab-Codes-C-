#include <iostream>
using namespace std;

void init(int *a, int sizeA){  //initialization: baþlangýç durumuna getirme
	for(int i = 0; i < sizeA; i++)
		a[i]=i;
}

void display(int *a, int sizeA){ //display: gösterme, oynatma.
	for(int i = 0; i < sizeA; i++)
		cout << a[i] << " ";
	cout << endl;
}

int main(){
	int userSize;
	cout << "Dizinin uzunlugunu giriniz: ";
	cin >> userSize;

	int	*b = new int[userSize]; 
	
	init(b,userSize);
	display(b,userSize);

	return 0;
}
