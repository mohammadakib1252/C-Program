#include <iostream>
using namespace std;

int main (){
    int year;

    cout << "enter the year" << "\n";
    cin >> year;

    if(year %400 == 0){
        cout << "a leap year" << "\n";
    }
    else {
        cout << "not a leap year" << "\n";
    }
    return 0;
    
}