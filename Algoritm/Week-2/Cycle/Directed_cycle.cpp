#include <bits/stdc++.h>

using namespace std;

bool vis[1009];
vector<int> adj_list[100];
bool cycle;
bool pathvisit[100];

void dfs(int src)
{
    vis[src] = true;
    pathvisit[src] = true;
    for (int child : adj_list[src])
    {
        if (!vis[child])
        {
            

            dfs(child);
            
        }
        if (vis[child] && pathvisit[child] == true)
        {
            cycle = true;

            return;
        }

    }
    pathvisit[src] = false;
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
       
    }

    memset(vis, false, sizeof(vis));
    memset(pathvisit, false, sizeof(pathvisit));

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