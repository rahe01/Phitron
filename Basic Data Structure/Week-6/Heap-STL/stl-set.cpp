#include <bits/stdc++.h>

using namespace std;

int main(){
    set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(50);
    s.insert(50); // Duplicate element is not inserted
    s.insert(60);
    
    for(auto i = s.begin(); i != s.end(); i++){
        cout << *i << " ";
    }
    return 0;
}