#include <bits/stdc++.h>

using namespace std;



int main()
{
    stack<int>s;
    queue<int> q;
    // Write your code here
    int n,m;
    cin >> m >> n;

    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        s.push(x);
    }
    for(int i=0;i<m;i++){
        int x;
        cin >> x;
        q.push(x);
    }

    if(n != m){
        cout << "NO" << endl;
        return 0;
    }

    bool flag = true;

    while(!s.empty() && !q.empty()){
        if(s.top() == q.front()){
            s.pop();
            q.pop();
        }else{
            flag = false;
            break;
        }
    }

    if(flag){
        cout << "YES" << endl;}
    else{
        cout << "NO" << endl;
    }


    


    return 0;
}
