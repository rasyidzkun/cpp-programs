#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number of rows : ";
    cin >> n;
    cout << endl;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << "*";
        }
        cout << endl;
    }

    system("pause>0");
    return 0;
}