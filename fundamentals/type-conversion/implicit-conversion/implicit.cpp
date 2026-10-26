#include <iostream>
#include <typeinfo>
using namespace std;

int main(){
    // ------ int to double -------
    // int a = 28;
    // double d = a;

    // cout << "type of a : " << typeid(a).name() << endl;
    // cout << "type of d : " << typeid(d).name() << endl;

    // cout << d;

    // ------ float to double -------
    float f = 28.568;
    double d  = f;


    cout << "type of d : " << typeid(d).name() << endl;
    cout << "type of f : " << typeid(f).name() << endl;

    cout << f;

    return 0;
}