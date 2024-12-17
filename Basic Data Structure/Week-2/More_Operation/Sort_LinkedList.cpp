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

void print_LinkedList(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << " -> ";
        temp = temp->next;
    }
}



    void sort_linked_list(Node* &head){

        Node* temp;



          for ( temp = head; temp->next != NULL; temp = temp->next )
        {
            /* code */
            for (Node* temp1 = temp->next; temp1 != NULL; temp1 = temp1->next)
            {
                if (temp->val > temp1->val){
                    swap(temp->val, temp1->val);
                }

                /* code */
            }
            
        }
        

    }





int main()
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
        /* code */
    }

    sort_linked_list(head);

    print_LinkedList(head);

    return 0;
}