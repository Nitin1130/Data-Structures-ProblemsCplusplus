#include<bits/stdc++.h>

using namespace std;
#define int long long

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

class Info {
    public:
        int sz;
        int max;
        int min;
        int ans;
        bool isBST;
};

Info largestBSTBT(node *root) {
    if(root == NULL) {
        return{0, INT_MIN, INT_MAX, 0,true};
    }
    if(root->left == NULL && root->right == NULL) {
        return {1, root->data, root->data, 1, true};
    }
    Info left = largestBSTBT(root->left);
    Info right = largestBSTBT(root->right);

    Info ret;
    ret.sz = (1 + left.sz + right.sz);
    // if whole tree rooted under current root is BST
    if(left.isBST && right.isBST && left.max < root->data && right.min > root->data) {
        ret.min = min(left.min, min(right.min, root->data));
        ret.max = max(right.max, max(left.max, root->data));

        ret.ans = ret.sz;
        ret.isBST = true;
        return ret;
    }
    ret.ans = max(left.ans, right.ans);
    ret.isBST = false;
    return ret;
}


int32_t main() {
    int n;
    cin >> n;
    int preOrder[1000];
    for(int i = 0; i < n; i++) {
        cin >> preOrder[i];
    }
    int m;
    cin >> m;
    int inOrder[1000];
    for(int i = 0; i < m; i++) {
        cin >> inOrder[i];
    }
    node *root = preIno(&inOrder[0], &preOrder[0], 0, n - 1);
    cout << largestBSTBT(root).ans;
    return 0;
}