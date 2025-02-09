#include <bits/stdc++.h>

using namespace std;

bool vis[1009];
vector<int> adj_list[100];
bool cycle;
int parent[100];

void dfs(int src)
{
    vis[src] = true;
    for (int child : adj_list[src])
    {
        if (!vis[child])
        {
            parent[child] = src;
            dfs(child);
        }
        if (vis[child] && parent[src] != child)
        {
            cycle = true;

            return;
        }
    }
}

int main()
{

    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    memset(vis, false, sizeof(vis));
    memset(parent, -1, sizeof(parent));

    cycle = false;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {

            dfs(i);
        }
    }

    return 0;
}