#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int num;
    cin >> num;

    int buf;
    vector<int> hoge;
    for (int a = 0; a < num; ++a) {
        cin >> buf;
        hoge.push_back(buf);
    }

    sort(hoge.begin(),hoge.end(),greater<int>());

    long long int sum = 0;
    for(auto k : hoge){
        sum += k;
    }

    cout << hoge.at(num - 1) << " " << hoge.at(0) << " " << sum << endl;

}