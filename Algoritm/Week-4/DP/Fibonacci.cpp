#include <bits/stdc++.h>

using namespace std;

int fibo(int n){
    if(n <2){
        return n;
    }
    int fib = fibo(n-1) + fibo(n-2);
    return fib;
}

int main(){

    cout << "Fibonacci: " << fibo(8) << endl;
    
    return 0;
}