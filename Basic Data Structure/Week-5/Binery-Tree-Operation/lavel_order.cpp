#include <bits/stdc++.h>

using namespace std;


class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};


void preOrder(Node* root){
    if(root == NULL){
        return;
    }
    cout << root->val <<" ";
    preOrder(root->left);
    preOrder(root->right);
}


void lelvel_order(Node *root){
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        // 1. ber kore ana

        Node* f = q.front();
        q.pop();
        // 2. oi node niye kj kora
        cout << f->val << " ";
        // 3. children k push kora 
        if(f->left!= NULL)
            q.push(f->left);
        if(f->right!= NULL)
            q.push(f->right);
      

    }
}



int main(){
    Node* root = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* e = new Node(60);

    root->left = a;
    root->right = b;
    a->left = c;

    b->left = d;
    b->right = e;

    lelvel_order(root);


    
    return 0;
}