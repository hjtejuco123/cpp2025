/*
  this is a multi line comment   
  #include <iostream> - cin and cout 
*/

#include <iostream>
using namespace std;    //cout or cin | std::cout std::cin
int main()
{
    //input 
    int firstNumber;
    int secondNumber;
    
    cout << "Enter first number: ";
    cin >> firstNumber;
    
    cout << "Enter second number: ";
    cin >> secondNumber;
    
    //    cout << "You entered " << firstNumber << " and " << secondNumber;
    cout << "You entered " 
         << firstNumber 
         << " and " 
         << secondNumber;
    
    return 0;
}
