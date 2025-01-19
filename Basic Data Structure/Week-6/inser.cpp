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

Node* input(){
    int val;
    cin >> val;

    Node *root ;
    if(val == -1){
        root = NULL;
    }
    else{
        root = new Node(val);
    }
    queue<Node*> q;
    if(root != NULL){
        q.push(root);
    }

    while(!q.empty()){
       // 1. ber kore ana

        Node* f = q.front();
        q.pop();
        // 2. oi node niye kj kora
      int l , r;
        cin >> l >> r;

        Node* myLeft , *myRight;
        if(l == -1){
            myLeft = NULL;
           
        }
        else{
           
            myLeft = new Node(l);
        }
        if(r == -1){
            myRight = NULL;
            

        }
        else{
            
            myRight = new Node(r);
        }
        f->left = myLeft;
        f->right = myRight;

        // 3. children k push kora 
        if(f->left!= NULL)
            q.push(f->left);
        if(f->right!= NULL)
            q.push(f->right);
        
    }
    return root;
}

void insert(Node* &root, int val){
    if(root==NULL){
        root = new Node(val);
        return;
    }
    if(val < root->val){
        if(root->left == NULL){
            root->left = new Node(val);
        }
        else{
            insert(root->left, val);
        }
    }
    else{
        if(root->right == NULL){
            root->right = new Node(val);
        }
        else{
            insert(root->right, val);
        }
    }

}
int main(){
    Node* root = input();
    int val;
    cin >> val;
    insert(root, val);
  
    
    return 0;
}