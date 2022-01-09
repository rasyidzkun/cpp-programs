#include <iostream>
using namespace std;

int main(){
    // int array[baris][kolom / jumlah elemen];
    int arr [4][3] = {{1,2,3}, {4,5,6}, {7,8,9}, {10,11,12}};

    cout << arr[2][2] << endl; //9
    cout << arr[0][2] << endl; //3
    cout << arr[3][0] << endl; //10

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 3; j++){
            cout << "Element at index [" << i << "][" << j << "] : ";
            cout << arr[i][j] << endl;
        }
    }

    system("pause>0");
    return 0;
}