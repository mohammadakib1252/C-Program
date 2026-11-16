#include <iostream>
#include <string>
using namespace std;

int main (){
    int value;
    int c = 0;

    cout << "enter the value" << endl;
    cin >> value;

    for(int i=1; i<=value; i++){
        if(value % i==0){
            c++;
        }       
        cout << (c==2 ?  "it is prime number": "it is not prime number");
        
    }   
    return 0;
}

