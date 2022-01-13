#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v1;
    for(int i = 1 ; i <= 10 ; i++){
        v1.push_back(i);
    }

    cout << "Size\t\t: " << v1.size() << endl; //10
    cout << "Capacity\t: " << v1.capacity() << endl;
    cout << "Max Size\t: " << v1.max_size() << endl;

    v1.resize(8);
    cout << "Size\t\t: " << v1.size() << endl; //8

    if(v1.empty()  == false){
        cout << "Vector is not empty"; // output
    }else {
        cout << "Vector is empty";
    }

    v1.shrink_to_fit();
    cout << "\nVector elements are: ";
    for(auto i = v1.begin(); i != v1.end(); i++){
        cout << *i << " ";
    }

    cout << endl;
    system("pause>0");
    return 0;
}