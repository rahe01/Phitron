#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};


bool insertAtAnyIndex(Node *&head, Node *&tail, int index, int val) {
    Node *newNode = new Node(val);

    if (index < 0 || index > 1000) {
        cout << "Invalid" << endl;
        delete newNode;
        return false; 
    }

    if (index == 0) {
     
        if (head == NULL) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    } else {
        Node *temp = head;
        int currentIndex = 0;

    
        while (temp != NULL && currentIndex < index - 1) {
            temp = temp->next;
            currentIndex++;
        }

        if (temp == NULL) {
            
            cout << "Invalid" << endl;
            delete newNode;
            return false;
        }

        if (temp->next == NULL) {
            
            temp->next = newNode;
            newNode->prev = temp;
            tail = newNode;
        } else {
         
            newNode->next = temp->next;
            newNode->prev = temp;
            temp->next->prev = newNode;
            temp->next = newNode;
        }
    }

    return true; 
}

void printLeftToRight(Node *head) {
    cout << "L -> ";
    Node *temp = head;
    while (temp != NULL) {
        cout << temp->val;
        if (temp->next != NULL)
            cout << " ";
        temp = temp->next;
    }
    cout << endl;
}

void printRightToLeft(Node *tail) {
    cout << "R -> ";
    Node *temp = tail;
    while (temp != NULL) {
        cout << temp->val;
        if (temp->prev != NULL)
            cout << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int main() {
    Node *head = NULL;
    Node *tail = NULL;

    int Q;
    cin >> Q;

    while (Q--) {
        int x, v;
        cin >> x >> v;

        bool success = insertAtAnyIndex(head, tail, x, v);

       
        if (success && head != NULL) {
            printLeftToRight(head);
            printRightToLeft(tail);
        }
    }

    return 0;
}
