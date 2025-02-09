#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n, e;
    cin >> n>> e;

    int adj_matrix[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++){
            adj_matrix[i][j] = 0;
        }
      
    }

      for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++){
            if( i == j ){
                adj_matrix[i][j] = 1;
            }
        }
      
    }


    


    while(e--){
        int a, b;
        cin>> a >> b;
        adj_matrix[a][b] = 1; // for directed graph
        adj_matrix[b][a] = 1; // for undirected graph
    }





    return 0;
}