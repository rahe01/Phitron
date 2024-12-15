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

int main()
{
    // Creating the linked list
    Node *Head = new Node(0);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);

    // Linking the nodes
    Head->next = a;
    a->next = b;
    b->next = c;

    int Sum = 0;
    Node *Temp = Head;

    // Correcting the while loop condition and body
    while (Temp->next != NULL)
    {
        Sum += Temp->val;
        Temp = Temp->next;
    }

    // Adding the last node's value
    Sum += Temp->val;

    // Output the sum
    cout << "Sum : " << Sum << endl;

    return 0;
}
