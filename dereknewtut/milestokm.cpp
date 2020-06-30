#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <sstream>
#include <limits>

using namespace std;

int main()
{
    string sQuestion ("Enter Number of miles: ");

    string sMiles;

    cout << sQuestion;
    getline(cin, sMiles);


    int nMiles = stoi(sMiles);
    float km = nMiles * 1.60934;

    printf("You provided %d miles and that is  %.4f kilometers\n", nMiles, km);


    return(0);
}
