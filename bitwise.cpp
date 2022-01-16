#include <iostream>
#include <bitset>
using namespace std;

void printBinary(unsigned short value, string name){
    cout << name << " = " <<  bitset<8>(value) << endl;
}

int main(){
    unsigned short a = 6;
    unsigned short b = 10;
    unsigned short c;

    cout << "& = Bitwise AND " << endl;
    c = a & b;
    printBinary(a, "a");
    printBinary(b, "b");
    printBinary(c, "c");

    cout << "\n| = Bitwise OR " << endl;
    c = a | b;
    printBinary(a, "a");
    printBinary(b, "b");
    printBinary(c, "c");

    cout << "\n^ = Bitwise XOR " << endl;
    c = a ^ b;
    printBinary(a, "a");
    printBinary(b, "b");
    printBinary(c, "c");

    cout << "\n~ = Bitwise NOT " << endl;
    c = ~ a;
    printBinary(a, "a");
    printBinary(c, "c");

    cout << "\n<< = Bitwise SHIFT LEFT " << endl;
    c = a << 2;
    printBinary(a, "a");
    printBinary(c, "c");
    cout << "c = " << c <<endl;

    cout << "\n>> = Bitwise SHIFT RIGHT " << endl;
    c = a >> 1;
    printBinary(a, "a");
    printBinary(c, "c");
    cout << "c = " << c << endl;

    system("pause>0");
    return 0;
}