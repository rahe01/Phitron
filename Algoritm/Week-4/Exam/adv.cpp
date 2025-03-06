#include <bits/stdc++.h>

using namespace std;

int knapseck(int index, int mx_weight, vector<int> &weights, vector<int> &values, vector<vector<int>> &dp) {
    if (index < 0 || mx_weight == 0) return 0;

    if (dp[index][mx_weight] != -1) return dp[index][mx_weight];

  
    if (weights[index] > mx_weight) {
        return dp[index][mx_weight] = knapseck(index - 1, mx_weight, weights, values, dp);
    }

  
    int includ_item = values[index] + knapseck(index - 1, mx_weight - weights[index], weights, values, dp);
    int exclud_item = knapseck(index - 1, mx_weight, weights, values, dp);

    return dp[index][mx_weight] = max(includ_item, exclud_item);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, max_weight;
        cin >> n >> max_weight;

        vector<int> weights(n), values(n);
        for (int i = 0; i < n; i++) cin >> weights[i];
        for (int i = 0; i < n; i++) cin >> values[i];

        vector<vector<int>> dp(n, vector<int>(max_weight + 1, -1));
        cout << knapseck(n - 1, max_weight, weights, values, dp) << endl;
    }

    return 0;
}
