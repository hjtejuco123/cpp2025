/******************************************************************************

Global and Local Variables

*******************************************************************************/
#include <iostream>
// #define PI 3.14159   //constant 
using namespace std;
//global variable 
int globalNumber = 100; 

//main function 
int main() 
{
    int localNumber = 50;
    int number(10);  // constructor-style init int number = 10 
    double price(99.50);
    double radius(5);
    const double PI = 3.14159; //read-only 
    
    cout << "Global Variable: " << globalNumber << endl;
    cout << "Local Variable: " << localNumber << endl;
    cout << "Number: " << number << endl;
    cout << "Price : " << price << endl;
    
    // PI = 10; error: assignment of read-only variable ‘PI’
    double area = PI * radius * radius;
    cout << "Area " << area;
    

    return 0;
}
