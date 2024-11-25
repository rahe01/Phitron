#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin, s);

    transform(s.begin(), s.end(),s.begin(), ::tolower);

    string s1 = s;

 reverse(s1.begin(), s1.end());
   



    if(s == s1){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }







    return 0;
}