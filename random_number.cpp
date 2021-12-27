#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    int batasAkhir, jumlahPerulangan;
    cout << "Masukkan batas akhir : " ;
    cin >> batasAkhir;

    cout << "Masukkan banyaknya jumlah perulangan : ";
    cin >> jumlahPerulangan;

    srand(time(0));
    for(int i = 1; i <= jumlahPerulangan; i++){
        cout << (rand() % batasAkhir) + 1 << endl;
    }

    system("pause>0");
    return 0;
}