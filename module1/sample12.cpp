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
    int age;
    cout << "Enter age: ";
    cin >> age;
    //FAND
    bool qualified = age >= 18 && age <= 60;
    cout << boolalpha;
    cout << "Qualified " << qualified;
    

    return 0;
}
