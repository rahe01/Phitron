#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, e;
    cin >> n >> e;

    vector<int> adj_list[n];

    while(e--){
        int a,b;
        cin >> a >> b;
        adj_list[a].push_back(b); // for directed graph
        adj_list[b].push_back(a); // for undirected graph

    }
   
   for(int i = 0; i < n; i++){
    cout<< i << "->" ;
    for(auto x: adj_list[i]){
        cout << x << " ";
    } 
   }

    return 0;
}