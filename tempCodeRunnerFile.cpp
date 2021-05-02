#include<bits/stdc++.h>
using namespace std;

class node{
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

void buildList(node*& head){
    int n;
    cin>>n;
    while(n--){
        int data;
        cin>>data;
        appendAtLast(head,data);
    }
    
}

void segregateEvenOdd(node *&head) {
    node *evenStart = NULL; //starting node of list having even values
    node *evenEnd = NULL; //ending node of even values list
    node *oddStart = NULL; //starting node of odd values
    node *oddEnd = NULL; //ending node of odd values
    node *curr = head; //node to traverse the list
    while(curr != NULL) {
        int val = curr -> data; 
        //if current value is even , add
        //it to the even value list
        if(val % 2 == 0) {
            if(evenStart == NULL) {
                evenStart = curr;
                evenEnd = evenStart;
            }
            else {
                evenEnd -> next = curr;
                evenEnd = evenEnd -> next;
            }
        }
        //if current value is odd, add
        //it to odd values
        else {
            if(oddStart == NULL) {
                oddStart = curr;
                oddEnd = oddStart;
            }
            else {
                oddEnd -> next = curr;
                oddEnd = oddEnd -> next;
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
    head = evenStart;

}

void printList(node *head) {
    while(head != NULL) {
        cout << head -> data << " ";
        head = head -> next;
    }
}

int main() {
    node *head = NULL;
    buildList(head);
    segregateEvenOdd(head);
    printList(head);
}