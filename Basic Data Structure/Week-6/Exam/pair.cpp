#include <bits/stdc++.h>
using namespace std;


class Compare {
public:
    bool operator()(const pair<string, int>& a, const pair<string, int>& b) {
        if (a.first != b.first) {
            return a.first > b.first; 
        }
        return a.second < b.second;
    }
};

int main() {
    int n;
    cin >> n; 

   
    priority_queue<pair<string, int>, vector<pair<string, int>>, Compare> pq;

   
    for (int i = 0; i < n; i++) {
        string str;
        int num;
        cin >> str >> num;
        pq.push({str, num});
    }

   
    while (!pq.empty()) {
        auto p = pq.top();
        cout << p.first << " " << p.second << endl;
        pq.pop();
    }

    return 0;
}
