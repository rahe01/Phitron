#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000;  
char grid[MAX][MAX];
bool visited[MAX][MAX];
int n, m;


vector<pair<int, int>> directon = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};


bool isValid(int x, int y) {
    return (x >= 0 && x < n && y >= 0 && y < m && grid[x][y] != '#' && !visited[x][y]);
}


bool dfs(int x, int y) {
    visited[x][y] = true;

    if (grid[x][y] == 'B') {
        return true;  
    }

    for (auto di : directon) {
        int newX = x + di.first;
        int newY = y + di.second;

        if (isValid(newX, newY)) {
            if (dfs(newX, newY)) {
                return true; 
            }
        }
    }

    return false; 
}

int main() {
    cin >> n >> m;

    int startX, startY; 

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == 'A') {
                startX = i;
                startY = j;
            }
        }
    }

    memset(visited, false, sizeof(visited));

   
    if (dfs(startX, startY)) {
        cout << "YES" << endl;  
    } else {
        cout << "NO" << endl;  
    }

    return 0;
}
