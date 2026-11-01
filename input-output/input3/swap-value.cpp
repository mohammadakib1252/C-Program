#include <iostream>
using namespace std;

int main() {
    int a, b, temp;

    cout <<" enter a value: " << endl;
    cin >> a;

    cout <<" enter b value: " << endl;
    cin >> b;

    temp = a;
    a=b;
    b=temp;

    cout <<" value of a: " << a << endl;
    cout <<" value of b: " << b << endl;

    return 0;
    
}