#include <iostream>

using namespace std;

int main(){

    int a[3];

    cin >> a[0] >> a[1] >> a[2];

    int temp;

    for (int c = 0; c < sizeof(a)/4; ++c) {
        for (int b = 0; b < sizeof(a)/4; ++b) {
            if(a[c] < a[b]){
                temp = a[c];
                a[c] = a[b];
                a[b] = temp;
            }
        }
    }

    cout << a[0] << " " << a[1] << " " << a[2] <<endl;

    return 0;

}
