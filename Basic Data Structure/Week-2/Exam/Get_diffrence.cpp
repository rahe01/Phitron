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


void maxMin_dif(Node* &head){
    int minVal = INT_MAX;
    int maxVal = INT_MIN;
    Node* temp = head;
    while(temp != NULL){
        if(temp->val < minVal){
            minVal = temp->val;
        }
        if(temp->val > maxVal){
            maxVal = temp->val;
        }

        temp = temp->next;
    }

    int duff = maxVal - minVal;

    cout << duff << endl;
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


    maxMin_dif(head);



    
    return 0;
}