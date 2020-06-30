#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <sstream>
#include <limits>

using namespace std;


int g_iRandNum = 0;
const double PI = 3.1415962;

int main(int argc, char** argv)
{
	bool bMarried = true;

	char chMyGrade = 'A';

	unsigned short int u16Age = 43;
	short int siWeight = 180;
	int nDays = 7;
	long lBigNum = 1100000;
	float fPi = 3.14;
	double dbBigFloat = 1.11111111111111;
	long double ldPi = 3.1415962;
	auto whatWillIBe = true;

	cout << "Minimum bool " << numeric_limits<bool>::min() << "\n";
	cout << "Maximum bool " << numeric_limits<bool>::max() << "\n";

    cout << "Min unsigned short int " << numeric_limits<unsigned short int>::min() << "\n";
    cout << "Maximum unsigned short int " << numeric_limits<unsigned short int>::max() << "\n";

    cout << "Min short int " << numeric_limits<short int>::min() << "\n";
    cout << "Maximum  short int " << numeric_limits<short int>::max() << "\n";

	return(0);
}
