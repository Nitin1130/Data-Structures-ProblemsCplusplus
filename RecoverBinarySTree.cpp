#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};


node * buildTree()
{
	int d;
	cin>>d;
	if(d == -1)
		return NULL;

	node * root = new node(d);

	root->left = buildTree();
	root->right = buildTree();

	return root;
}

void correctBSTUtil( struct node* root, struct node** first, 
                     struct node** middle, struct node** last, 
                     struct node** prev ) 
{ 
    if( root ) 
    { 
        correctBSTUtil( root->left, first, middle, last, prev ); 
  
       
        if (*prev && root->data < (*prev)->data) 
        { 
            if ( !*first ) 
            { 
                *first = *prev; 
                *middle = root; 
            } 
            else
                *last = root; 
        } 
  
        
        *prev = root; 
  
        
        correctBSTUtil( root->right, first, middle, last, prev ); 
    } 
} 

node * correctBST(node* root ) 
{ 
    
    node *first, *middle, *last, *prev; 
    first = middle = last = prev = NULL; 
  
    
    correctBSTUtil( root, &first, &middle, &last, &prev); 
  
    
    if( first && last ) 
    {
        // swap(first->data, last->data); 
        // cout<<min(first->data, last->data)<<" "<<max(first->data, last->data);
        if(first->data > last->data)
        {
            cout<<last->data<<" "<<first->data;
        }
        else
        {
            cout<<first->data<<" "<<first->data;
        }
    }
    else if( first && middle ) 
    {
        // swap(first->data, middle->data);
        // cout<<min(first->data, last->data)<<" "<<max(first->data, last->data);
        if(first->data > middle->data)//u were using last here
        {
            cout<<middle->data<<" "<<first->data;
        }
        else
        {
            cout<<first->data<<" "<<middle->data;// here u were using last
        }
    }

    return root; 
  
} 

int main() {
	node* root = buildTree();
	correctBST(root);
    return 0;
}