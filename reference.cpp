#include <iostream>
using namespace std;

void fungsiRef(int &b){
    cout << "Nilai dari b adalah " << b << endl;
    cout << "Address dari b adalah " << &b << endl;
}

int main(){
    int a = 5;
    cout << "Nilai dari a adalah " << a << endl;
    cout << "Address dari a adalah " << &a << endl;
    cout << "==================================\n";

    fungsiRef(a);

    system("pause>0");
    return 0;
}