#include<bits/stdc++.h>
using namespace std;

class node {
    public:
        int data;
        node *next;

        node(int d){
            data = d;
            next = NULL;
        }
};

void insertAtTail(node* &head, int data) {
    if(head == NULL) {
        head = new node(data);
        return;
    }

    node *tail = head;
    while(tail-> next != NULL) {
        tail = tail -> next;

    }
    tail -> next = new node(data);
    return;
}

node* buildList() {
    int d;
    cin >> d;
    node*head = NULL;
    while(d != -1) {
        insertAtTail(head, d);
        cin >> d;
    }
    return head;
}

void printKthNode(node *head, int k ) {
    node *main_ptr = head;
    node *ref_ptr = head;

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
    node *head = buildList();
    int k;
    cin >> k;
    printKthNode(head, k);
    
}