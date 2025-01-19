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

void printLevel(Node* root, int k) {
    if (root == NULL) {
        cout << "Invalid" << endl;
        return;
    }

    queue<Node*> q;
    q.push(root);
    int level = 0;

    while (!q.empty()) {
        int size = q.size();
        if (level == k) {
            for (int i = 0; i < size; i++) {
                Node* current = q.front();
                q.pop();
                cout << current->val << " ";
            }
            cout << endl;
            return;
        }
        for (int i = 0; i < size; i++) {
            Node* current = q.front();
            q.pop();
            if (current->left != NULL) q.push(current->left);
            if (current->right != NULL) q.push(current->right);
        }
        level++;
    }
    
 
    cout << "Invalid" << endl;
}
int main() {
    Node* root = input();
     int k;
    cin >> k;
    printLevel(root, k);
    
  
    return 0;
}
