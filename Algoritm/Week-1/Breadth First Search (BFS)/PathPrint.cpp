#include <bits/stdc++.h>

using namespace std;
vector<int> adj[1005];
bool visited[1005];
int level[1005];
int parent[1005];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    visited[src] = true;
    level[src] = 0;
    parent[src] = -1;

    while (!q.empty())
    {
        // ber kore ana
        int par = q.front();
        q.pop();

        // visit korbo node
        cout << par << " ";

        for (int child : adj[par])
        {
            if (visited[child] == false)
            {
                q.push(child);
                visited[child] = true;
                level[child] = level[par] + 1;
                parent[child] = par;
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    memset(visited, false, sizeof(visited));
    memset(level, -1, sizeof(level));
    memset(parent, -1, sizeof(parent));
    int src, dst;
    cin >> src >> dst;
    bfs(src);

    // for (int i = 0; i < n; i++){
    //     cout << "parent of node " << i << ": " << parent[i] << endl;
    // }

    int node = dst;
    vector<int> path;

    while (node!= -1){
        path.push_back(node);
        node = parent[node];

    }
    reverse(path.begin(), path.end());
    for (int i = 0; i < path.size(); i++){
        cout << path[i] << " ";
    }
    cout << endl;
   
    return 0;
}