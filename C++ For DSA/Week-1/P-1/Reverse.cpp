#include <bits/stdc++.h>

using namespace std;

int main(){
    int x;
    cin >> x;
    long long a[x];

    for (int i = 0; i < x; i++)
    {
        cin>> a[i];
        /* code */
    }
    for (int i = x-1; i >= 0; i--)
    {
        cout<<a[i];
        if(i >0){
            cout<< " ";
        }
        /* code */
    }

    cout<< endl;
    
    








    return 0;
}