#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node *next;

        Node(int d) {
            data = d;
            next = NULL;
        }
};

void appendAtLast(Node *&head, int data) {
    //allocate Node
    if(head == NULL) {
        head = new Node(data);
        return;
    }
    Node *tail = head;
    while(tail->next != NULL) {
        tail = tail -> next;
    }
    tail -> next = new Node(data);
    return;
}

int buildList(Node*& head){
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
void printList(Node *Node) {
    while(Node != NULL) {
        cout << Node->data << " ";
        Node = Node->next;
    }
}

Node* reverse(Node *head, int k) {
    int x = k;
    Node *curr = head;
    Node *prev = NULL;
    Node *nex;
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
    Node* head = NULL;
    int k = buildList(head);
    
    head = reverse(head, k); 
    printList(head); 
    return 0;
}