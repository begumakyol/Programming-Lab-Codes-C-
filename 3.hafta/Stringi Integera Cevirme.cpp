#include <iostream>
#include <stdlib.h>
using namespace std;

float hesapla(char islem[]){
	
	char op;
	int opIndeksi;

	for(int i=0; i<10; i++){
		if(islem[i]=='+' || islem[i]=='-' || islem[i]=='*' || islem[i]=='/'){
			op=islem[i];
			cout<<"Operator: "<<op<<endl;
			
			opIndeksi=i;
			cout<<"Operator "<<opIndeksi<<". sirada"<<endl;
			break;
		}
	}
	
	char sayi1[opIndeksi];
	char sayi2[10];
	
	for(int i=0; i<opIndeksi; i++){
		sayi1[i] = islem[i];
	}
	
	cout<<"Ilk sayi: "<<sayi1<<endl;
	
	for(int i=opIndeksi+1; i<10; i++){
		if(islem[i]!='\n'){
			sayi2[i-opIndeksi-1]=islem[i];
		}
		else
			break;
	}
	
	cout<<"Ikinci sayi: "<<sayi2<<endl;
	
	int x= atoi(sayi1);
	int y= atoi(sayi2);
	
	if(op=='+')
		return x+y;
	else if(op=='-')
		return x-y;
	else if(op=='/')
		return x/y;
	else
		return x*y;
	
}

int main(){
	char islem[10];
	
	cout<<"Bir islem giriniz: "<<endl;
	cin >>islem;
	
	int sonuc = hesapla(islem);
	cout<<"Sonuc: "<<sonuc<<endl;
	
return 0;	
}
