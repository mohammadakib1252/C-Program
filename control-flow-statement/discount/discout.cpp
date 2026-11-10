#include <iostream>
#include <string>
using namespace std;

int main(){
    int amount, sum;
    double discount, totalamount;

    cout << "enter item amount" << "\n";
    cin >> amount;

    if(amount >=0 && amount <=5000)
        discount = 0;

    else if(amount >5000 && amount <=7000)
        discount = amount*5/100;         

    else if(amount >7000 && amount <=9000)
        discount = amount*10/100;
    
    else
        discount = amount *20/100;
 
        totalamount = amount-discount;

        cout << "grand total:" << totalamount << "\n";

        return 0;

}