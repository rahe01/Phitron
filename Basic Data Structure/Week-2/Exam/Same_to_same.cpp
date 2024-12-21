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


bool same(Node* head, Node* head1){
    while(head!= NULL && head1!= NULL){
        if(head->val!= head1->val){
            return false;
        }
        head = head->next;
        head1 = head1->next;
    }
    return head == NULL && head1 == NULL;
}







int main(){

    Node* head = NULL;
    Node* tail = NULL;
    Node* head1 = NULL;
    Node* tail1 = NULL;


    int val;

    while(true){
        cin >> val;
        if(val == -1){
            break;
        }

        insert_at_tail(head, tail, val);

    }

    int val1;
    while(true){
        cin >> val1;
        if(val1 == -1){
            break;
        }
        insert_at_tail(head1, tail1, val1);
    }


    if(same(head ,head1)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }


   



    
    return 0;
}