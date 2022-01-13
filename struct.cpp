#include <iostream>
using namespace std;

struct Mahasiswa{
    string nama;
    int npm;
    string prodi;
};

int main(){
    struct Mahasiswa mahasiswa;

    cout << "Nama\t\t:";
    getline(cin, mahasiswa.nama);

    cout << "NPM\t\t:";
    cin >> mahasiswa.npm ;

    cout << "Program Studi\t:";
    cin.ignore();
    getline(cin, mahasiswa.prodi);

    cout << "Selamat datang " << mahasiswa.nama << " dengan NPM " << mahasiswa.npm << " dari program studi " << mahasiswa.prodi << endl;

    system("pause>0");
    return 0;
}