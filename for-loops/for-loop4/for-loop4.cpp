#include <iostream>
#include <string>
using namespace std;

int main(){
    int value, factorial = 1;

    {cout << "enter the value" << "\n";
    cin >> value;}

    for(int i=1; i<=value; i++){
        factorial *= i;
    }

        cout << "factorial=" << factorial << "\n";
    return 0;
}