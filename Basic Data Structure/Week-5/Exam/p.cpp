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

// Function to input the binary tree in level order
Node* input() {
    int val;
    cin >> val;

    if (val == -1) {
        return NULL;
    }

    Node *root = new Node(val);
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
