#include <iostream>
using namespace std;

int main (){
    int a, positive, negative, zero;

    cout << "enter a num:" << endl;
    cin >> a;

    if(a==0){
        cout << "zero" << endl;
    }
    else if(a>0){
        cout << "positive" << endl;
    }
    else{
        cout << "negative" << endl;
    }
    return 0; 
}