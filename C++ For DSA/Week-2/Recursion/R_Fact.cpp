#include <bits/stdc++.h>

using namespace std;


int fact(int n){
    if(n ==0){
        return 1;
    }

    return n* fact(n-1);
}


int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    fact(n);
    cout << "Factorial of " << n << " is: " << fact(n) << endl;
    
    return 0;
}