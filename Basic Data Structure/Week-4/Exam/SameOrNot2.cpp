#include <bits/stdc++.h>

using namespace std;

class myStack
{
public:
    vector<int> v;

    void push(int x)
    {
        v.push_back(x);
    }

    void pop()
    {
        v.pop_back();
    }

    int top()
    {

        return v.back();
    }

    int size()
    {
        return v.size();
    }

    bool isEmpty()
    {
        return v.empty();
    }
};
class myQueue{
    public:
   list<int> l;

    void push(int val) {
       l.push_back(val);
    }

    void pop(){
        if(l.empty()){
            return;
        }
        l.pop_front();
    }

    int front(){
        if(l.empty()){
            return -1;
        }
        return l.front();
    }

    int back(){
        if(l.empty()){
            return -1;
        }
        return l.back();
    }

    int size(){
        return l.size();

    }
    
    bool empty(){
        return l.empty();
    }

};


int main()
{
    myStack s;
    myQueue q;
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

    while(!s.isEmpty() && !q.empty()){
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
