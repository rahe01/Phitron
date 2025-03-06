#include <bits/stdc++.h>

using namespace std;

int par[1005];
int group_size[1005];
int cmp;
int mx;

int find(int node)
{

    // while(par[node] != -1){
    //     cout << node << endl;
    //     node = par[node];
    // }
    // return node;

    if (par[node] == -1)
    {
        return node;
    }

    int lead = find(par[node]);

    par[node] = lead;
    return lead;
}

void dsu_union(int node1, int node2)
{
    int leader1 = find(node1);
    int leader2 = find(node2);

    if (group_size[leader1] >= group_size[leader2])
    {
        par[leader2] = leader1;
        group_size[leader1] += group_size[leader2];
        mx = max(mx, group_size[leader1]);
    }
    else
    {
        par[leader1] = leader2;
        group_size[leader2] += group_size[leader1];
        mx = max(mx, group_size[leader2]);
    }
    cmp--;
}

int main()
{
    int n, e;
    cin >> n >> e;

    cmp = n;
    mx = 1;
   
    for (int i = 1; i <= n; i++)
    {
        par[i] = -1;
    }
   for( int i = 1; i <= n; i++ ){
       group_size[i] = 1;
    }



    while (e--){
        int a , b;
        cin >> a >> b;
        dsu_union(a, b);
        cout << cmp << " " << mx << endl;
    }


    return 0;
}