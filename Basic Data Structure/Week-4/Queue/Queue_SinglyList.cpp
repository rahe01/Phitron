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

class myQueue{
    public:
    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0;

    void push(int val) {
        sz ++;
        Node* newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop(){
        sz--;
        if(head == NULL){  
            tail = NULL;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    int front(){
        if(head == NULL){
            return -1;
        }
        return head->val;
    }

    int back(){
        if(tail == NULL){
            return -1;
        }
        return tail->val;
    }

    int size(){
        return sz;

    }
    
    bool empty(){
        if(head == NULL){
            return true;
        }
        return false;
    }

};


int main(){
    myQueue q;

    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        q.push(x);
    }

    while(!q.empty()){
        cout<< q.front() << " ";
        q.pop();
    }


    
    return 0;
}