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

node *buildTree(int *b,int start, int end) {
    if(start > end) {
        return NULL;
    }
    int mid = (start + end) / 2;
    node *root = new node(b[mid]);
    root->left = buildTree(b, start, mid - 1);
    root->right = buildTree(b, mid + 1 , end);
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

int main()  {
    int test;
    cin >> test;
    while(test--) {
        int n;
        cin >> n;
        int arr[100000];
        for(int i = 0 ; i < n; i++) {
            cin >> arr[i];
            
        }
        node *root = buildTree(arr,0, n - 1);
        preOrder(root);
        cout << endl;
        
    }
    return 0;
}