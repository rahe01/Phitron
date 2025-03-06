#include <bits/stdc++.h>

using namespace std;

long long tetranacci(int n) {
    if (n == 0) return 0;
    if (n == 1 || n == 2) return 1;
    if (n == 3) return 2;

    long long t0 = 0, t1 = 1, t2 = 1, t3 = 2, tn = 0;

    for (int i = 4; i <= n; i++) {
        tn = t0 + t1 + t2 + t3;
        t0 = t1;
        t1 = t2;
        t2 = t3;
        t3 = tn;
    }

    return tn;
}

int main() {
    int n;
    cin >> n;
    cout << tetranacci(n) << endl;
    return 0;
}
