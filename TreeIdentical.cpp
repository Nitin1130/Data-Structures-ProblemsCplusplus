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



int identicalTree(node *a, node *b) {
    if(a == NULL && b == NULL) {
        return 1;
    }
    if(a != NULL && b != NULL) {
        return (
            
            identicalTree(a->left, b->left) && 
            identicalTree(a->right, b->right)
        );
    }
    return 0;
}

node *createNode(node *root) {
    int d;
    cin >> d;
    root = new node(d);
    string s;
    cin >> s;
    if(s == "true") {
        root->left = createNode(root->left);
    }
    cin >> s;
    if(s == "true") {
        root->right = createNode(root->right);
    }
    return root;
}

void preOrder(node *root) {
    if(root == NULL) {
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

int main() {
    node *root = NULL;
    node *root1 = NULL;
    root = createNode(root);
    root1 = createNode(root1);
    if(identicalTree(root, root1) == 1) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }


}