#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node *next;

        Node(int d){
            data = d;
            next = NULL;
        }
};

void insertAtTail(Node* &head, int data) {
    if(head == NULL) {
        head = new Node(data);
        return;
    }

    Node *tail = head;
    while(tail-> next != NULL) {
        tail = tail -> next;

    }
    tail -> next = new Node(data);
    return;
}

Node* buildList() {
    int d;
    cin >> d;
    Node*head = NULL;
    while(d != -1) {
        insertAtTail(head, d);
        cin >> d;
    }
    return head;
}

void printKthNode(Node *head, int k ) {
    Node *main_ptr = head;
    Node *ref_ptr = head;

    int count = 0;
    if(head != NULL) {
        while(count < k){
            if(ref_ptr == NULL) {
                return;
            }
            ref_ptr = ref_ptr->next;
            count++;
        }
        if(ref_ptr == NULL) {
            head = head -> next;
            if(head != NULL) {
                cout << main_ptr -> data << endl;
            }
        }
        else {
            while(ref_ptr != NULL) {
                main_ptr = main_ptr -> next;
                ref_ptr = ref_ptr -> next;
            }
            cout << main_ptr -> data;
        }
    }

}


int main() {
    Node *head = buildList();
    int k;
    cin >> k;
    printKthNode(head, k);
    
}