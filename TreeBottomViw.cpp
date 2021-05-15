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

map<int,pair<int, int> > m;
void bottomView(node *root, int d = 0, int h = 0) {
    if(root == NULL) {
        return;
    }
    if(m[d].second <= h) {
        m[d].second = h;
        m[d].first = root->data;
    }
    bottomView(root->left, d - 1, h + 1);
    bottomView(root->right, d + 1, h + 1);
    
}


int main() {
    node *root = NULL;
    root = buildTree(root);
    bottomView(root);
    for(auto it: m) {
        cout << it.second.first<< " ";
    }
     
    return 0;
}