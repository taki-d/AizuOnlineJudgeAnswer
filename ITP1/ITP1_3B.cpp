#include <iostream>
#include <vector>

using namespace std;

int main(){
	
    vector<int> a;
    
    int buf;
    while(cin >> buf){
        
        if(buf == 0){
            break;
        }
        
        a.push_back(buf);
        
    }
	
    int num = 1;
    for(auto ai : a){
        cout << "Case " << num << ": " << ai << endl;
    	++num;
    }
    
    return 0;
}
