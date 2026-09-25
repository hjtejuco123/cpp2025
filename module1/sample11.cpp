/******************************************************************************
p       q          p && q       p || q          !p    

                    FAND         TOR        T   F     
                                            F   T  
T       T           T            T 
T       F           F            T     
F       T           F            T     
F       F           F            F 

0 - false 
1 - true 


*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b; 
    cout << boolalpha;
    cout << "a == b " << (a == b) <<endl; 
    cout << "a != b " << (a!=b)<<endl; 
    cout << "a > b " << (a>b)<<endl; 
    cout << "a < b " << (a<b)<<endl; 
    

    return 0;
}
