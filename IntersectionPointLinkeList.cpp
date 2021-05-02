#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int d)
    {
        data = d;
        next = NULL;
    }
};

// This function gets two arguments - the head pointers of the two linked lists
// Return the node which is the intersection point of these linked lists
// It is assured that the two lists intersect


int countNodes(Node*head){
    int len=0;
    while(head!=NULL){
        head=head->next;
        len++;
    }
    return len;
}

Node *intersectionOfTwoLinkedLists(Node *l1, Node *l2){
    int c1 = countNodes(l1);
    int c2 = countNodes(l2);
    if(c2 > c1)
    {
    int d = c2 - c1;
    while(d--){
        l2=l2->next;
    }
    Node*p=l2;
    Node*q=l1;

    while(p!=NULL && q!=NULL && p != q){//make sure p and q are not null and compare address , and make sure 
       
        p=p->next;
        q=q->next;
    }
    return p;
    }
    else
    {
        int d = c1 - c2;
    while(d--){
        l1=l1->next;
    }
    Node*p=l1;
    Node*q=l2;

    while(p!=NULL && q!=NULL && p != q){//make sure p and q are not null and compare address , and make sure 
        p=p->next;
        q=q->next;
    }
    return p;
    }
}


/*
*
*
*   You do not need to refer or modify any code below this. 
*   Only modify the above function definition.
*	Any modications to code below could lead to a 'Wrong Answer' verdict despite above code being correct.
*	You do not even need to read or know about the code below.
*
*
*
*/

Node *buildList(unordered_map<int, Node *> &hash)
{
    int x;
    cin >> x;
    Node *head = new Node(x);
    Node *current = head;
    hash[x] = head;
    while (x != -1)
    {
        cin >> x;
        if (x == -1)
            break;
        Node *n = new Node(x);
        hash[x] = n;
        current->next = n;
        current = n;
    }
    current->next = NULL;
    return head;
}

void printLinkedList(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    unordered_map<int, Node *> hash;
    Node *l1 = buildList(hash);

    Node *l2 = NULL;
    int x;
    cin >> x;
    l2 = new Node(x);
    Node *temp = l2;

    while (x != -1)
    {
        cin >> x;
        if (x == -1)
            break;
        if (hash.find(x) != hash.end())
        {
            temp->next = hash[x];
            break;
        }
        Node *n = new Node(x);
        temp->next = n;
        temp = n;
    }

    cout << "L1 - ";
    printLinkedList(l1);
    cout << "L2 - ";
    printLinkedList(l2);

    Node *intersectionPoint = intersectionOfTwoLinkedLists(l1, l2);
    cout << "Intersection at node with data = " << intersectionPoint->data << endl;

    return 0;
}