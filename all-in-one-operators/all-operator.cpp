#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

int main (){

    int ticketCount;
    double ticketPrice;
    int popCornCount;
    double popcornprice;
    bool isMember;
    double ticketTotal;
    double snackTotal;
    double grandTotal;
    double discount;
    double finalBill;
    double averageTicketPrice;
    bool isGroupboking;
    bool isPremiumBooking;
    

    cout << "number of movie tickets: " << endl; 
    cin >>  ticketCount;

    cout << "price of one movie ticket: " << endl;
    cin >> ticketPrice;

    cout << "number of popcorn boxes: " << endl;
    cin >> popCornCount;

    cout << "price of one popcorn box: " << endl;
    cin >> popcornprice;

    cout << "membership status: " << endl;
    cin >> isMember;


    ticketTotal = ticketCount * ticketPrice;
    snackTotal = popCornCount * popcornprice;
    grandTotal = ticketTotal + snackTotal;

    discount = (isMember * ticketTotal * 10)/100; 
    finalBill = ticketTotal - discount + snackTotal;

    int alt = ticketCount;
    double mainTC = alt;



    averageTicketPrice = ticketTotal / mainTC;

    isGroupboking = 5<= ticketCount;
    
    isPremiumBooking = isMember ||( 3<=  ticketCount && 150<=grandTotal);

    cout << "total ticket cost: " << ticketTotal << endl;
    cout << "total snack cost: " << snackTotal << endl;
    cout << "grand total before discount: " << grandTotal << endl;
    cout << "discount amount: " << discount << endl;
    cout << "final bill: " << finalBill << endl;
    cout << "average ticket price:" <<  averageTicketPrice << endl;
    cout << "group booking status: " <<  isGroupboking << endl;
    cout << "premium booking status: " <<  isPremiumBooking << endl;

    return 0;

}