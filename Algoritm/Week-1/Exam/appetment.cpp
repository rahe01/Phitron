#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000;
char grid[MAX][MAX];
bool visited[MAX][MAX];
int n, m;

vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};


bool isValid(int x, int y) {
    return (x >= 0 && x < n && y >= 0 && y < m && grid[x][y] == '.' && !visited[x][y]);
}

void dfs(int x, int y) {
    visited[x][y] = true;

    for (auto dir : directions) {
        int newX = x + dir.first;
        int newY = y + dir.second;

        if (isValid(newX, newY)) {
            dfs(newX, newY);
        }
    }
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    memset(visited, false, sizeof(visited));
    int apartCount = 0;


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == '.' && !visited[i][j]) {
                dfs(i, j);  
                apartCount++;  
            }
        }
    }

    cout << apartCount << endl;
    return 0;
}
