#include <bits/stdc++.h>
using namespace std;

class maxWater {
public:
    pair<int, int> findIndexes(vector<int>& height) {
        int n = height.size();
        if (n < 2) return {-1, -1};

       
        int maxLeftIndex = 0;
        for (int i = 1; i < n; i++) {
            if (height[i] > height[maxLeftIndex]) {
                maxLeftIndex = i;
            }
        }

       
        int maxRightIndex = -1;
        int secondMaxHeight = INT_MIN;

        for (int i = 0; i < n; i++) {
            if (i != maxLeftIndex && height[i] > secondMaxHeight) {
                secondMaxHeight = height[i];
                maxRightIndex = i;
            }
        }

        if (maxLeftIndex > maxRightIndex) swap(maxLeftIndex, maxRightIndex); 
        return {maxLeftIndex, maxRightIndex};
    }
};

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> heights(n);

        for (int i = 0; i < n; i++) {
            cin >> heights[i];
        }

        maxWater solver;
        pair<int, int> result = solver.findIndexes(heights);

        cout << result.first << " " << result.second << endl;
    }

    return 0;
}
