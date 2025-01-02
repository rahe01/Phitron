#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insertAttail(Node *&head, Node *&tail, int val)
{
    Node *temp = new Node(val);
    if (head == NULL)
    {
        head = temp;
        tail = temp;
        return;
    }
    tail->next = temp;
    temp->prev = tail;
    tail = temp;

}

void findPalindrome(Node *head, Node *tail)
{
    Node *temp1 = head;
    Node *temp2 = tail;
    while (temp1 != temp2)
    {
        if (temp1->val != temp2->val)
        {
            cout << "NO" << endl;
            return;
        }
        temp1 = temp1->next;
        temp2 = temp2->prev;
    }
    cout << "YES" << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        int n;
        cin >> n;
        if (n == -1)
        {
            break;
        }
        insertAttail(head, tail, n);
    }

    findPalindrome(head, tail);

    return 0;
}
