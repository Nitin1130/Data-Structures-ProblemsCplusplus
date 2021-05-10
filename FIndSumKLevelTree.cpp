#include<bits/stdc++.h>
using namespace std;

class node {
    public:
        int data;
        node *left;
        node *right;
        int noOfChildren;


        node(int d, int n) {
            data = d;
            left = NULL;
            right = NULL;
            noOfChildren = NULL;
        }
};

int sumAtKthLevel(node *root, int k) {
    if(root == NULL) {
        return 0;
    }
    //create queue 
    queue<node*> qu ;
    qu.push(root);
    int level = 0; //track cuurent level
    int sum = 0;    //To store the sum of nodes at Kth level
    int flag = 0; // to break out of the loop

    while(!qu.empty()) {
        int size = qu.size();
        while(size--) {
            node* ptr = qu.front();
            qu.pop();

            if(level == k) {
                flag = 1;
                sum += ptr->data;
            }
            else {
                if(ptr->left) {
                    qu.push(ptr->left);
                }
                if(ptr->right) {
                    qu.push(ptr->right);
                }
            }
        }
        level++; // increament level by 1
        if(flag == 1) {
            break;
        }
    }
    return sum;
}



node *buildTree(node *root) {
    int d, n;
    cin >> d >> n;
    root = new node(d, n);
    if(n == 0) {
        return root;
    }
    else if(n == 1) {
        root->left = buildTree(root->left);
        return root;
    }
    else {
        root->left = buildTree(root->left);
        root->right = buildTree(root->right);
        return root;
    }

}

int main() {
    node *root = NULL;
    root = buildTree(root);
    int k;
    cin >> k;
    cout << sumAtKthLevel(root, k);
    return 0;
}