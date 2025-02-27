#include <bits/stdc++.h>
using namespace std;

class maxWater {
public:
    pair<int, int> maxArea(vector<int>& height) {
        int maxWater = 0;
        int lp = 0, rp = height.size() - 1;
        int bestLeft = 0, bestRight = 0;

        while (lp < rp) {
            int w = rp - lp;
            int h = min(height[lp], height[rp]);
            int currentWater = w * h;

            // Update max area and indices if we find a larger container
            if (currentWater > maxWater) { 
                bestLeft = lp; 
                bestRight = rp;
                maxWater = currentWater;
            }

            // Move the pointer pointing to the smaller height
            if (height[lp] < height[rp]) {
                lp++;
            } else {
                rp--;
            }
        }

        return {bestLeft, bestRight}; 
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
        pair<int, int> result = solver.maxArea(heights);

        // Convert to 1-based indexing if required by the problem statement
        cout << result.first << " " << result.second << endl;
    }

    return 0;
}
