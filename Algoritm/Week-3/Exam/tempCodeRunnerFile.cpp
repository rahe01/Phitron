#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9; 

int main() {
    int n, e;
    cin >> n >> e;

     
    int adj_mat[n + 1][n + 1];

 

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == j)
                adj_mat[i][j] = 0;
            else
                adj_mat[i][j] = INF;
        }
    }
    

    for (int i = 0; i < e; i++) {
        int a, b, w;
        cin >> a >> b >> w;
        adj_mat[a][b] = min(adj_mat[a][b], w); 
    }

  
    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (adj_mat[i][k] < INF && adj_mat[k][j] < INF) {
                    adj_mat[i][j] = min(adj_mat[i][j], adj_mat[i][k] + adj_mat[k][j]);
                }
            }
        }
    }

    int q;
    cin >> q;
    while (q--) {
        int src, dest;
        cin >> src >> dest;
        if (adj_mat[src][dest] == INF) {
            cout << -1 << endl; 
        } else {
            cout << adj_mat[src][dest] << endl;
        }
    }

    return 0;
}