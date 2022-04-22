#include <iostream>
#include <string.h>
#include  <bits/stdc++.h>

// 12345:Ferhat:Canbay:Computer Engineering:+(90)5325554455:78:66
// 23456:Serhat:Canbay:Mathematic Engineering:+(90)5336669988:64:72
// 34567:Nihat:Canbay:Software Engineering:+(90)5347772233:90:55

using namespace std;

struct student{
	string ID;
	string name;
	string surname;
	string department;
	string phoneNumber;
	string midterm;
	string final;
};

void printStudent(student a[], int size){
	for(int i=0; i<size; i++){
	cout<<"ID: "<<a[i].ID<<endl;
	cout<<"AD: "<<a[i].name<<endl;
	cout<<"SOYAD: "<<a[i].surname<<endl;
	cout<<"BOLUM: "<<a[i].department<<endl;
	cout<<"TELNO: "<<a[i].phoneNumber<<endl;
	cout<<"VIZE: "<<a[i].midterm<<endl;
	cout<<"FINAL: "<<a[i].final<<endl;
	}
}

int main (){
	
	int i;
	student a[10];
	char decision;
	
	do{
		cout<<"Aralarina ':' koyarak ogrenciye ait ID, ad, soyad, bolum, telefon numarasi, vize notu ve final notu giriniz: "<<endl;
		string s;
		cin.ignore();
		//fflush(stdin);
		getline (cin,s);
		
		int index1 = s.find(":",0); // : iki nokta üst üsteyi bulduðu an index1 e vericek.
		string s1 = s.substr(0,index1); // s.substr(index1) ile de index1e kadar olan kýsmý kesiyoruz.
		
		int index2 = s.find(":", index1+1); // Ýlk bulduðumuz : dan 1 sonradan baþlýyor aramaya
		string s2 = s.substr(index1+1,index2-index1-1); // saðdaki taraf ne kadar alýcaðýmýzý buluyor.
	
		int index3 = s.find(":", index2+1);
		string s3 = s.substr(index2+1,index3-index2-1);
		
		int index4 = s.find(":", index3+1);
		string s4 = s.substr(index3+1,index4-index3-1);
		
		int index5 = s.find(":", index4+1);
		string s5 = s.substr(index4+1,index5-index4-1);
		
		int index6 = s.find(":", index5+1);
		string s6 = s.substr(index5+1,index6-index5-1);
		
		string s7 = s.substr(index6+1,5);
		
		student a[10];
		a[0].ID=s1;
		a[0].name=s2;
		a[0].surname=s3;
		a[0].department=s4;
		a[0].phoneNumber=s5;
		a[0].midterm=s6;
		a[0].final=s7;
		
		printStudent(a,1);
	
		cout<<"Ogrenci kaydina devam etmek icin D'ye, sonlandirmak icin klavyeden herhangi bir tusa basiniz."<<endl;
		cin>>decision;
		
		
	}
	while(decision=='d' || decision=='D');
	
	cout<<"Kayit islemi tamamlandi."<<endl;

return 0;
}
