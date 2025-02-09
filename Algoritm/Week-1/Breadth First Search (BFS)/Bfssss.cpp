#include <bits/stdc++.h>

using namespace std;

vector<int> adj[1005];
bool visited[1005];

void bfs(int src)
{

    queue<int> q;

    q.push(src);

    visited[src] = true;

    while (!q.empty())
    {

        int parent = q.front();

        q.pop();

        cout << parent << " ";

        for (int child : adj[parent])
        {

            if (visited[child] == false)
            {
                q.push(child);

                visited[child] = true;
            }
        }
    }
}

int main()
{

    int n, e;
    cin >> n >> e;

    while (e--)
    {

        int a, b;
        cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    memset(visited, false, sizeof(visited));

    bfs(0);
}