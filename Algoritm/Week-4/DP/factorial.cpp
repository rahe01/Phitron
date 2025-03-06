#include <bits/stdc++.h>

using namespace std;

int fact(int n){
    if( n ==1){
        return 1;
    }

    int mul =fact(n-1);
    return mul * n;
}

int main(){
    cout << "Factorial: " << fact(5) << endl;
    
    return 0;
}