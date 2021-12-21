#include <iostream>
using namespace std;

int main(){
    int n, pre, next, last;
    cout << "How many numbers of fibonacci series do you want to print : " ;
    cin >> n;

    pre = 0;
    next = 1;
    last = pre + next;

    while(n > 0){
        cout << pre << "\n";
        pre = next;
        next = last;
        last = pre + next;
        n--;
    }
    system("pause>0");
    return 0;
}