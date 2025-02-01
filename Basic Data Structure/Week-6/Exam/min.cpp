#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin >> n;
    
    vector<int> ar(n);
    for (int i = 0; i < n; i++) {
        cin >> ar[i];
    }
    
    int q;
    cin >> q;
    
    priority_queue<int, vector<int>, greater<int>> pq; 
    
   
    for (int i = 0; i < n; i++) {
        pq.push(ar[i]);
    }
    
    
    while (q--) {
        int command;
        cin >> command;
        
        if (command == 1) {
           
            if (!pq.empty()) {
                cout << pq.top() << endl;
            } else {
                cout << "Empty" << endl;
            }
        } else if (command == 2) {
           
            if (!pq.empty()) {
                pq.pop();
                if (!pq.empty()) {
                    cout << pq.top() << endl;
                } else {
                    cout << "Empty" << endl;
                }
            } else {
                cout << "Empty" << endl;
            }
        } else if (command == 0) {
           
            int x;
            cin >> x;
            pq.push(x); 
            if (!pq.empty()) {
                cout << pq.top() << endl; 
            }
        }
    }
    
    return 0;
}
