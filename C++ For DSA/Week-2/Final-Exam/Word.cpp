#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    while(n--){
        string s1;
        cin >> s1;
        string s2;
        cin >> s2;



      
        size_t pos = 0;

        
        while ((pos = s1.find(s2, pos)) != string::npos) {
            s1.replace(pos, s2.length(), "#");
            pos += 1; 
        }

        cout << s1 << endl;











    }












    return 0;
}