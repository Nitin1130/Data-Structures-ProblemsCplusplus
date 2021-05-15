#include<bits/stdc++.h>
using namespace std;

class node {
    public:
        int data;
        node* left, *right;
        node(int d) {
            data = d;
            left = right = NULL;
        }
};

node *insertInBST(node *root, int val) {
    if(root == NULL) {
        return new node(val);
    }

    if(val <= root->data) {
        root->left = insertInBST(root->left, val);
    }
    else {
        root->right = insertInBST(root->right, val);
    }
    return root;

}

node *deleteInBST(node *root, int data) {
    if(root == NULL) {
        return NULL;
    }
    else if(data < root->data) {
        root->left = deleteInBST(root->left, data);
        return root;
    }
    else if(data == root->data) {
        //Case 1 Node with 0 child
        
        if(root->left == NULL && root->right == NULL) {
            delete root;
            return NULL;
        }
        //2. Case only 1 child
        if(root->left != NULL && root->right == NULL) {
            node *temp = root->left;
            delete root;
            return temp;
        }
        if(root->right != NULL && root->left == NULL) {
            node *temp = root->right;
            delete root;
            return temp;
        }
        //Case 2 children
        node *replace = root->right;//updated root->right
        //find inorder successor from right subtree
        while(replace->left != NULL) {
            replace = replace->left;
        }
        root->data = replace->data;
        root->right = deleteInBST(root->right, replace->data);//root->right
        return root;

    }
    else {
        root->right = deleteInBST(root->right, data);
        return root;
    }
}

void print(node* root) {
    if(root == NULL) {
        return ;
    }
    cout << root->data << " ";
    print(root->left);
    print(root->right);
}


int main() {

    int t;
    int n, m;
    cin >> t;
    int data1, data2;
    while(t--) {
        cin >> n;
        node *root = NULL;
        while(n--) {
            cin >> data1;
            root = insertInBST(root, data1);
        }
        cin >> m;
        while(m--) {
            cin >> data2;
            root = deleteInBST(root, data2);
        }
        print(root);
        cout << endl;
    }
    return 0;
}