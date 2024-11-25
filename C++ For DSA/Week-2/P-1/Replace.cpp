#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin, s);


    string remove = "EGYPT";

    size_t pos = s.find(remove);

    while (pos != string::npos) {
        s.replace(pos, remove.length() ," ");
        pos = s.find(remove, pos +1);
    }
    cout << s << endl;








    return 0;
}