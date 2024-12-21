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

// Insert at the head
void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;

    if (tail == NULL) 
    {
        tail = head;
    }
}

// Insert at the tail
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


void delete_at_index(Node *&head, Node *&tail, int idx)
{
    if (idx < 0 || head == NULL)
        return;

    if (idx == 0) 
    {
        Node *toDelete = head;
        head = head->next;
        if (head == NULL) 
        {
            tail = NULL;
        }
        delete toDelete;
        return;
    }

    Node *temp = head;
    for (int i = 0; i < idx - 1; i++) 
    {
        if (temp == NULL || temp->next == NULL) 
            return;
        temp = temp->next;
    }

    Node *toDelete = temp->next;
    if (toDelete == NULL) 
        return;

    temp->next = toDelete->next;
    if (toDelete == tail) 
    {
        tail = temp;
    }
    delete toDelete;
}


void print_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int x, v;
        cin >> x >> v;

        if (x == 0)
        {
            insert_at_head(head, tail, v);
        }
        else if (x == 1)
        {
            insert_at_tail(head, tail, v);
        }
        else if (x == 2)
        {
            delete_at_index(head, tail, v);
        }

        print_list(head);
    }

    return 0;
}
