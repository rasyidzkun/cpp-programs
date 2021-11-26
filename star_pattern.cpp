#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    cout << endl;
    cout << "Pattern 1 \n";
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;
    cout << "Pattern 2 \n";
    for(int i = 1; i <= n; i++){
        for(int j = n; j >= i; j--){
            cout << "*";
        }
        cout << endl;
    }
    
    cout << endl;
    cout << "Pattern 3 \n";
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i = 1; i <= n; i++){
        for(int j = n; j > i; j--){
            cout << "*";
        }
        cout << endl;
    }

    system("pause>0");
    return 0;
}