#include<bits/stdc++.h>
using namespace std;

class Node{
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

void buildList(Node*& head){
    int n;
    cin>>n;
    while(n--){
        int data;
        cin>>data;
        appendAtLast(head,data);
    }
    
}

void segregateEvenOdd(Node *&head) {
    Node *evenStart = NULL; //starting Node of list having even values
    Node *evenEnd = NULL; //ending Node of even values list
    Node *oddStart = NULL; //starting Node of odd values
    Node *oddEnd = NULL; //ending Node of odd values
    Node *curr = head; //Node to traverse the list
    while(curr != NULL) {
        int val = curr -> data; 
        //if current value is even , add
        //it to the even value list
        if(val % 2 != 0) {
            if(oddStart == NULL) {
                oddStart = curr;
                oddEnd = oddStart;
            }
            else {
                oddEnd -> next = curr;
                oddEnd = oddEnd -> next;
            }
        }
        //if current value is odd, add
        //it to odd values
        else {
            if(evenStart == NULL) {
                evenStart = curr;
                evenEnd = evenStart;
            }
            else {
                evenEnd -> next = curr;
                evenEnd = evenEnd -> next;
            }
        }
        //move head pointer one step in 
        //forward direction
        curr = curr -> next;
    }
    //if either odd list or even list is empty,
    //no change is required as all elements
    //are either even or odd
    if(oddStart == NULL || evenStart == NULL) {
        return;
    }
    //modify head pointer to 
    //starting of even list
    
    evenEnd->next=NULL;//teminate even list
    oddEnd->next=evenStart;//added : attach even list after odd list
    
    head = oddStart;//update head

}

void printList(Node *head) {
    while(head != NULL) {
        cout << head -> data << " ";
        head = head -> next;
    }
}

int main() {
    Node *head = NULL;
    buildList(head);
    segregateEvenOdd(head);
   printList(head);
}