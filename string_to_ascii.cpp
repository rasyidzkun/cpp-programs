#include <iostream>
using namespace std;

int main(){
    char word[32];
    int x = 0;
    cout << "Please enter the word (maximum 32 characters ): ";
    cin >> word;

    while(word[x] != '\0'){
        cout << int(word[x]);
        x++;
    };

    system("pause>0");
    return 0;
}