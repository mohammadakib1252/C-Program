#include <iostream>
using namespace std;

int main (){
    int number;

    cout << "enter a number" << "\n";
    cin >> number;

    while(number > 0){
        int lastdigit = number%10;
        cout << lastdigit << "\n";
        number /= 10;
    }

    return 0;
} 