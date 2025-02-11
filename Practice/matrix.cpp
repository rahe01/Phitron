#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n, m;
    cin >> n >> m;

    int arr[n][m];
    int arr2[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
            
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr2[i][j];
            
        }
    }
    int sum[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            sum[i][j] = arr[i][j] + arr2[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }



    return 0;
}