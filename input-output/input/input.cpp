#include <iostream>
using namespace std;

int main (){
    int a, b, c, sum, avg ;

    cout << "enter three numbers: " << endl;
    cin >> a >> b >> c;

    sum = a+b+c;
    avg = sum/3;

    cout << " average: " << avg << endl;
    return 0;
}