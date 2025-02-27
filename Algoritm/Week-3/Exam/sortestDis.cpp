#include <bits/stdc++.h>
using namespace std;

const long long INF = 1e18;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, e;
    cin >> n >> e;

    vector<vector<long long>> adj_matrix(n + 1, vector<long long>(n + 1, INF));

  
    for (int i = 1; i <= n; i++) {
        adj_matrix[i][i] = 0;
    }

   
    for (int i = 0; i < e; i++) {
        int a, b, w;
        cin >> a >> b >> w;

       
        adj_matrix[a][b] = min(adj_matrix[a][b], (long long)w);
    }

 
    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (adj_matrix[i][k] < INF && adj_matrix[k][j] < INF) {
                    adj_matrix[i][j] = min(adj_matrix[i][j], adj_matrix[i][k] + adj_matrix[k][j]);
                }
            }
        }
    }

 
    int q;
    cin >> q;
    while (q--) {
        int src, dest;
        cin >> src >> dest;

        
        if (adj_matrix[src][dest] == INF) {
            cout << -1 << "\n";
        } else {
            cout << adj_matrix[src][dest] << "\n";
        }
    }

    return 0;
}
