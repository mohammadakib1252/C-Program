#include <iostream>
#include <string>
using namespace std;

int main() {
    char ch;

    cout << "enter the alphabet" << "\n";
    cin >> ch;

    switch(ch){

    case 'a' : {
         cout << "vowel" << "\n";
         break;
    }     
    case 'e' : {
         cout << "vowel" << "\n";
         break;
    }
    case 'i' : {
        cout << "vowel" << "\n";
        break;
    }
    case 'o' : {
        cout << "vowel" << "\n";
        break;
    }
    case 'u' : {
        cout << "vowels" << "\n";
        break;
    }
    default :
        cout << "consonant" << "\n";
    }
    return 0;
}