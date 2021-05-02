#include<iostream>
using namespace std;
class node
{
    public:
    node*next;
    node*prev;
    int data;

    node(int d)
    {
        data=d;
        next=NULL;
        prev=NULL;
    }

};
void insertData(node*&head,node*&tail,int d)
{
    node*n=new node(d);
    if(head==NULL&&tail==NULL)
    {
        head=tail=n;
        //Modification:
        return;
    }
    tail->next=n;
    n->prev=tail;
    tail=n;
}
void insertionSort(node*&head)
{
    node*temp=head->next;
    node*p;
    while(temp!=NULL)
    {
           p=temp->prev;
           int no=temp->data;
           //Modifcation:
           while(p!=NULL&&p->data>no)
           {
                p->next->data=p->data;
                p=p->prev;
           }
           //Modification:
           if(p==NULL)
                head->data=no;
           else
                p->next->data=no;
           temp=temp->next;

    }

}
void print(node*head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main() {

    int n;
    cin>>n;
    node*head=NULL;
    node*tail=NULL;
    while(n--)
    {
        int x;
        cin>>x;
        insertData(head,tail,x);
    }
    //head->prev=NULL;
    insertionSort(head);
    print(head);


	return 0;
}
