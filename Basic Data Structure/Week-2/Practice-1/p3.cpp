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



int linked_list_size(Node *&head){
    int count = 0;
    Node* temp = head;
    while(temp!= NULL){
        count++;
        temp = temp->next;
    }


    return count;


}


void print_middle(Node* head){
    int size = linked_list_size(head);
    int mid1 = size / 2;

    int mid2 = (size %2 ==0) ? mid1 -1 : mid1;



    Node* temp = head;
    for(int i = 0; i < mid2; i++){
        temp = temp->next;
    }

    if(size %2 == 0){
        cout << "Middle elements are: " << temp->val << " and " << temp->next->val << endl;
    }
    else{
        cout << "Middle element is: " << temp->val << endl;
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

    print_middle(head);



    





    
    return 0;
}