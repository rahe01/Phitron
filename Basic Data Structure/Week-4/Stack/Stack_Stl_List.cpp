#include <bits/stdc++.h>

using namespace std;

class myStack
{
public:
    list<int> l;

    void push(int x)
    {
        l.push_back(x);
    }

    void pop()
    {
        l.pop_back();
    }

    int top()
    {

        return l.back();
    }

    int size()
    {
        return l.size();
    }

    bool isEmpty()
    {
        return l.empty();
    }
};

int main()
{
    myStack st;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    while (!st.isEmpty())
    {
        cout << st.top() << " ";
        st.pop();
        /* code */
    }
    

    return 0;
}