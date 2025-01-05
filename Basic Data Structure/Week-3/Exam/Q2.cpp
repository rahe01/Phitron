#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int>l;
    int Q;
    cin >> Q;

    while (Q--) {
        int X, V;
        cin >> X >> V;

      
        if (X == 0) {
           
           l.push_front(V);
        }
         else if (X == 1) {
          
           l.push_back(V);
        } else if (X == 2) {
         
            if (V < 0 || V >=l.size()) {
             
            } else {
                auto it =l.begin();
                advance(it, V);
               l.erase(it);
            }
        }

       
        cout << "L -> ";
        for (auto it =l.begin(); it !=l.end(); ++it) {
            cout << *it;
            if (next(it) !=l.end()) cout << " ";
        }
        cout << endl;

        cout << "R -> ";
        for (auto it =l.rbegin(); it !=l.rend(); ++it) {
            cout << *it;
            if (next(it) !=l.rend()) cout << " ";
        }
        cout << endl;
    }

    return 0;
}
