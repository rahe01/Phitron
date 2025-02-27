#include <bits/stdc++.h>
using namespace std;

int leader[1000005]; 
int group_size[1000005];  


int find(int node) {
    if (leader[node] == -1) {
        return node; 
    }

    int lead = find(leader[node]); 
    leader[node] = lead;  
    return lead;
}


void dsu_union(int node1, int node2) {
    int leader1 = find(node1);
    int leader2 = find(node2);

    if (leader1 != leader2) { 
       
        if (group_size[leader1] >= group_size[leader2]) {
            leader[leader2] = leader1;
            group_size[leader1] += group_size[leader2];
        } else {
            leader[leader1] = leader2;
            group_size[leader2] += group_size[leader1];
        }
    }
}

int main() {
    int n, m;  
    cin >> n >> m;

    
    memset(leader, -1, sizeof(leader)); 
    memset(group_size, 1, sizeof(group_size));  

    int cycle_count = 0; 

   
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;

       
        if (find(u) == find(v)) {
            cycle_count++;
        } else {
          
            dsu_union(u, v);
        }
    }

    cout << cycle_count << endl; 

    return 0;
}
