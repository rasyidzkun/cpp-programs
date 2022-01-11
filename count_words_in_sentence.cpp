#include <iostream>
using namespace std;

int main(){
    char str[100];

    cout << "Enter a string\t\t: " ;
    cin.getline(str, 100);

    int words = 0;

    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == ' '){
            words++;
        }
    }
    
    cout << "The number of words\t: " << words+1 << endl;

    system("pause>0");
    return 0;
}