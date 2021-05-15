#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;
        node(int d) {
            data = d;
            left = right = NULL;
        }
};

node * preIno(int *inOrder, int *preOrder, int s, int e) {
    static int i = 0;
    if(s > e) {
        return NULL;
    }
    node* root = new node(preOrder[i]);
    int index = -1;
    for(int j = s; j <= e; j++) 
        if(inOrder[j] == preOrder[i]) {
            index = j;
            break;
        }
        ++i;// moving ahead in preorder array
        root->left = preIno(inOrder, preOrder, s, index - 1);
        root->right = preIno(inOrder, preOrder, index + 1, e);
        return root;
    }


void printStyle(node *root) {
    if(root == NULL) {
        return;
    }
    if(root->left == NULL) {
        cout << "END => ";
    }
    else {
        cout << root->left->data<< "  => ";
    }
    cout << root->data;
    if(root->right == NULL) {
        cout << " <= END " << endl;
    }
    else {
        cout << " <= " << root->right->data << endl;
    }
    printStyle(root->left);
    printStyle(root->right);
}


int main() {
    int n;
    cin >> n;
    int preOrder[100];
    for(int i = 0; i < n; i++) {
        cin >> preOrder[i];
    }
    int m;
    cin >> m;
    int inOrder[100];
    for(int i = 0; i < m; i++) {
        cin >> inOrder[i];
    }
    node *root = preIno(&inOrder[0], &preOrder[0], 0, n - 1);
    printStyle(root);
    return 0;
}