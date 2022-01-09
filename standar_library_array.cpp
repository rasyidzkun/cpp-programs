#include <iostream>
#include <array>
using namespace std; 

int main(){
    array < int, 10 > value = {1,2,3,4,5,6,7,8,9,10};
    array < char, 3 > letter = {'a' , 'b', 'c'};
    array < int, 5 > arr;

    cout << value.size() << endl; //10
    cout << value.front() << endl; //1
    cout << value.back() << endl; //10
    cout << value.begin() << endl; // address
    
    cout << letter.empty() << endl; // 0
    cout << letter.at(2) << endl; //c

    arr.fill(0);
    for(int i : arr){
        cout << arr[i] << " " ; // 0 0 0 0 0
    }

    system("pause>0");
    return 0;
}