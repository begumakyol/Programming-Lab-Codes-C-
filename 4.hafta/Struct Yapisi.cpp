#include <iostream>
#include <string.h>
using namespace std;

struct student{
	int ID;
	char name [30];
	char surname [30];
	char department [30];
	char phoneNumber [17];
	int midterm;
	int final;
};

void printStudent(student s[], int size){
	for(int i=0; i<size; i++){
	cout<<s[i].ID<<endl;
	cout<<s[i].name<<endl;
	cout<<s[i].surname<<endl;
	cout<<s[i].department<<endl;
	cout<<s[i].phoneNumber<<endl;
	cout<<s[i].midterm<<endl;
	cout<<s[i].final<<endl;
	}
}

int main(){
	
	//1.atama yöntemi
	student s[10];
	s[0].ID=12345;
	strcpy(s[0].name,"Ferhat");
	strcpy(s[0].surname,"Canbay");
	strcpy(s[0].department,"Computer Engineering");
	strcpy(s[0].phoneNumber,"+(90)5324445522");
	s[0].midterm=77;
	s[0].final=66;
	
	s[1].ID=23456;
	strcpy(s[1].name,"Begum");
	strcpy(s[1].surname,"Akyol");
	strcpy(s[1].department,"Computer Engineering");
	strcpy(s[1].phoneNumber,"+(90)5396664477");
	s[1].midterm=88;
	s[1].final=63;
	
	//her bir kayıt için tek tek cout<< yazmak yerine
	printStudent(s,2);
	
	//2.atama yöntemi
	//s[0]={"12345" , "Ferhat" , "Canbay" , "Computer Engineering" , "+(90)5324445522" , "77" , "66"};
	
	//pointer kullanarak yazdırma
	student *stu;
	stu= &s[0];
	
	cout<<stu->ID<<endl;
	cout<<stu->name<<endl;
	cout<<stu->surname<<endl;
	cout<<stu->department<<endl;
	cout<<stu->phoneNumber<<endl;
	cout<<(*stu).midterm<<endl;
	cout<<(*stu).final<<endl;
	
	return 0;
}
