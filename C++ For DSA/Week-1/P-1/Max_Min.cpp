#include <bits/stdc++.h>

using namespace std;

int main(){
       int a,b,c;
     
       cin >> a >> b >> c;

       int minn = min(a, min(b, c));
       int maxx = max(a, max(b, c));
   
   

    cout << minn;
    cout << " ";
    cout << maxx;
    
    

    return 0;
}