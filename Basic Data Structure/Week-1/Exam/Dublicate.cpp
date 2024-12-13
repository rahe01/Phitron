#include <bits/stdc++.h>

using namespace std;



int main()
{

    int n;
    cin >> n;
    vector<int> v(n);


    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        /* code */
    }


    bool d = false;

    for (int i = 0; i < n; i++)
    {

        for (int j = i+1; j < n; j++)
        {
            if (v[i] == v[j]){
              d = true;
                break;
            }
            /* code */
        }
        if(d == true){
            break;
        }
        

      
    }

    if (d){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    
    









    // Write your code here

    return 0;
}
