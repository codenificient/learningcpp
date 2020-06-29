#include <iostream>

using namespace std;

int main()
{
    int greetOption = 2;

    switch(greetOption) {

    case 1:
        cout << "bonjour" << endl;
        break;

   case 2:
        cout << "Hola!" << endl;
        break;

   case 3:
        cout << "Bonjorno" << endl;
        break;

   case 4:
        cout << "Gutentag!" << endl;
        break;

   default:
        cout << "Hello" << endl;
    }

    return(0);
}
