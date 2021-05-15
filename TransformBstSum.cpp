#include<bits/stdc++.h>
using namespace std;

class node {
    public:
        int data;
        node *left, *right;
        node(int d) {
            data = d;
            left = right = NULL;
        }
};

node* build(int arr[],int s,int e)
{
	if(s>e)
	{
		return NULL;
	}
	int mid=(s+e)/2;
	node* root=new node(arr[mid]);
	root->left=build(arr,s,mid-1);
	root->right=build(arr,mid+1,e);
    return root;
}

void transformTreeUtil(node *root, int *sum) {
    if(root == NULL) {
        return;
    }

    //traverse in right subtree
    transformTreeUtil(root->right, sum);

    //sum Updation
    *sum = *sum + root->data;

    //store old sum in current node
    root->data = *sum;
    transformTreeUtil(root->left, sum);
}

void transformTree(node *root) {
    int sum = 0;
    transformTreeUtil(root, &sum);
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
    int n, a[1000];
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    root = build(a, 0, n - 1);
    transformTree(root);
    preOrder(root);
    return 0;
}