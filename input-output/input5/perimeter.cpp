#include <iostream>
using namespace std;

int main (){
    int length, breadth, perimeter;

    cout << "enter the value of length:" << endl;
    cin >> length;

    cout << "enter the value of breadth:" << endl;
    cin >> breadth;

    perimeter = 2 * (length + breadth);

    cout << "perimeter of rectangle is:" << perimeter << endl;

    return 0;
}