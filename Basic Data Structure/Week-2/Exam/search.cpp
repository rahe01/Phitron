#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void search(Node *head, int val)
{
    Node *temp = head;

    int index =0;
    while (temp != NULL)
    {
       

        if (temp->val == val)
        {
            cout << index << endl;
           return;
        }

        
        

        temp = temp->next;
         index++;
    }
     cout << -1 << endl;
}

int main()
{

    int test;
    cin >> test;

    for (int i = 0; i < test; i++)
    {
        Node *head = NULL;
        Node *tail = NULL;
        int val;
        while (true)
        {
            cin >> val;
            if (val == -1)
            {
                break;
            }

            insert_at_tail(head, tail, val);
        }

        int t;
        cin >> t;
        search(head, t);
    }

    return 0;
}