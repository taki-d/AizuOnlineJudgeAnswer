#include <iostream>
#include <vector>


using namespace std;

int main()
{
    string a,b;
    cin >> a;
    cin >> b;
    
    string r = a + a;
    
    for (int c = 0; c < a.size(); ++c) {
        if(r.substr(c,b.size()) == b ){
            cout << "Yes" << endl;
        	return 0;
        }
    }
    
    cout << "No" << endl;
    
    return 0;
}
