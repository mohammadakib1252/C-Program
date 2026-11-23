#include <iostream>
using namespace std;

int main (){
    int num, sum = 0;

    cout << "enter some numbers= ";
    cin >> num;

    while(num > 0){
        int lastdigit = num % 10;
        sum += lastdigit;
        num /= 10;
    }

    cout << "sum= " << sum <<"\n" ;

    return 0;
}