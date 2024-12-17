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





void inset_at_tail(Node* &head, Node* &tail, int val){
    Node* newNode = new Node(val);

    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}



void linked_list_dublicate(Node *&head){
    
    int f[105] ={0};

    bool found = false;

    Node* temp = head;

    while(temp != NULL){
        f[temp->val]++;

        if(f[temp->val] > 1){
            found = true;
            break;
        }

        temp = temp->next;
    }

    if(found){
        cout << "YES" << endl;

    }
    else{
        cout << "NO" << endl;
    }

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
        
        inset_at_tail(head, tail, val);
    }



    linked_list_dublicate(head);





    
    return 0;
}