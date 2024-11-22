#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;

    while(n--){
        int a, b;
        cin >> a >> b;
        int arr[a];

        for(int i = 0; i < a; i++){
            cin >> arr[i];
        }

        bool found = false;

        for (int i = 0; i < a-2; i++)
        {
            for (int j = 0; j< a-1; j++)
            {
                for (int k = 0; k< a; k++)
                {
                    if(arr[i] + arr[j] + arr[k] == b){
                        found = true;
                        break;
                    }
                }
                /* code */
                if(found) break;
            }
            if(found) break;
            
            /* code */
        }
        if(found) cout << "YES\n";
        else cout << "NO\n";
        








    }















    return 0;
}