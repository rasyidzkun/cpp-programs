#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main(){

    //using standard library 
    const size_t arrSize = 10;
    array < int , arrSize > num = {2,4,6,8,10,1,3,5,7,9};

    // ascending order
    sort(num.begin(), num.end());

    for(int i = 0; i < arrSize; i++){
        cout << num[i] << " ";
    }

    cout << endl;

    // descending order
    sort(num.begin(), num.end(), greater<int>());
    for(int j = 0; j < arrSize; j++){
        cout << num[j] << " ";
    }

    cout << endl;

    // unknown size
    int arr2[] = {0, 3, 4,1,2, 2, 4, 6, 7, 8, 8, 1, 7};
    int n = sizeof(arr2) / sizeof(arr2[0]);

    sort(arr2, arr2 + n);
    for(int i = 0; i < n; i++){
        cout << arr2[i] << " ";
    }

    cout << endl;

    system("pause>0");
    return 0;
}