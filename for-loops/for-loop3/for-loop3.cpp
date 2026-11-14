#include <iostream>
#include <string>
using namespace std;

int main (){
    int value, sum=0;

    {cout << "enter the number" << "\n";
    cin >> value; }

    for(int i=1; i<=value; i++){
        sum += i;}

    cout << "sum=" << sum <<  "\n";
    
    return 0;
    }