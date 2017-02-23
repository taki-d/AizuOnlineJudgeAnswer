#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a,b;

    cin >> a >> b;

    int ansi = a / b;
    double ansd = 1.000000 * a / b;
    double remainder =  a % b;

    cout << ansi << " "
         << remainder << " "
         << fixed << setprecision(10) << ansd << endl;

    return 0;
}