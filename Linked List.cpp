#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int val) {
        data = val;
        next = nullptr;
    }
};

void insertAthead(node* &head, int val) {
    node* n = new node(val);
    if (head == nullptr) {
        head = n;
        return;
    }
    n->next = head;
    head = n;
}

void display(node* head) {
    node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << "->";
        temp = temp -> next;
    }
    cout << "NULL" << endl;
}

bool search(node* head, int key){
    node* temp = head;
    while (temp != nullptr)
    {
        if (temp -> data == key)
        {
            return true;
        }
        temp = temp -> next;
        
    }
        return false;
}

int main() {
    node* head = nullptr;
    insertAthead(head, 4);
    insertAthead(head, 3);
    insertAthead(head, 2);
    insertAthead(head, 1);
    display(head);
    cout<<search(head,2)<<endl;
    return 0;
}
