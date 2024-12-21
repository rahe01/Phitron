#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};








void insert_at_tail(Node* &head, Node* &tail , int val){
    Node* newNode = new Node(val);

    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
   
}


void  delet_dublicate(Node *head)
{
    Node *current = head;

    while (current != NULL)
    {
        Node *next_node = current; 
        while (next_node->next != NULL)
        {
            if (next_node->next->val == current->val)
            {
               
                Node *toDelete = next_node->next;
                next_node->next = next_node->next->next; 
                delete toDelete;
            }
            else
            {
                next_node = next_node->next; 
            }
        }
        current = current->next; 
    }
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




int main(){

    Node* head = NULL;
    Node* tail = NULL;
   


    int val;

    while(true){
        cin >> val;
        if(val == -1){
            break;
        }

        insert_at_tail(head, tail, val);

    }

    delet_dublicate(head);

    print_list(head);

  

  

   



    
    return 0;
}