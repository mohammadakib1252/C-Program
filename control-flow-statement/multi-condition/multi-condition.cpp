#include <iostream>
#include <string>
using namespace std;

int main (){
    int a = 10, b = 30;

    if(10>30){
        cout << "line a" << "\n";
    }
    else if(20<10){
        cout << "line b" << "\n";
    }
    else if(20>30){
        cout << "line c" << "\n";    
    }else{
        cout << "last line" << "\n";
    }

    return 0;


}