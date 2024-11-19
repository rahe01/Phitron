#include <bits/stdc++.h>

using namespace std;

int main(){
    long long x,y;

    cin >> x >> y;
    long long  sum = x + y;
    long long mul = x * y;
    long long diff = x - y;

    cout<< x << " + " << y << " = " << sum<< endl;
    cout<< x << " * " << y << " = " << mul<< endl;
    cout<< x << " - " << y << " = " << diff<< endl;
   



    return 0;
}