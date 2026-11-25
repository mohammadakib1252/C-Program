#include <iostream>
using namespace std;

int main(){
    int number;

    cout << "enter the number" << "\n";
    cin >> number;

    int i=number;
    while(i>=1){
        cout << i  << "\n";
        i--;
    }
    return 0;
}