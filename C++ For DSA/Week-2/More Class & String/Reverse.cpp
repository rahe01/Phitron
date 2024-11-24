#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
     }

    sort(a , a+n);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
        /* code */
    }
    
    reverse(a , a+n);
    cout<<"\nReversed Array: ";
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
        /* code */
    }







    return 0;
}