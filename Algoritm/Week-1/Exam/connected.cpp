#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, e;
    cin >> n >> e;

   
    vector<int> adj[n];

   
    for (int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);  
    }

    int q;
    cin >> q;  

   
    for (int i = 0; i < q; i++) {
        int node;
        cin >> node;

        if (adj[node].empty()) {
            cout << "-1" << endl;  
        } else {
           
            sort(adj[node].rbegin(), adj[node].rend());
            
          
            for (int connected_node : adj[node]) {
                cout << connected_node << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
