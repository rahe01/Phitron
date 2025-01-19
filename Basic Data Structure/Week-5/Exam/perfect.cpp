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

int calculateDepth(Node* root) {
    int depth = 0;
    while (root != NULL) {
        depth++;
        root = root->left;
    }
    return depth;
}


int countNodes(Node* root) {
    if (root == NULL) {
        return 0;
    }
    return 1 + countNodes(root->left) + countNodes(root->right);
}


bool isPerfect(Node* root) {
    if (root == NULL) {
        return false;
    }

    int depth = calculateDepth(root) - 1;
    int totalNodes = countNodes(root);
    int expectedNodes = pow(2, depth + 1) - 1;

    return totalNodes == expectedNodes;
}

int main() {
    Node* root = input();

    if (isPerfect(root)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}