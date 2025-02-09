#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, e;
    cin >> n >> e;

   
    vector<vector<int>> graph(n);

   
    for (int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);  
    }

    int q;
    cin >> q; 

   
    for (int i = 0; i < q; i++) {
        int u, v;
        cin >> u >> v;

        bool dirct_conection = false;

        
        if (u == v) {
            cout << "YES" << endl;
            continue;
        }

      
        for (int neighbor : graph[u]) {
            if (neighbor == v) {
                dirct_conection = true;
                break;
            }
        }

        if (dirct_conection) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
