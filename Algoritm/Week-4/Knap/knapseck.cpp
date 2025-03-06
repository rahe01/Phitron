#include <bits/stdc++.h>

using namespace std;
int val[1000];
int weight[1000];

int knapsack(int i, int max_weight)
{
    if (i < 0 || max_weight <= 0 )
    {
        return 0;
    }

    if (weight[i] <= max_weight)
    {
        int op1 = knapsack(i - 1, max_weight - weight[i]) + val[i];
        int op2 = knapsack(i - 1, max_weight);

        return max(op1, op2);
    }

    else
    {
        return knapsack(i - 1, max_weight);
    }
}
int main()
{
    int n, max_weight;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> val[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> weight[i];
    }
    cin >> max_weight;

    knapsack(n - 1, max_weight);

    return 0;
}