#include<bits/stdc++.h>
using namespace std;


class node {
    public:
        int data;
        node *left;
        node *right;
        
        node(int d) {
            data = d;
            left = NULL;
            right = NULL;

        }
};


node* buildTree(node *root) {
    int d;
    cin >> d;
    root = new node(d);
    queue<node *> q;
    q.push(root);
    while(!q.empty()) {
        node* temp = q.front();
        q.pop();
        cin >> d;
        if(d != -1) {
            temp->left = new node(d);
            q.push(temp->left);
        }
        cin >> d;
        if(d != -1) {
            temp->right = new node(d);
            q.push(temp->right);
        }
    }
    return root;
}

void correctBST(node * root, node ** first, node ** middle, node ** last, node **prev) {
    if(root) {
        //recur for the left subTree
        correctBST(root->left, first, middle, last, prev);
        if(*prev && root->data < (*prev)->data) {
            //if this is first violation
            if(!*first) {
                *first = *prev;
                *middle = root;
            }
            else {
                *last = root;
            }
        }
        // Mark this node as previous
        *prev = root;
        //recur for the right Subtree
        correctBST(root->right, first, middle, last, prev);
    }
}

void recoverTree(node *root) {
    node *first, *middle, *last, *prev;
    first = middle = last = prev = NULL;
    correctBST(root, &first, &middle, &last, &prev);
    if(first && last) {
        swap( &(first->data), &(last->data));
    }
    else if(first && middle) {
        swap( &(first->data), &(middle->data));
    }
}



int main() {
    node *root = buildTree(root);
    recoverTree(root);

    return 0;
}