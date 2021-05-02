#include <iostream>
using namespace std;


class Node
{
    public:
    int data;
    Node *next;

    Node(int d)
    {
        data=d;
        next=NULL;
    }

};


void create(Node *&head, int x )
{
    Node *n=new Node(x);

    if(head==NULL)
    {
        head=n;
        n->next=NULL;
    }
    else
    {
        Node *temp=head;

        while(temp->next!=NULL)
        {
            temp=temp->next;
        }

        temp->next=n;
        n->next=NULL;
    }
}


Node *kNode(Node *head, int k)
{
    Node *fast=head;
    Node*slow=head;

    int c=1;

    while(c<k)
    {
        fast=fast->next;
        c++;
    }

Node *prev;


    while(fast->next!=NULL)
    {
        prev=slow;
        fast=fast->next;
        slow=slow->next;
        //prev=prev->next;
    }

    fast->next=head;
    head=slow;
    prev->next=NULL;



return head;
}



void print(Node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}



int main()
{

    int n1;
    Node *head=NULL;

    int i,x,k;

    cin>>n1;
    for(i=0;i<n1;i++)
    {
       cin>>x;
       create(head,x);
    }

    cin>>k;
    k = k%n1;
    if(k==0){
        print(head);
    }else{
    Node*final=kNode(head,k);

    print(final);
    }

  

    return 0;
}
