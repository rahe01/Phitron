#include <bits/stdc++.h>

using namespace std;

vector<int> adj[100001];
bool visited[100001];


void dfs(int src){

    visited[src] = true;
    cout << src << " ";

    for(auto child : adj[src]){
        if(!visited[child]){
            dfs(child);
        }
    }
}


int main(){
    int n, e;
    cin >> n >> e;

    while(e--){
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    memset(visited, 0, sizeof(visited));

    dfs(0);



    return 0;
}