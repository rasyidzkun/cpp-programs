#include <iostream>
#include <string>
using namespace std;

int main(){
    string sentence;

    cout << "Enter a string\t: " ;
    getline(cin, sentence);

    cout << "Length of the given string is\t: " << sentence.length();

    system("pause>0");
    return 0;
}