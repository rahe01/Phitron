#include <bits/stdc++.h>

using namespace std;

int main(){

    string s;
    getline(cin, s);
    transform(s.begin(), s.end(), s.begin(), ::tolower); 

    int e,g,y,p,t;
    e = count(s.begin(), s.end(), 'e');
    g = count(s.begin(), s.end(), 'g');
    y = count(s.begin(), s.end(), 'y');
    p = count(s.begin(), s.end(), 'p');
    t = count(s.begin(), s.end(), 't');

    int count = min({e,g,y,p,t});

    cout << count << endl;
    return 0;
}