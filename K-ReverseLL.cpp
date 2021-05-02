#include<bits/stdc++.h>
using namespace std;

class node {
    public:
        int data;
        node *next;

        node(int d) {
            data = d;
            next = NULL;
        }
};

void appendAtLast(node *&head, int data) {
    //allocate node
    if(head == NULL) {
        head = new node(data);
        return;
    }
    node *tail = head;
    while(tail->next != NULL) {
        tail = tail -> next;
    }
    tail -> next = new node(data);
    return;
}

int buildList(node*& head){
    int n,k;
    cin>>n;
    cin>>k;
    while(n--){
        int data;
        cin>>data;
        appendAtLast(head,data);
    }
    return k;
}
void printList(node *node) {
    while(node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
}

node* reverse(node *head, int k) {
    int x = k;
    node *curr = head;
    node *prev = NULL;
    node *nex;
    while(curr != NULL && x > 0) {
        //save the next Node
        nex = curr -> next;
        //make the current Node point to prev
        curr->next = prev;
        //update p and c take them 1 step forward
        prev = curr;
        curr = nex;
        x--;
    }
    if(nex != NULL) {
        head->next = reverse(nex, k);
    }
    return prev;
}

int main() {
    node* head = NULL;
    int k = buildList(head);
    
    head = reverse(head, k); 
    printList(head); 
    return 0;
}