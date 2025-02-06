#include <bits/stdc++.h>

using namespace std;

char grid[100][100];
bool visited[10000][10000];
int n, m;
int level[100][100];

vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool valid(int i, int j)
{
    if (i < 0 || i >= n)
        return false;
    if (j < 0 || j >= m)
        return false;

    return true;
}
void bfs(int si, int sj)
{

    queue<pair<int, int>> q;
    q.push({si, sj});
    level[si][sj] = 0;
    visited[si][sj] = true;
    while (!q.empty())
    {

        pair<int, int> par = q.front();
        q.pop();
        int par_i = par.first;
        int par_j = par.second;
        cout << par_i << ", " << par_j << endl;
        for (int i = 0; i < 4; i++)
        {
            int ci, cj;
            ci = par_i + d[i].first;
            cj = par_j + d[i].second;

            if (valid(ci, cj) == true && !visited[ci][cj])
            {
                visited[ci][cj] = true;
                level[ci][cj] = level[par_i][par_j] + 1;
                q.push({ci, cj});
            }
        }
    }
}
int main()
{

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }

    memset(visited, false, sizeof(visited));
    memset(level, -1, sizeof(level));
    int si, sj;
    cin >> si >> sj;

    bfs(si, sj);
    cout << level[si][sj] << endl;

    return 0;
}