#include <bits/stdc++.h>

using namespace std;

char grid[1005][1005];
bool visited[1005][1005];
int n, m;
vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};


bool isValid(int i, int j) {
    return i >= 0 && i < n && j >= 0 && j < m && grid[i][j] == '.';
}


void bfs(int si, int sj) {
    queue<pair<int, int>> q;
    q.push({si, sj});
    visited[si][sj] = true;

    while (!q.empty()) {
        pair<int, int> par = q.front();
        q.pop();
        
        for (auto d : directions) {
            int ci = par.first + d.first;
            int cj = par.second + d.second;

            if (isValid(ci, cj) && !visited[ci][cj]) {
                visited[ci][cj] = true;
                q.push({ci, cj});
            }
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

    int si, sj, ei, ej;
    cin >> si >> sj >> ei >> ej;

    if (grid[si][sj] == '-' || grid[ei][ej] == '-') {
        cout << "NO" << endl;
        return 0;
    }

    fill(&visited[0][0], &visited[0][0] + 100*100, false);


 
    bfs(si, sj);

    if (visited[ei][ej]) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
