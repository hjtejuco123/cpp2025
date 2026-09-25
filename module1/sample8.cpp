/******************************************************************************
Initialization

age 18 
grade  90.5
section A 

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int age = 18;  
    double grade = 90.5;
    char section = 'A';
    int x,y,z;
    
    x = y = z = 20;   //multiple assignment 
    
    cout << "Age: " << age <<endl;
    cout << "Grade: " << grade <<endl;
    cout << "Section: "<< section << endl;
    
    //changing the value
    age = 20;
    cout << "Age: " << age <<endl;
    
    cout << "X = " << x << endl;
    cout << "Y = " << y << endl;
    cout << "Z = " << z << endl;

    return 0;
}
