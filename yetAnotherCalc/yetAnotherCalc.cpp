// yetAnotherCalc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    float num1, numb2;
    char operation;
    cout << "Calculate!" << endl;
    cin >> num1 >> operation >> numb2;
    //Switch cae statement
    switch (operation) {
    case'-':cout << num1 << operation << numb2 << "=" << num1 - numb2; break;
    case'+':cout << num1 << operation << numb2 << "=" << num1 + numb2; break;
    case'/':cout << num1 << operation << numb2 << "=" << num1 / numb2; break;
    case'*':cout << num1 << operation << numb2 << "=" << num1 * numb2; break;
    case'%':
        bool isnum1int, isnumb2int;
        isnum1int=((int)num1 == num1);
        isnumb2int = ((int)numb2 == numb2);

        if (isnum1int && isnumb2int) {
            cout << num1 << operation << numb2 << "=" << (int)num1 % (int)numb2; break;
        }
        else
            cout << "Not a valid operation.";
        break;
    }


    system("pause>0");
}
