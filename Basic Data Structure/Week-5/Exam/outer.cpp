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

// Function to input the tree in level order
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
// Function to collect the left boundary excluding leaf nodes
void getLeftBoundary(Node* node, vector<int>& boundary) {
    Node* current = node->left;
    while (current) {
        if (current->left || current->right) boundary.push_back(current->val);
        current = (current->left) ? current->left : current->right;
    }
}

// Function to collect all leaf nodes
void getLeaves(Node* node, vector<int>& leaves) {
    if (!node) return;
    if (!node->left && !node->right) {
        leaves.push_back(node->val);
        return;
    }
    getLeaves(node->left, leaves);
    getLeaves(node->right, leaves);
}

// Function to collect the right boundary excluding leaf nodes
void getRightBoundary(Node* node, vector<int>& boundary) {
    Node* current = node->right;
    vector<int> temp;
    while (current) {
        if (current->left || current->right) temp.push_back(current->val);
        current = (current->right) ? current->right : current->left;
    }
    // Reverse to maintain correct order
    for (int i = temp.size() - 1; i >= 0; --i) {
        boundary.push_back(temp[i]);
    }
}

// Function to get the outer boundary of the binary tree
vector<int> getOuterBoundary(Node* root) {
    vector<int> boundary;
    if (!root) return boundary;
    
    boundary.push_back(root->val);  // Add root value to the boundary
    
    getLeftBoundary(root, boundary);  // Collect left boundary

    getRightBoundary(root, boundary); // Collect right boundary
    
    return boundary;
}

int main() {
    Node* root = input();
    vector<int> outerBoundary = getOuterBoundary(root);
    
    for (int val : outerBoundary) {
        cout << val << " ";
    }
    return 0;
}
