#include <bits/stdc++.h>

using namespace std;
vector<int> adj[1005];
bool visited[1005];
int level[1005];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    visited[src] = true;
    level[src] = 0;

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
    int src, dst;
    cin >> src >> dst;
    bfs(0);

    // for (int i = 0; i < n; i++)
    // {
    //     cout << "Level of " << i << " is " << level[i] << endl;
    //     /* code */
    // }

    cout << level[dst] << endl;

    return 0;
}