#include <iostream>
using namespace std;

void print(int value){
    cout << value << endl;
}

int main(){
    int a, b, c;
    a = ( b=4, print(b) , c=6, print(c) ,( b+c));
    cout << a << endl;

    system("pause>0");
    return 0;
}