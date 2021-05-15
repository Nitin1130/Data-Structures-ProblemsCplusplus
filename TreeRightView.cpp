#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        node *left;
        node *right;
        int data;
        int hd;
        node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

node *buildTree(node *root) {
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

void rightView(node *root) {
    if(root == NULL) {
        return;
    }
    queue<node *> q;
    q.push(root);
    while(!q.empty()) {
        int n = q.size();
        for(int i = 1; i <= n; i++) {
            
            node *temp = q.front();
            q.pop();

            if(i == n) {
                cout << temp->data << " ";
            }
            if(temp->left != NULL) {
                q.push(temp->left);
            }
            if(temp->right != NULL) {
                q.push(temp->right);
            }

        }
    }
}


int main() {
    node *root = buildTree(root);
    rightView(root);
    return 0;
}