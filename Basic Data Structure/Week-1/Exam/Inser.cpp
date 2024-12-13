#include <bits/stdc++.h>

using namespace std;



int main()
{

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int n2;
    cin >> n2;
    vector<int> arr2(n2);
    for (int i = 0; i < n2; i++){
        cin >> arr2[i];
    }

    int n3;
    cin >> n3;


    arr.insert(arr.begin() + n3, arr2.begin() , arr2.end());


    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
        /* code */
    }
    








    // Write your code here

    return 0;
}
