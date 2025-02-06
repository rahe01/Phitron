#include <bits/stdc++.h>

using namespace std;

vector<int> adj[1005];
bool visited[1005];




void bfs(int src){
    queue<int> q;
    q.push(src);
    visited[src] = true;

    while(!q.empty()){
        int parent = q.front();
        q.pop();

        cout << parent << " ";
        for(auto child: adj[parent]){

            if(visited[child] == false){
                q.push(child);
                visited[child] = true;
            }
        }
    }
}






int main(){
    int n, e;
    cin >> n >> e;

    while(e--){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    memset(visited , false, sizeof(visited));
    int src;
    cin >> src;
    bfs(src);


    return 0;
}