#include <bits/stdc++.h>
using namespace std;


vector<pair<int, int>> knightmove = {
    {-2, -1}, {-2, 1}, {2, -1}, {2, 1},
    {-1, -2}, {-1, 2}, {1, -2}, {1, 2}
};

bool vailidmove(int x, int y, int n, int m) {
    return (x >= 0 && x < n && y >= 0 && y < m);
}

int findMinMoves(int n, int m, int knightX, int knightY, int queenX, int queenY) {
    
    if (knightX == queenX && knightY == queenY) {
        return 0;
    }

    
    queue<pair<int, int>> q;
    q.push({knightX, knightY});

    bool visited[1005][1005] = {false}; 
    visited[knightX][knightY] = true;

    int steps = 0; 

    while (!q.empty()) {
        int size = q.size();
        steps++; 

        for (int i = 0; i < size; i++) {
            auto [x, y] = q.front();
            q.pop();

            for (auto [dx, dy] : knightmove) {
                int newX = x + dx;
                int newY = y + dy;

             
                if (newX == queenX && newY == queenY) {
                    return steps;
                }

              
                if (vailidmove(newX, newY, n, m) && !visited[newX][newY]) {
                    visited[newX][newY] = true;
                    q.push({newX, newY});
                }
            }
        }
    }

   
    return -1;
}

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int n, m, knightX, knightY, queenX, queenY;
        cin >> n >> m >> knightX >> knightY >> queenX >> queenY;

      
        cout << findMinMoves(n, m, knightX, knightY, queenX, queenY) << endl;
    }

    return 0;
}
