#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
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

// 12345:Ferhat:Canbay:Computer Engineering:+(90)5325554455:78:66

int main(){ 
	
	cout<<"Aralarina ':' koyarak ogrenciye ait ID, ad, soyad, bolum, telefon numarasi, vize notu ve final notu giriniz: "<<endl;

	string s;
	getline(cin,s);
	
	int index1 = s.find(":"); // : üst üsteyi bulduðu an index1 e vericek.
	string s1 = s.substr(0,index1); // s.substr(index1) ile de index1e kadar olan kýsmý kesiyoruz.
	
	int index2 = s.find(":", index1+1); // Ýlk bulduðumuz : dan 1 sonradan baþlýyor aramaya
	string s2 = s.substr(index1+1,index2-index1-1); //12-5-1=6 // saðdaki taraf ne kadar alýcaðýmýzý buluyor.

	int index3 = s.find(":", index2+1);
	string s3 = s.substr(index2+1,index3-index2-1);
	
	int index4 = s.find(":", index3+1);
	string s4 = s.substr(index3+1,index4-index3-1);
	
	int index5 = s.find(":", index4+1);
	string s5 = s.substr(index4+1,index5-index4-1);
	
	int index6 = s.find(":", index5+1);
	string s6 = s.substr(index5+1,index6-index5-1);
	
	string s7 = s.substr(index6+1,2);
	
	cout<<index1<<endl<<index2<<endl<<index3<<endl<<index4<<endl<<index5<<index6<<endl;
	cout<<s1<<endl<<s2<<endl<<s3<<endl<<s4<<endl<<s5<<endl<<s6<<endl<<s7<<endl;
	
return 0;
}
