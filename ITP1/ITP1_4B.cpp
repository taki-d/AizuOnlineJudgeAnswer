#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double r;
    cin >> r;

    cout << fixed << setprecision(8) <<(M_PI*r*r) << " "
         << fixed << setprecision(8) << (M_PI*2*r) << endl;

}