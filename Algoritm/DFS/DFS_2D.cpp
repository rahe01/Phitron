#include <bits/stdc++.h>

using namespace std;

char grid[100][100];
bool visited[10000][10000];
int n, m;

vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool valid(int i, int j)
{
    if (i < 0 || i >= n)
        return false;
    if (j < 0 || j >= m)
        return false;

    return true;
}
void dfs(int si, int sj)
{

    cout << si << ", " << sj << endl;
    visited[si][sj] = true;

    for (int i = 0; i < 4; i++)
    {
        int ci, cj;
        ci = si + d[i].first;
        cj = sj + d[i].second;

        if (valid(ci, cj) == true && !visited[ci][cj])
        {

            dfs(ci, cj);
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
    int si, sj;
    cin >> si >> sj;

    dfs(si, sj);

    return 0;
}