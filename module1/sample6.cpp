/******************************************************************************
Student Info 

Name
Age
Grade
Section
Enroll?

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    
    string name;
    int age;
    double grade;
    char section;
    bool enrolled;
    
    cout << "Enter Name: "; //hadji tejuco 
    //cin >> name;
    getline(cin, name);
    
    cout << "Enter Age: ";
    cin >> age;
    
    cout << "Enter grade: ";
    cin >> grade;
    
    cout << "Enter section: ";
    cin >> section;
    
    cout << "Enter enrollment status (1=Yes, 0=No): ";
    cin >> enrolled;
    
    cout << "\n--Sudent Profile--\n";
    cout << "Name " << name << endl;
    cout << "Age " << age << endl;
    cout << "Grade " << grade << endl;
    cout << "Section " << section << endl;    
    cout << "Enrolled " << enrolled << endl;

    return 0;
}
