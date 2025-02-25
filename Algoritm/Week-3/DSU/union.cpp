#include <bits/stdc++.h>

using namespace std;

int leader[1005];
int group_size[1005];

int find(int node)
{

    // while(leader[node] != -1){
    //     cout << node << endl;
    //     node = leader[node];
    // }
    // return node;

    if (leader[node] == -1)
    {
        return node;
    }

    int lead = find(leader[node]);

    leader[node] = lead;
    return lead;
}

void dsu_union(int node1, int node2)
{
    int leader1 = find(node1);
    int leader2 = find(node2);

    if (group_size[leader1] >= group_size[leader2])
    {
        leader[leader2] = leader1;
        group_size[leader1] += group_size[leader2];
    }
    else
    {
        leader[leader1] = leader2;
        group_size[leader2] += group_size[leader1];
    }
}

int main()
{
    memset(leader, -1, sizeof(leader));
    memset(group_size, 1, sizeof(group_size));

    dsu_union(1, 2);

    for (int i = 0; i < 6; i++)
    {
        cout << leader[i] << " " << endl;
    }

    return 0;
}