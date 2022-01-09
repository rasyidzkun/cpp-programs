#include <iostream>
using namespace std;

void fungsiPtr(int* b){
    cout << "Address dari b adalah " << b << endl;
    cout << "Nilai dari b adalah " << *b << endl; // dereferencing
}

void kuadrat(int* valPtr){
    *valPtr = (*valPtr) * (*valPtr);
}

int main(){
    int a = 5;
    int x = 6;
    cout << "Address dari a adalah " << &a << endl;
    cout << "Nilai dari a adalah " << a << endl;
    cout << "==================================\n";

    fungsiPtr(&a); // fungsi dengan input pointer
    kuadrat(&x);

    cout << "==================================\n";
    cout << "Nilai kuadrat dari x adalah " << x << endl;

    system("pause>0");
    return 0;
}