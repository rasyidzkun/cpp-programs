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

    cout << endl;
    cout << "Pattern 4 \n";
    for(int i = 1; i <= n; i++){
        for(int j = 1; j < i; j++){
            cout << " ";
        }
        for(int k = n; k >= i; k--){
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;
    cout << "Pattern 5\n";
    for(int i = 1; i <=n ; i++){
        for(int j = n; j > i; j--){
            cout << " ";
        }
        for(int k = 1; k <= i; k++){
            cout << "*";
        }
        cout << endl; 
    }

    system("pause>0");
    return 0;
}