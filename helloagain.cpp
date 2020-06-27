#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    cout << "Hello World" << endl;

    const double PI = 3.1515926535;

    char myGrade = 'A';

    bool isHappy = true;

    int myAge = 25;

    float favNum = 3.141592;

    double otherfavNum = 1.6180339887;

    cout << "Favorite Number" << favNum << endl;

    /*
    Other types include
    short int : at least 16 bits
    long int : at least 32 bits
    long long int : at least 64 bits
    unsigned int same size as signed version
    long double : not less than double
    */

    cout << "Size of int in bytes " << sizeof(myAge) << endl;

    // biggest integer we can have, go one over, then it becomes a negative number
    int largestInt = 2147483647;

    cout << "Largest int " << largestInt << endl;

    // arithmetic
    cout << "5 + 2 = " << 5 + 2 << endl;
    cout << "5 - 2 = " << 5 - 2 << endl;
    cout << "5 * 2 = " << 5 * 2 << endl;
    cout << "5 / 2 = " << 5 / 2 << endl;
    cout << "5 % 2 = " << 5 % 2 << endl;
    printf("\n");
    // increments and decrements
    int five = 5;
    cout << "5++ = " << five++ << endl;
    cout << "++5 = " << ++five << endl;

    cout << "5-- = " << five-- << endl;
    cout << "--5 = " << --five << endl;

    return(0);
}
