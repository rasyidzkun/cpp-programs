#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float number, result;

    cout << "Enter any number\t: ";
    cin >> number ;

    result = cbrt(number);
    cout << "Cube root of " << number << " is\t: " << result;

    system("pause>0");
    return 0;
}