/******************************************************************************

Math header files 
sqrt
pow 

*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double number;
    
    cout<<"Enter a number: ";
    cin >> number;
    
    cout << "Square root: " << sqrt(number) <<endl;
    cout << "Number square: " << pow(number,2);

    return 0;
}
