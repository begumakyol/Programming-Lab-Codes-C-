// Strings.cpp : Bu dosya 'main' i�levi i�eriyor. Program y�r�tme orada ba�lay�p biter.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1 = "Can";
    string ad = "Ali";
    string soyad = "YILMAZ";
    string tamAd = ad + " " + soyad;
    
    cout << tamAd << endl;

    s1.swap(ad);
    cout << "s1 : " << s1 << endl;
    cout << "ad : " << ad << endl;

    //append: parametre olarak string al�r ve hangi string i�in �al��t�r�ld�ysa sonuna bu parametreyi ekler. 
    //Alt sat�rdaki kullan�mda, s1=s1+" "+soyad; ile ayn� i�i yapar.
    //Performans olarak append() daha h�zl� �al���r.
    s1.append(" " + soyad); 
    cout << s1 << endl;

    s1.append(" geldi.");
    cout << s1 << endl;

    //txt.length() ve txt.size() ayn� g�revi yapar.
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "Stringin uzunlugu : " << txt.length()<<endl;
    cout << "Stringin uzunlugu : " << txt.size() << endl;
    cout << "Stringin kapasitesi : " << txt.capacity() << endl;
    cout << "Stringin max kapasitesi : " << txt.max_size() << endl;

    s1[1] = 'o';
    cout << "s1 : " << s1<<endl;

    string cumle;
    cumle.reserve(200); 
    //reserve() : string i�in memory'de yer ay�r�r. 
    //�zellikle dosyadan okuma gibi i�lemlerde her okumadan sonra tekrar tekrar string'in boyutunu artt�rmak yerine 
    //dosya boyutunu ilk ba�ta okuyup string'e en ba�tan gerekli yeri ay�r�r. 
    getline(cin, cumle);
    cout << "Kullanici tarafindan girilen cumle : " << cumle << endl;

    cumle.clear(); //stringi bo� hale getirir.
    cout << "Cumle artik bos : " << cumle << endl;

    //empty() : string bo� ise 1 de�ilse 0 d�ner
    if (cumle.empty())
        cout << "Cumlede herhangi bir karakter bulunmamakta" << endl;
    if (!s1.empty())
        cout << "s1 bos degil : " << s1 << endl;

    string str(100, 'x');
    cout << "str : " << str << endl;
    cout << "1- str\'nin : kapasitesi : " << str.capacity() << endl;
    str.resize(10);
    cout << "str : " << str << endl;
    cout << "2- str\'nin : kapasitesi : " << str.capacity() << endl;
    str.shrink_to_fit();
    cout << "3- str\'nin : kapasitesi : " << str.capacity() << endl;

    str = "I like to code in C";
    cout << str << endl;

    unsigned sz = str.size();

    str.resize(sz + 2, '+'); //resize() : tekrar boyutland�r�r
    cout << str << endl;

    str.resize(14);
    cout << str << endl;

    str.back() = 'E';   //str.back() : stringin son karakterine eri�im sa�lar
    cout << str << endl;

    str.back() = 'i';   //str.back() : stringin son karakterine eri�im sa�lar
    cout << str << endl;

    str.pop_back();     //stringin son karakterini siler
    cout << str << endl;

    str.push_back('e'); //stringin sonuna karakter ekler
    cout << str << endl;

    //REPLACE KULLANIMI
    cout << "\nREPLACE Ornekleri:" << endl;
    string base = "this is a test string.";
    string str2 = "n example";
    string str3 = "sample phrase";
    string str4 = "useful.";

    
    // replace(baslangicIndeksi, ka� karakter al�nacak, al�nan stringin yerine konacak string)
    // s1 stringinin 1 nolu indeksinden itibaren 2 karakteri al�p yerine 99 koyan kod:
    // s1="0123456789"; s1.replace(1,2,"99");   -->s1="0993456789" 
    // Pozisyonlar� kullanarak:         0123456789*123456789*12345
    str = base;                  // "this is a test string."
    str.replace(9, 5, str2);            // "this is an example string." (1)
    cout << str << endl;
    str.replace(19, 6, str3, 7, 6);     // "this is an example phrase." (2)
    cout << str << endl;
    str.replace(8, 10, "just a");       // "this is just a phrase."     (3)
    cout << str << endl;
    str.replace(8, 6, "a shorty", 7);   // "this is a short phrase."    (4)
    cout << str << endl;
    str.replace(22, 1, 3, '!');         // "this is a short phrase!!!"  (5)
    cout << str << endl;

    cout << "\nREPLACE Ornekleri (Iterator kullanarak):" << endl;
    // iterator kullanarak:                                               0123456789*123456789*
    str.replace(str.begin(), str.end() - 3, str3);                       // "sample phrase!!!"      (1)
    cout << str << endl;
    str.replace(str.begin(), str.begin() + 6, "replace");                // "replace phrase!!!"     (3)
    cout << str << endl;
    str.replace(str.begin() + 8, str.begin() + 14, "is coolness", 7);    // "replace is cool!!!"    (4)
    cout << str << endl;
    str.replace(str.begin() + 12, str.end() - 4, 4, 'o');                // "replace is cooool!!!"  (5)
    cout << str << endl;
    str.replace(str.begin() + 11, str.end(), str4.begin(), str4.end());  // "replace is useful."    (6)
    cout << str << endl;


    //ERASE KULLANIMI
    cout << "\nERASE Ornekleri:" << endl;
    str = "This is an example sentence.";

    cout << str << endl;
    // "This is an example sentence."
    str.erase(10, 8);                           // 10. indeksten itibaren 8 karakter sil (pozisyon de�eri kullanarak)
    cout << str << endl;
    // "This is an sentence."
    str.erase(str.begin() + 9);                 // Ba�lang��tan itibaren 9. karakteri sil
    cout << str << endl;
    // "This is a sentence."
    str.erase(str.begin() + 5, str.end() - 9);  // �lk 5 karakter ile son 9 karakter aras�n� sil (iterat�r kullanarak)
    cout << str << endl;
    
    
    // INSERT KULLANIMI:
    cout << "\nINSERT Ornekleri:" << endl;
    str = "to be question";
    str2 = "the ";
    str3 = "or not to be";
    string::iterator it;
        
    str.insert(6, str2);                   // to be (the )question  -> 6. karakterden sonra araya str2'yi ekledi
    cout << str << endl;
    str.insert(6, str3, 3, 4);             // to be (not )the question  -> 6. karakterden sonra str3'�n 3. karakterinden itibaren 4 karakterini ekledi
    cout << str << endl;
    str.insert(10, "that is cool", 8);     // to be not (that is )the question -> 10. karakterden sonra "that is cool" stringinin ilk 8 karakterini ekledi
    cout << str << endl;
    str.insert(10, "to be ");              // to be not (to be )that is the question -> 10. karakterden sonra "to be " stringini ekledi 
    cout << str << endl;
    str.insert(15, 1, ':');                // to be not to be(:) that is the question -> 15. karakterden sonra 1 karakter ekledi ve karakter ':' �eklinde
    cout << str << endl;
    it = str.insert(str.begin() + 5, ','); // to be(,) not to be: that is the question -> ba�lang�� + 5'ten sonra ',' ekledi ve iterat�r it, virg�lden �nceki konumunu ald�
    cout << str << endl;
    str.insert(str.end(), 3, '.');         // to be, not to be: that is the question(...) -> stringin sonuna 3 adet '.' ekledi
    cout << str << endl;
    str.insert(it + 2, str3.begin(), str3.begin() + 3); // (or )  -> iterat�r�n konumu+2 den sonra str3'�n ba�lang�c�ndan itibaren 3 karakter ald�
    cout << str << endl;


    // ASSIGN KULLANIMI:
    cout << "\nASSIGN Ornekleri:" << endl;
    
    base = "The quick brown fox jumps over a lazy dog.";

    str.assign(base);
    cout << str << endl;

    str.assign(base, 10, 9);
    cout << str << endl;         // "brown fox"

    str.assign("pangrams are cool", 7);
    cout << str << endl;         // "pangram"

    str.assign("c-string");
    cout << str << endl;         // "c-string"

    str.assign(10, '*');
    cout << str << endl;         // "**********"


    str.assign(base.begin() + 16, base.end() - 12);
    std::cout << str << endl;         // "fox jumps over"

    // COPY ORNEGI
    cout << "\nCOPY ORNEGI:" << endl;

    char buffer[20];
    str="Test string...";
    size_t length = str.copy(buffer, 6, 5); //size_t -> unsigned long int olarak d���nebilirsiniz.
    buffer[length] = '\0';
    cout << "\nbuffer contains: " << buffer << endl;


    // COMPARE KULLANIMI:
    cout << "\n COMPARE ORNEKLERI" << endl;

    string str1 = "green apple";
    str2 = "red apple";

    if (str1.compare(str2) != 0)
        cout << str1 << " is not " << str2 << '\n';

    if (str1.compare(6, 5, "apple") == 0)
        cout << "still, " << str1 << " is an apple\n";

    if (str2.compare(str2.size() - 5, 5, "apple") == 0)
        cout << "and " << str2 << " is also an apple\n";

    if (str1.compare(6, 5, str2, 4, 5) == 0)
        cout << "therefore, both are apples\n";

    // SUBSTR KULLANIMI:
    cout << "\n SUBSTR ORNEKLERI" << endl;

    str = "We think in generalities, but we live in details.";
    // (quoting Alfred N. Whitehead)
    cout << "Stringin ilk hali : \n" << str << endl;

    str2 = str.substr(3, 5);     // "think"
    cout << str2 << endl;

    size_t pos = str.find("live");      // position of "live" in str
    str3 = str.substr(pos);      // get from "live" to the end

    cout << str3 << endl;

    cout << str2 << ' ' << str3 << '\n';

    //////////// FIND KULLANIMLARI ///////////////////////

    // FIND

    cout << "\nFIND ORNEKLERI\n";

    str = "There are two needles in this haystack with needles.";
    str2 = "needle";

   
    int found = str.find(str2);
    if (found != std::string::npos)
        cout << "first 'needle' found at: " << found << '\n';

    found = str.find("needles are small", found + 1, 6);
    if (found != std::string::npos)
        cout << "second 'needle' found at: " << found << '\n';

    found = str.find("haystack");
    if (found != std::string::npos)
        cout << "'haystack' also found at: " << found << '\n';

    found = str.find('.');
    if (found != std::string::npos)
        cout << "Period found at: " << found << '\n';

    // let's replace the first needle:
    str.replace(str.find(str2), str2.length(), "preposition");
    cout << str << '\n';

    //RFIND
    cout << "\nRFIND ORNEKLERI\n";

    str = "The sixth sick sheik's sixth sheep's sick.";
    string key = "sixth";

    found = str.rfind(key);
    if (found != std::string::npos)
        str.replace(found, key.length(), "seventh");

    std::cout << str << '\n';

    //FIND FIRST OF
    cout << "\nFIND FIRST OF ORNEKLERI\n";
    str = "Please, replace the vowels in this sentence by asterisks.";
    found = str.find_first_of("aeiou");
    while (found != std::string::npos)
    {
        str[found] = '*';
        found = str.find_first_of("aeiou", found + 1);
    }

    std::cout << str << '\n';

    //FIND LAST OF
    cout << "\nFIND LAST OF ORNEGI:\n";

    str1 = "/usr/bin/man";
    str2 = "c:\\windows\\winhelp.exe";
    
    cout << "Splitting: " << str1 << '\n';
    found = str1.find_last_of("/\\");
    cout << " path: " << str1.substr(0, found) << '\n';
    cout << " file: " << str1.substr(found + 1) << '\n';

    cout << "Splitting: " << str2 << '\n';
    found = str2.find_last_of("/\\");
    cout << " path: " << str2.substr(0, found) << '\n';
    cout << " file: " << str2.substr(found + 1) << '\n';




    //find_first_not_of() KULLANIMI
    //str.find_first_not_of(str1) -> str'yi ba�tan sona do�ru tarar, 
    //str1'in i�inde olan karakterlerden biriyle e�le�meyen ilk karakterin indeksini d�ner 
    //alttaki �rnekte alfabetik olmayan ilk karakteri bulup, pozisyonun ekrana basan kod yer almaktad�r.

    cout << "\nFIND FIRST NOT OF KULLANIMI:\n";
    str="look for non-alphabetic characters...";

    found = str.find_first_not_of("abcdefghijklmnopqrstuvwxyz ");

    if (found != std::string::npos)
    {
        cout << "The first non-alphabetic character is " << str[found];
        cout << " at position " << found << '\n';
    }

    //find_last_not_of() KULLANIMI
    //str.find_last_not_of(str1) -> str'yi sondan ba�a do�ru tarar, 
    //str1'in i�inde olan karakterlerden biriyle e�le�meyen ilk karakterin indeksini d�ner 
    //alttaki �rnekte whitespaces stringindeki karakterlerden olmayan ilk karakteri bulup
    //o karakterden sonraki k�sm� silen bir kod bulunmaktad�r.
    //str i�erisinde whitespaces stringde yer almayan bir karaktere sahi de�ilse str tamamen temizleniyor

    cout << "\nFIND LAST NOT OF KULLANIMI:\n";
    str = "Please, erase trailing white-spaces   \n";
    string whitespaces(" \t\f\v\n\r");

    found = str.find_last_not_of(whitespaces);
    if (found != std::string::npos)
        str.erase(found + 1);
    else
        str.clear();            // str is all whitespace

    cout << '[' << str << "]\n";


}

// Program� �al��t�r: Ctrl + F5 veya Hata Ay�kla > Hata Ay�klamadan Ba�lat men�s�
// Programda hata ay�kla: F5 veya Hata Ay�kla > Hata Ay�klamay� Ba�lat men�s�

// Kullanmaya Ba�lama �pu�lar�: 
//   1. Dosyalar� eklemek/y�netmek i�in ��z�m Gezgini penceresini kullan�n
//   2. Kaynak denetimine ba�lanmak i�in Tak�m Gezgini penceresini kullan�n
//   3. Derleme ��kt�s�n� ve di�er iletileri g�rmek i�in ��kt� penceresini kullan�n
//   4. Hatalar� g�r�nt�lemek i�in Hata Listesi penceresini kullan�n
//   5. Yeni kod dosyalar� olu�turmak i�in Projeye Git > Yeni ��e ekle veya varolan kod dosyalar�n� projeye eklemek i�in Proje > Var Olan ��eyi Ekle ad�mlar�n� izleyin
//   6. Bu projeyi daha sonra yeniden a�mak i�in Dosya > A� > Proje'ye gidip .sln uzant�l� dosyay� se�in

