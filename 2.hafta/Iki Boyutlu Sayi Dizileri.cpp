#include <iostream>
using namespace std;
int main(){
	
    int a[10][10];
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            a[i][j] = (i+1)*(j+1);
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
    
    cout << endl << endl;
 
    int temp;
    for(int i = 0; i < 5; i++){
    	for(int j = 0; j < 10; j++){
    		temp = a[i][j];
    		a[i][j] = a[9-i][9-j];
    		a[9-i][9-j] = temp;
    		cout << temp << "\t";
		}
		cout << endl;
	}
	
	cout << endl << endl;

	    for(int i = 0; i < 10; i++){
        	for(int j = 0; j < 10; j++){
             cout << a[i][j] << "\t";
        	}
        cout<<endl;
    	}
    	
return 0;
}
