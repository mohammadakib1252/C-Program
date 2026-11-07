#include <iostream> 
using namespace std;

int main (){
    int a, even, odd;

    cout << "enter a number" << "\n";
    cin >> a;


    if(a%2 == 0){
        cout << "even" << "\n";
    }else{
        cout << "odd" << "\n";
    }
    
    return 0;

}
