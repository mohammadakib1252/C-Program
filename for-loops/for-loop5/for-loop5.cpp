#include <iostream>
#include <string>
using namespace std;

int main(){
    int value, factor =1;

    {cout << "enter the value=" << "\n";
    cin >> value;}

    for(int i=1; i<=value; i++){
        if(value %i ==0)

    cout << i << "\n";
    }

    return 0;

}