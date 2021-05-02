#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    //constructor
    Node(int d) {
        data = d;
        next = NULL;
    }

};
//passing a pointer by reference
void insertAtHead(Node *&head, int d) {
    if(head == NULL) {
        head = new Node(d);
        return;
    }

    Node *n = new Node(d);
    n->next = head;
    head = n;


}

void print(Node *head) {
    while(head != NULL) {
        cout << head->data << " ->";
        head = head->next;
    }

}

int length(Node *head) {
    int cnt = 0;
    while(head != NULL) {
        cnt++;
        head = head->next;
    }
    return cnt;
}
void insertAtTail(Node *&head, int data){
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

void insertInMiddle(Node *&head, int data, int p){
    if(head == NULL || p == 0) {
        insertAtHead(head, data);
        return;
    }
    else if(p > length(head)) {
        insertAtTail(head, data);
    }
    else {
        //take p - 1 jumps
        int jump = 1;
        Node *temp = head;
        while(jump <= p - 1) {
            temp = temp->next;
            jump++;
        }
        //create a new Node
        Node *n = new Node(data);
        n->next = temp->next;
        temp->next = n;
    }
}


void deleteHead(Node *&head) {
    if(head == NULL) {
        return;
    }
    Node *temp = head->next;
    delete head;
    head = temp;
}


//search Operation
//Linear Search
bool search(Node *head, int key) {
    Node *temp = head;
    while(temp != NULL) {
        if(head->data == key) {
            return true;
        }
        head = head->next;

    }
    return false;
    
}

// recursively
bool searchRecursive(Node*head, int key) {
    if(head == NULL) {
        return false;
    }
    //rec case to check at head, remaining linked list
    if(head->data == key) {
        return true;
    }
    else {
        return searchRecursive(head->next, key);
    }
}



Node* take_input() {
    int d;
    cin >> d;
    Node *head = NULL;
    while(d != -1) {
        insertAtHead(head, d);
        cin >> d;
    }
    return head;
}

istream& operator>>(istream &is, Node *&head) {
    head = take_input();
    return is;
}

ostream& operator<<(ostream &os, Node *head) {
    print(head);
    return os;
}

void reverse(Node *head) {
    Node *C = head;
    Node *P = NULL;
    Node *N;
    while(C != NULL) {
        //save the next Node
        N = C -> next;
        //make the current Node point to prev
        C->next = P;
        //update p and c take them 1 step forward
        P = C;
        C = N;
    }
    head = P;
}

Node* recReverse(Node *head) {
    //smallest linked list
    if(head-> next == NULL or head == NULL) {
        return head;
    }
    //rec case
    Node *shead = recReverse(head->next);
    Node *temp = head->next;
    temp->next = head;
    head->next = NULL;
    return shead;
    
}

Node* midpoint (Node *head) {
    if(head == NULL or head->next == NULL) {
        return head;
    }

    Node *slow = head;
    Node *fast = head->next;
    while(fast != NULL and fast->next != NULL) {
        fast = fast -> next -> next;
        slow = slow -> next;
    }
    return slow;
}
int main() {
    Node *head;
    cin >> head;
    cout << head;
    Node *mid = midpoint(head);
    cout << mid -> data << endl;

    // insertAtHead(head, 5);
    // insertAtHead(head, 2);
    // insertAtHead(head, 1);
    // insertAtHead(head, 0);

    // insertInMiddle(head, 4, 3);
    // insertAtTail(head, 7);
    // print(head);
    // deleteHead(head);
    // print(head);


    // int key;
    // cin >> key;
    // if(searchRecursive(head, key)) {
    //     cout << "Element Found";

    // }
    // else {
    //     cout << "Not Found";
    // }
}