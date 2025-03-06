#include <bits/stdc++.h>

using namespace std;

bool canReach(int n) {
    while (n > 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n -= 3;  
        }
        if (n < 1) return false;
    }
    return (n == 1);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        cout << (canReach(n) ? "YES" : "NO") << endl;
    }

    return 0;
}
