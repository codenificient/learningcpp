
#include <iostream>

using namespace std;

int main()
{
    int badNums[5] = {4, 13, 14, 24, 34};

    cout << "The second bad number is " << badNums[1] << endl;

    char myName[9][6] = {{'C', 'h', 'r', 'i', 's', 't', 'i', 'a', 'n'},
                                       {'L', 'e', 'g', 'e', 'n', 'd'}};

     cout << "2nd Letter in 2nd array: "  << myName[1][1] << endl;

          //myName[0][0] = ' ';
          myName[0][1] = 'K';

    for (int j = 0; j < 10; j++) {
        for  (int k = 0; k < 7; k++) {
            cout << myName[j][k];
        }
    }


    return(0);
}
