#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> v1;
    for(int i = 1; i <= 5; i++){ // initialized vector
        v1.push_back(i);
    }

    for(const int& i : v1 ){ // printing vector
        cout << i << " ";
    }

    cout << "\nOutput of begin and end: ";
    for(auto i = v1.begin() ; i != v1.end() ; i++){
        cout << *i << " ";
    } //1 2 3 4 5
    
    cout << "\nOutput of cbegin and cend: ";
    for(auto i = v1.cbegin() ; i != v1.cend() ; i++){
        cout << *i << " ";
    } //1 2 3 4 5

    cout << "\nOutput of rbegin and rend: ";
    for(auto i = v1.rbegin(); i != v1.rend() ; i++){
        cout << *i << " ";
    } // 5 4 3 2 1

    cout << "\nOutput of crbegin and crend : ";
    for(auto i = v1.crbegin(); i != v1.crend(); i++){
        cout << *i << " ";
    } // 5 4 3 2 1
    
    cout << endl;
    system("pause>0");
    return 0;
}