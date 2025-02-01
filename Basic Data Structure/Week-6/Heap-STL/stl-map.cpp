#include <bits/stdc++.h>

using namespace std;

int main(){
    map<string, int> mp;
    

    mp["rahe"] = 2;
    mp["moon"] = 1;

    cout << mp["rahe"] << endl;

    for(auto i = mp.begin(); i != mp.end(); i++){
        cout << i->first << " " << i->second << endl;

    }

    return 0;
}