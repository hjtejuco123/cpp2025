/******************************************************************************

Compute for the total price 
price and quantity

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    //IPO 
    double price;
    int quantity;
    
    //input
    cout << "Enter price: ";
    cin >> price;
    
    cout << "Enter quantity: ";
    cin >> quantity;

    //processdfdfdfd
    double total = price * quantity;

    //output 
    cout << "Total price: "<<total;

    return 0;
}
