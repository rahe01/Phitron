#include <bits/stdc++.h>
using namespace std;

class Edge {
public:
    int a, b, c;
    Edge(int a, int b, int c) {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};

vector<Edge> edge_list;

int n, e;
int dis[100005];

bool bellman(int src) {
    
    dis[src] = 0;

    for (int i = 1; i <= n - 1; i++) {
        bool updat = false;
        for (auto ed : edge_list) {
            int a = ed.a, b = ed.b, c = ed.c;
            if (dis[a] != INT_MAX && dis[a] + c < dis[b]) {
                dis[b] = dis[a] + c;
                updat = true;
            }
        }
     
        if (!updat) break;
    }

   
    for (auto ed : edge_list) {
        int a = ed.a, b = ed.b, c = ed.c;
        if (dis[a] != INT_MAX && dis[a] + c < dis[b]) {
            return true;  
        }
    }

    return false;
}

int main() {
    cin >> n >> e;
     if (n == 0 || e == 0) {
        cout << "Not Possible" << endl;
        return 0;
    }

    for(int i = 0; i <= n; i++) {
        dis[i] = INT_MAX;
    }

    for (int i = 0; i < e; i++) {
        int a, b, w;
        cin >> a >> b >> w;
        edge_list.push_back(Edge(a, b, w));
    }

    int src;
    cin >> src;

    if (bellman(src)) {
        cout << "Negative Cycle Detected" << endl;
        return 0;
    }

    int test_cases;
    cin >> test_cases;
    while (test_cases--) {
        int dest;
        cin >> dest;

      
        if (dis[dest] == INT_MAX) {
            cout << "Not Possible" << endl;
        } else {
            cout << dis[dest] << endl;
        }
    }

    return 0;
}
