#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v1;
    for(int i = 1; i <= 10; i++){
        v1.push_back(i * 10);
    }
    for(const int& i : v1){
        cout << i << " "; // 10 20 30 40 50 60 70 80 90 100
    }

    cout << endl;
    cout << v1[2] << endl; // 30
    cout << v1.at(2) << endl; //30
    cout << v1.front() << endl; //10
    cout << v1.back() << endl; // 100
    int* pos = v1.data();
    cout << *pos << endl; // 10 = first element

    system("pause>0");
    return 0;
}