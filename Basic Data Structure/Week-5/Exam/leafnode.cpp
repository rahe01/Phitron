#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node *left;
    Node *right;
    Node(int val) {
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

void collectLeafNode(Node* root, vector<int>& leaf) {
    if (root == NULL) {
        return;
    }

  
    if (root->left == NULL && root->right == NULL) {
        leaf.push_back(root->val);
    }

    collectLeafNode(root->left, leaf);
    collectLeafNode(root->right, leaf);
}

int main() {
    Node* root = input();
    vector<int> leaf;

    collectLeafNode(root, leaf);

 
    sort(leaf.rbegin(), leaf.rend());

  
    for (int val : leaf) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
