#include <iostream>
#include "clsInputValidate.h"


using namespace std;


int main()
{
    system("color f3");


    cout << clsInputValidate::Is_Number_Between(5, 1, 10) << endl;
    cout << clsInputValidate::Is_Number_Between(5.5, 1.3, 10.8) << endl;  

    cout << clsInputValidate::Is_Date_Between(clsDate(), clsDate(1, 1, 2025), clsDate(28, 2, 2025)) << endl;
    cout << clsInputValidate::Is_Date_Between(clsDate(), clsDate(28, 2, 2025), clsDate(1, 1, 2025)) << endl;

    cout << "\nPlease Enter a Number:\n";
    int x = clsInputValidate::Read_Int_Number();  
    cout << "x=" << x;

    cout << "\nPlease Enter a Number between 1 and 5:\n";
    int y = clsInputValidate::Read_Int_Number_Between(1, 5); 
    cout << "y=" << y;

    cout << "\nPlease Enter a Double Number:\n";
    double a = clsInputValidate::Read_Double_Number();  
    cout << "a=" << a;

    cout << "\nPlease Enter a Double Number between 1 and 5:\n";
    double b = clsInputValidate::Read_Double_Number_Between(1, 5); 
    cout << "b=" << b;

    cout << endl << clsInputValidate::Is_Valide_Date(clsDate(35, 12, 2025)) << endl; 


    system("pause>0");
    return 0;
}