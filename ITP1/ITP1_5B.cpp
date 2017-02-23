#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int a,b;
    vector<pair<int,int>> c;

    pair<int,int> buf;
    while(cin >> a >> b){
        if(a == 0 && b == 0){
            break;
        }

        buf.first = a;
        buf.second = b;

        c.push_back(buf);
    }

    for(auto k : c){
        a = k.first;
        b = k.second;

        for (int c = 0; c < a; ++c) {
            for (int d = 0; d < b; ++d) {
                if(c == 0 | c == a - 1 | d == 0 | d == b - 1){
                    cout << "#";
                }else{
                    cout << ".";
                }
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}