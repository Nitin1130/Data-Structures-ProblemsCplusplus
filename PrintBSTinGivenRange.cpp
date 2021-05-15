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

node *buildTree(node *root, int value) {
    if(root == NULL) {
        node * root = new node(value);
        return root;
    }
    if(value > root->data) {
        root->right = buildTree(root->right, value);
    }
    else if(value < root->data) {
        root->left = buildTree(root->left, value);
    }
    return root;
}

void preOrderPrint(node *root) {
    if(root == NULL) {
        return;
    }
    cout << root->data<< " ";
    preOrderPrint(root->left);
    preOrderPrint(root->right);
    
}

node *arrToBST(int *a, node *root, int n) {
    for(int i = 0; i < n; i++) {
        root = buildTree(root, a[i]);
    }
    return root;
}


void printBstRange(node *root, int k1, int k2) {
    if(root == NULL) {
        return;
    }
    if(k1 < root->data) {
        printBstRange(root->left, k1, k2);
    }
    if(k1 <= root->data && k2 >= root->data){
        cout << root->data<< " ";
    }
    if(k2 > root->data) {
        printBstRange(root->right, k1, k2);
    }
}

int main() {
    int test;
    cin >> test;

    while(test--) {
        int n;
        cin >> n;
        int arr[50];
        for(int i = 0; i < n;i++) {
            cin >> arr[i];
        }

        node *root = NULL;
        root = arrToBST(arr, root, n);
        int k1, k2;
        cin >> k1 >> k2;
        cout << "# Preorder : ";
        preOrderPrint(root);
        cout << endl;
        cout << "# Nodes within range are : ";
        printBstRange(root, k1, k2);
        cout << endl;
        
    }
    return 0;
}