#include <iostream>
#include <string.h>

using namespace std;

typedef struct {char name[30]; char author[20]; int page; int qnty; int borrowed;} book; 
//struct book {char name[30]; char author[20]; int page; int qnty; int borrowed;}; bu þekilde de yazabilirdik. aynýsý.

int menu();
void printBook(book a[],int i);
void findAuthor(book a[], char author [20]);
void printAvailableBooks(book a[]);
void findUsingPageNumber(book a[],int n);
int borrow(book a[],char bookName[30]);
int countBooks(book a[]);
void findAndPrintBook(book a[], char name [30]);

int main(){
	
	cout << "### ANA MENU ###" << endl;
	cout << "1- Numarasi girilen kitap hakkinda bilgi almak icin seciniz." << endl;
	cout << "2- Adi girilen kitap hakkinda bilgi almak icin seciniz." << endl;
	cout << "3- Odunc alinabilecek kitaplari goruntulemek icin seciniz." << endl;
	cout << "4- Kitap odunc almak icin seciniz."<< endl;
	cout << "5- Belirlenen maksimum sayfa sayisina gore kitaplari goruntulemek icin seciniz." << endl;
	cout << "6- Kutuphanede bulunan toplam kitap sayisini goruntulemek icin seciniz." << endl;
	cout << "7- Yazara ait kitaplari goruntulemek icin seciniz." << endl;
	cout << "8- Cikis yapmak icin seciniz." << endl;
	cout << endl;
		
 	int i;
 	book b[10];
 	
	for(i=0;i<10;i++){
 		b[i].qnty=10;
 		b[i].borrowed=0;
	}
 
	 strcpy(b[0].author,"Dostoyevski");
	 strcpy(b[0].name,"Suc ve Ceza");
	 b[0].page=500;
	
	 strcpy(b[1].name,"Kumarbaz");
	 strcpy(b[1].author,"Dostoyevski");
	 b[1].page=400;
	 
	 strcpy(b[2].name,"Savas ve Baris");
	 strcpy(b[2].author,"Tolstoy");
	 b[2].page=450;
	 
	 strcpy(b[3].name,"Haci Murat");
	 strcpy(b[3].author,"Tolstoy");
	 b[3].page=550;
	 
	 strcpy(b[4].name,"Vadideki Zambak");
	 strcpy(b[4].author,"Balzac");
	 b[4].page=455;
	 
	 strcpy(b[5].name,"Sefiller");
	 strcpy(b[5].author,"Hugo");
	 b[5].page=350;
	 
	 strcpy(b[6].name,"Yuzuklerin Efendisi");
	 strcpy(b[6].author,"Tolkien");
	 b[6].page=1000;
	 
	 strcpy(b[7].name,"Rifat Ilgaz");
	 strcpy(b[7].author,"Hababam Sinifi");
	 b[7].page=333;
	 
	 strcpy(b[8].name,"Ana");
	 strcpy(b[8].author,"Gorki");
	 b[8].page=387;
	 
	 strcpy(b[9].name,"Martin Eden");
	 strcpy(b[9].author,"Jack London");
	 b[9].page=435;
	 
	
	char temp[30];
	int op;
 	op = menu();
	
	while(op != 8){
		
		switch(op){
			case 1: 
				cout << "Kitap numarasi (0'dan 9'a kadar) giriniz: "; 
				cin >> i;
				cout<<endl;
				printBook(b, i);
	 			cout << endl;
				op = menu();
	 		break;
	 		
	 		case 2:
				cout <<"Kitap adi giriniz: ";
				fflush(stdin); //cache temizleme cin.ignore();
				cin.getline(temp, 30);
				cout<<endl;		
			    findAndPrintBook(b, temp);	
				cout << endl;
				op = menu();
			break;
			
			case 3:
				printAvailableBooks(b);
				cout << endl;
				op = menu();
			break;
			
			case 4:
				cout << "Odunc alacaginiz kitabin adini giriniz: ";
				cin.ignore(); //fflush(stdin);
				cin.getline(temp, 30);
				
				i = borrow(b, temp);
				if(i == 1){
					cout << "Kitap odunc alinmistir."<<endl;
				}
				else{
					cout << "Odunc alma islemi basarisizdir." << endl;
					cout << "Girilen kitap adi hatali veya kitap mevcut degil."<<endl;
				}
				cout << endl;
				op = menu();
			break;
			
			case 5:
				cout << "Maksimum sayfa sayisi giriniz: ";
				cin >> i;
				findUsingPageNumber(b, i);
				cout << endl;
				op = menu();
			break;
			
			case 6:
				i = countBooks(b);
				cout << "Kitap sayisi: " << i << endl;
				cout << endl;
				op = menu();
			break;
			
			case 7:
				cout << "Yazar adi giriniz: ";
				fflush(stdin);
				cin.getline(temp, 30);
				findAuthor(b, temp);
				cout << endl;
				op = menu();
			break;
		}
	}

	cout <<"Cikis yapildi.";
	system("PAUSE");
 
return 0;
}


int menu(){
	int secim;
	while(!(secim > 0 && secim < 9)){
		cout << "Secim yapiniz: ";
		cin >> secim;
		cout<<endl;	
	}
return secim;
}


void printBook(book a[],int i){
 	cout<<"Kitap Adi : "<<a[i].name<<endl;
 	cout<<"Yazar Adi : "<<a[i].author<<endl;
 	cout<<"Sayfa Sayisi: "<<a[i].page<<endl;
}

void findAuthor(book a[], char author []){
	char x[30]="";
	char y[30]="";
	int i,found=0;
	strcpy(x,author);
	strupr(x);
	for(i=0;i<10;i++){
	 	strcpy(y,a[i].author);
	 	strupr(y); 
	 	if(!strcmp(x,y)){
			if(!found){ //found==0
				cout<<endl;
	 			cout<<author<<" adli yazara ait kitaplar listeleniyor."<<endl;
	 			cout<<endl;
	 		}
			found=1;
			printBook(a,i);
			cout<<endl;
	 	}
	}
	if(found==0){
 		cout<<author<<" adli yazara ait herhangi bir kitap kutuphanede bulunmamaktadir."<<endl;
 	}
}


void printAvailableBooks(book a[]){
 //Kütüphanede ödünç verilebilecek kitaplarý listeler ve kaçar adet olduklarýný ekrana basar
 	cout << "Odunc alinabilecek kitaplar listeleniyor. " << endl;
	cout << endl;
	
	for(int i = 0; i < 10; i++){
 		if(a[i].qnty > 0){
 			cout << "Kitap adi: " << a[i].name << " | " << "Kitap sayisi: " << a[i].qnty-a[i].borrowed << endl;
 		}
 	}
}


void findUsingPageNumber(book a[],int n){
 //Sayfa sayýsýna göre kitaplarý listeler. n=300 için; 300 sayfadan kýsa kitaplarý listeler.
	int i, flag = 0;
 	for(i = 0; i < 10; i++){
 		if(a[i].page < n){
 			cout << a[i].name<<"-"<<a[i].page<<" sayfa"<< endl;
 			flag = 1;
 		}
 	}
	if(flag == 0){
 		cout << n << " sayfanin altinda kitap yoktur." << endl;
 	}
}


int borrow(book a[],char bookName[30]){
 /* ödünç kitap verme fonksiyonu. 
ödünç alýnmak istenen kitap, dizide bulunur ise ve adet olarak 0'dan büyük ise 
sayýsý bir azaltýlýr ve return 1 ile sonlanýr
kitap bulunamaz ise veya adet olarak 0 adet kaldýysa return 0 ile sonlanýr.
*/
	char x[30]="";
	char y[30]="";
	int i;
	
	strcpy(x,bookName);
	strupr(x);
	for(i=0;i<10;i++){
		strcpy(y,a[i].name);
		strupr(y);
		if(!strcmp(x,y)){
			if(a[i].qnty>a[i].borrowed){
				a[i].borrowed++;
				return 1;
			}
			return 0;
		}
	}
 return 0;
}


int countBooks(book a[]){
//Kütüphanede bulunan kitap sayýsýný verir.
	int i, total=0;
 	for(i = 0; i < 10; i++){
 		total += (a[i].qnty - a[i].borrowed);
 	}
 
 return total;
}


void findAndPrintBook(book a[], char name [30]){
//Kitap ismi ile arama yapar ve kitap ile ilgili tüm bilgileri listele
	int i;
	for(i = 0; i < 10; i++){
	 	if(strcmp(strupr(name), strupr(a[i].name)) == 0){
	 		cout<<"Kitap Adi : "<<a[i].name<<endl;
	 		cout<<"Yazar Adi : "<<a[i].author<<endl;
	 		cout<<"Sayfa Sayisi: "<<a[i].page<<endl;
		}
	}
}
