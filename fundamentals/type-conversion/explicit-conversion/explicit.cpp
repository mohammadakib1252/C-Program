#include <iostream>
using namespace std;

int main (){
     double d = 189.98;
     int a = (int) d; 

     cout <<"type of d :" << typeid (d).name() << endl;
     cout <<"type of a :" << typeid (a).name() << endl;

    cout<< a;
    return 0;
}