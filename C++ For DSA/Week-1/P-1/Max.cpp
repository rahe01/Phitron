#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int x;
    cin >> x;
    long long a[x];

    for(int i = 0; i < x; i++) {
        cin >> a[i];
    }

    long long max = a[0];
    for(int i = 1; i < x; i++) {
        if(a[i] > max) {
            max = a[i];
        }
    }

    cout << max << endl;




    return 0;
}