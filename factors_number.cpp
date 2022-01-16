#include <iostream>
using namespace std;

int main(){
    unsigned int n;

    cout << "Enter an integer : ";
    cin >> n;
    
    cout << "Factors of " << n << " = ";
    for(int i = 1; i <= n; i++){
        if(n % 2 == 0){
            cout << i << " ";
        }
    }
    
    system("pause>0");
    return 0;
}