#include <bits/stdc++.h>

using namespace std;



int main()
{

    int n;
    cin >> n;

    while(n--){
        int a;
        cin >> a;

        vector<int> arr(a);
        for(int i = 0; i < a; i++){
            cin >> arr[i];
        }


        bool ok = true;

        for (int i = 0; i < a; i++)
        {
               if (arr[i] < arr[i - 1]) {
                 ok = false;
                 break;
             }
           
                
           
        }

        if(ok){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
            /* code */
        }
        
 
 return 0;


    }






    // Write your code here

