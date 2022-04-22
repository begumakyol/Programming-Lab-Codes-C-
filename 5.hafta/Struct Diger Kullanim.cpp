#include <iostream>
#include <string>
#include <cstring>
using namespace std;

struct MyStruct
{

    string ad;
    int sayfa;

};

int main()
{
    
    MyStruct b;

    b = { "isim", 12 };

    cout << b.ad << " " << b.sayfa;

return 0;

}
