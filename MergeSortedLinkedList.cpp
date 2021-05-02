#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    Node *next;
    int data;

    Node(int d) {
        data = d;
        next = NULL;
    }
};
void print(Node* head)
{
   
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return;
}



Node* merge(Node *a, Node *b) {
    //base case
    if(a == NULL) {
        return b;
    }
    if(b == NULL) {
        return a;
    }

    //take a temporory head pointer
     Node *c;
     if(a -> data < b -> data) {
         c = a;
         c -> next = merge(a -> next, b);
     }
     else {
         c = b;
         c -> next = merge(a, b->next);
     }
     return c;
}
void buildlist(Node* & head, int n)
{
     while(n>0)
     {
        int d;
        cin>>d;
    if(head==NULL)
    {
        head=new Node(d);
    }
   else
   { 
    Node * tail= head;

    while(tail->next!=NULL)
    {
        tail=tail->next;
    }
    tail->next=new Node(d);
    }
    n--;
    }
}


int main () {
    int test;
    cin >> test;
    while(test-- != 0) {
    
    
		Node* head1=NULL;
	    Node* head2=NULL;
        int n;
		cin>>n;
		buildlist(head1,n);
	    int m;
	    cin>>m;
        buildlist(head2,m);
	
        Node * c =merge(head1, head2);
	    print(c);
        cout<<endl; 
        

    
    }
    return 0;
}