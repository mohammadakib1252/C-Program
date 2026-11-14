#include <iostream>
#include <string>
using namespace std;

int main(){
    int value;

   { cout << "enter the value" << "\n";
    cin >> value;}

    for(int i=value; i>=1; i--){
        cout << i <<"\n";
    }

    return 0;

}