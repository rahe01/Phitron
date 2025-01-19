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


Node* input() {
    int val;
    cin >> val;

    Node *root;
    if (val == -1) {
        return NULL;
    } else {
        root = new Node(val);
    }

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* current = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        if (l != -1) {
            current->left = new Node(l);
            q.push(current->left);
        }
        if (r != -1) {
            current->right = new Node(r);
            q.push(current->right);
        }
    }
    return root;
}


int summ(Node* root) {
    if (root == NULL) {
        return 0;
    }
   
    if (root->left == NULL && root->right == NULL) {
        return 0;
    }

    
    int sum = root->val;
    
    
    sum += summ(root->left);
    sum += summ(root->right);

    return sum;
}

int main() {
    Node* root = input();
    cout << summ(root) << endl;
    return 0;
}
