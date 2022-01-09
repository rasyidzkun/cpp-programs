#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

void sortString(string&);

int main(){
    string name = "Ar rasyid sarifullah";
    sortString(name);

    system("pause>0");
    return 0;
}

void sortString(string &str){
    sort(str.begin(), str.end());
    cout << str;
}