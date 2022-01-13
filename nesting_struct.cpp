#include <iostream>
using namespace std;

struct Mahasiswa {
    string nama;
    string prodi;
};

struct Biodata {
    string alamat;
    int tanggal_lahir;

    struct Mahasiswa mhs1;
    struct Mahasiswa mhs2;
};

int main(){
    struct Mahasiswa mahasiswa_1, mahasiswa_2;
    struct Biodata bio1, bio2;

    mahasiswa_1.nama = "Ar Rasyid";
    mahasiswa_1.prodi = "Teknik Informatika";

    mahasiswa_2.nama = "Kucing Menangis";
    mahasiswa_2.prodi = "Kekucingan";

    bio1.alamat = "Trenggalek";
    bio1.tanggal_lahir = 24;
    bio1.mhs1 = mahasiswa_1;

    bio2.alamat = "Trenggalek";
    bio2.tanggal_lahir = 1;
    bio2.mhs2 = mahasiswa_2;

    cout << bio1.mhs1.nama << endl;
    cout << bio2.mhs2.nama << endl;

    system("pause>0");
    return 0;
}