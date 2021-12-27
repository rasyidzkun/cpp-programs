#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n;
    cout << "Enter number of rows : ";
    cin >> n;

    cout << endl;
    cout << "Pattern 1\n";
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << setw(3) << i << " ";
        }
        cout << endl;
    }

    cout << endl;
    cout << "Pattern 2\n";
    for(int i = 1; i <= n; i++){
        for(int j = n; j >= i; j--){
            cout << setw(3) << i << " ";
        }
        cout << endl;
    }

    cout << endl;
    cout << "Pattern 3\n";
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << setw(3) << j << " ";
        }
        cout << endl;
    }

    cout << endl;
    cout << "Pattern 4\n";
    for(int i = 1; i <= n; i++){
        for(int j = n; j >= i; j--){
            cout << setw(3) << j << " ";
        }
        cout << endl;
    }

    cout << endl;
    cout << "Pattern 5\n";
    int num = 1;
    for(int i = 1 ; i <= n; i++){
        for(int j = 1; j <= i ; j++){
            cout << setw(3) << num ++ << " ";
        }
        cout << endl;
    }

    system("pause>0");
    return 0;
}