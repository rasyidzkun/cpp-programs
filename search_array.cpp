#include <iostream>
using namespace std;

int searchArr(int arr[], int n, int answer){
    for(int i = 0; i < n; i++){
        if(arr[i] == answer)
            return i; 
    }
    return -1;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int answer = 8;

    int result = searchArr(arr, n, answer);
    (result == -1) ? cout << "Element is not present in array" : cout << "Element is present at index " << result;

    system("pause>0");
    return 0;
}