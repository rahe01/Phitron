#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }


        for (int i = 0; i < n-1; i++)
        {
            /* code */
            for (int j = i+1; j < n; j++)
            {
                if (arr[i] > arr[j]){
                    swap(arr[i], arr[j]);
                }

                /* code */
            }
            
        }
        


    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
        /* code */
    }
    










    return 0;
}