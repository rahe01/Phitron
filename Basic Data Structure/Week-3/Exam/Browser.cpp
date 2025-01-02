#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    string val;
    Node *next;
    Node *prev;
    Node(string val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insertAttail(Node *&head, Node *&tail, string val)
{
    Node *temp = new Node(val);
    if (head == NULL)
    {
        head = temp;
        tail = temp;
        return;
    }
    tail->next = temp;
    temp->prev = tail;
    tail = temp;

}


void handleHistory(Node*& head , int Q){
    Node *current = head;
    
    while (Q--)
    {
        string command;
        cin >> command;

        if(command == "visit"){
            string url;
            cin >> url;
            Node *temp = head;
            bool found = false;

            while(temp){
                if(temp->val == url){
                    current = temp;
                    cout << url << endl;
                    found = true;
                    break;
                }
                temp = temp->next;
            }

            if(!found){
                cout << "Not Available" << endl;
            }
        }
        else if(command == "next"){
            if(current->next != NULL){
                current = current->next;
                cout << current->val << endl;
            }
            else{
                cout << "Not Available" << endl;
            }
        }
        else if(command == "prev"){
            if(current->prev != NULL){
                current = current->prev;
                cout << current->val << endl;
            }
            else{
                cout << "Not Available" << endl;
            }
        }
        else{
               cout << "Not Available" << endl;
        }

        
    }
    

}


int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    string n;

    while (true)
    {
        
        cin >> n;
        if (n == "end")
        {
            break;
        }
        insertAttail(head, tail, n);
    }

    int Q ;
    cin >> Q;

    handleHistory(head, Q);

    

    return 0;
}
