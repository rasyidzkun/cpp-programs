#include <iostream>
using namespace std;

void reverse(const string&);

int main(){
    string str;
    cout << "Enter a string : " ;
    getline(cin, str);

    reverse(str);

    system("pause>0");
    return 0;
}

void reverse(const string& str){
    size_t numOfChars = str.size();

    if(numOfChars == 1){
        cout << str << endl;
    }else {
        cout << str[numOfChars - 1];
        reverse(str.substr(0, numOfChars - 1));
    }
}