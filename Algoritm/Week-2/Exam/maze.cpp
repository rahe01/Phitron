#include <bits/stdc++.h>
using namespace std;

struct Cell
{
    int x, y;
};

int n, m;
char grid[1005][1005];
bool visited[1005][1005];
pair<int, int> parent[1005][1005];

vector<pair<int, int>> directions = {
    {0, 1},
    {0, -1},
    {-1, 0},
    {1, 0}};

bool isValid(int x, int y)
{
    return x >= 0 && x < n && y >= 0 && y < m && (grid[x][y] == '.' || grid[x][y] == 'D');
}

void bfs(int sx, int sy)
{
    queue<Cell> q;
    q.push({sx, sy});
    visited[sx][sy] = true;

    bool found = false;
    Cell dst = {-1, -1};

    while (!q.empty())
    {
        Cell curr = q.front();
        q.pop();

        for (auto [dx, dy] : directions)
        {
            int nx = curr.x + dx, ny = curr.y + dy;

            if (isValid(nx, ny) && !visited[nx][ny])
            {
                visited[nx][ny] = true;
                parent[nx][ny] = {curr.x, curr.y};
                q.push({nx, ny});

                if (grid[nx][ny] == 'D')
                {
                    found = true;
                    dst = {nx, ny};
                    break;
                }
            }
        }
        if (found)
            break;
    }

    if (found)
    {
        pair<int, int> trac = parent[dst.x][dst.y];
        while (!(trac.first == sx && trac.second == sy))
        {
            if (grid[trac.first][trac.second] != 'R' && grid[trac.first][trac.second] != 'D')
            {
                grid[trac.first][trac.second] = 'X';
            }
            trac = parent[trac.first][trac.second];
        }
    }
}

int main()
{
    cin >> n >> m;

    int sx, sy;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
            if (grid[i][j] == 'R')
            {
                sx = i, sy = j;
            }
        }
    }

    memset(visited, false, sizeof(visited));
    memset(parent, -1, sizeof(parent));

    bfs(sx, sy);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << grid[i][j];
        }
        cout << endl;
    }

    return 0;
}
