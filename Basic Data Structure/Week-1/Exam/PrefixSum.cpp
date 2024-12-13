#include <bits/stdc++.h>

using namespace std;



int main()
{

    int n;
    cin >> n;

    vector<long long int > arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }



    vector <long long int> pre(n);
    pre[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        pre[i] = pre[i - 1] + arr[i];
        /* code */
    }

    for (int i = n-1; i >= 0; i--)
    {
        cout << pre[i] << " ";
        /* code */
    }
    
    






    // Write your code here

    return 0;
}