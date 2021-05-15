#include<bits/stdc++.h>
using namespace std;

class node {
    public:
        string data;
        node *left , *right;

        node(string d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

node *buildtree() {
    string str;
    cin>>str;
    if(str=="false")
    {
           return NULL;
    }
    if(str=="true")
    {
         string d;
         cin>>d;
         node*root=new node(d);
        root->left=buildtree();
        root->right=buildtree();
        return root;
    }
    node*root=new node(str);
        root->left=buildtree();
        root->right=buildtree();
       return root;
}

vector<string> zigZagTraversal(node *root) {
    deque<node*> q;
    vector<string> str;
    q.push_back(root);
    str.push_back(root->data);
    node *temp;
    int level = 1;
    while(!q.empty()) {
        int n = q.size();
        for(int i = 0; i < n; i++) {
            if(level % 2 == 0)  {
                temp = q.back();
                q.pop_back();
            }
            else {
                temp = q.front();
                q.pop_front();
            }
            if(level % 2 != 0) {
                if(temp->right) {
                    q.push_back(temp->right);
                    str.push_back(temp->right->data);
                }
                if(temp->left) {
                    q.push_back(temp->left);
                    str.push_back(temp->left->data);
                }
            }
            else if(level % 2 == 0) {
                if(temp->left) {
                    q.push_front(temp->left);
                    str.push_back(temp->left->data);
                }
                if(temp->right) {
                    q.push_front(temp->right);
                    str.push_back(temp->right->data);
                }
            }
        }
        level++;
    }
    return str;
}




int main () {
    node *root = buildtree();
    vector<string> v;
    v = zigZagTraversal(root);
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    return 0;

    
}