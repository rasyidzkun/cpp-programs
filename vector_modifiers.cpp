#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v1;
    v1.assign(5, 10); // fill the array with 10 five times
    for(int i = 0; i < v1.size() ; i++){
        cout << v1[i] << " ";
    }

    v1.push_back(15);
    v1.push_back(16);
    cout << "\nThe last element is\t: " << v1[v1.size() - 1]; //16

    v1.pop_back(); //delete last element

    cout << "\nThe vector elements are\t: " ;
    for(int i = 0; i < v1.size(); i++){
        cout << v1[i] << " " ; // 10 10 10 10 10 15
    }

    v1.insert(v1.begin(), 5); // insert 5 at the beginning
    cout << "\nThe first element is\t: " << v1[0]; //5

    v1.erase(v1.begin()); // remove first element
    cout << "\nThe first element is\t: " << v1[0]; //10

    v1.emplace_back(20); // insert 20 at the end
    cout << "\nThe last element is\t: " << v1[v1.size() - 1] << endl;

    for(const int& i : v1){
        cout << i << " "; // 10 10 10 10 10 15 20
    }

    vector <int> v2 = {1, 2, 3, 4, 5};

    cout << endl;
    v1.swap(v2);
    for(const int& i : v1){
        cout << i << " "; // 1 2 3 4 5
    }

    cout << endl;
    for(const int& i : v2){
        cout << i << " "; // 10 10 10 10 10 15 20
    }

    v2.clear();
    cout << "\n" << v2.size() << endl; // 0

    return 0;
}