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

void topView(node *root) {
    if(root == NULL) {
        return;
    }
    queue<node *> q;
    map<int, int> m;
    int hd = 0;
    root->hd = hd;
    q.push(root);
    while(q.size()) {
        hd = root->hd;


        if(m.count(hd) == 0) {
            m[hd] = root->data;
        }
        if(root->left) {
            root->left->hd = hd - 1;
            q.push(root->left);
        }
        if(root->right) {
            root->right->hd = hd + 1;
            q.push(root->right);
        }
        q.pop();
        root = q.front();
    }
    for(auto it = m.begin(); it != m.end(); it++) {
        cout << it->second << " ";
    }

}


int main() {
    node *root = NULL;
    root = buildTree(root);
    topView(root);
    return 0;
}