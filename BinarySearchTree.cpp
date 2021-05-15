#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;

        node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }

};

node* insertInBst(node *root, int data) {
    if(root == NULL) {
        return new node(data);
    }
    if(data <= root->data) {
        root->left = insertInBst(root->left, data);
    }
    else {
        root->right = insertInBst(root->right, data);
    }
    return root;
}
void bfsNew(node *root) {
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()) {
        node *f = q.front();
        if(f == NULL) {
            cout << endl;
            q.pop();
            if(!q.empty()) {
                q.push(NULL);
            }
        }
        else {
            cout << f->data<< " ";
            q.pop();

            if(f->left) {
                q.push(f->left);
            }
            if(f->right) {
                q.push(f->right);
            }
        }
    }
    return;
}

node* build() {
    int d;
    cin >> d;
    node *root = NULL;
    while(d != -1) {
        root = insertInBst(root, d);
        cin >> d;
    }
    return root;
}

bool search(node *root, int data) {
    if(root == NULL) {
        return false;
    }
    if(root->data == data) {
        return true;
    }
    if(data <= root->data) {
        return search(root->left, data);
    }
    else {
        return search(root->right, data);
    }

}

//Inorder print
void inOrderPrint(node* root) {
    if(root == NULL) {
        return;
    }
    inOrderPrint(root->left);
    cout << root->data << " ";
    inOrderPrint(root->right);
}

node* deleteInBST(node *root, int data) {
    if(root == NULL) {
        return NULL;
    }
    else if(data < root->data) {
        root->left = deleteInBST(root->left, data);
        return root;
    }
    else if(data == root->data) {
        // Found the node to delete 3 cases
        //Node with 0 children -- leaf node
        if(root->left == NULL && root->right == NULL) {
            delete root;
            return NULL;
        }
       //Case only 1 child
        if(root->left != NULL && root->right == NULL) {
            node *temp = root->left;
            delete root;
            return temp;
        }
        if(root->left == NULL && root->right != NULL) {
            node* temp = root->right;
            delete root;
            return temp;
        }

       //case 2 children
        node *replace = root->right;
        while(replace->left != NULL){
           replace = replace->left;
        } 
        root->data = replace->data;
        root->right = deleteInBST(root->right, replace->data);
        return root;
    }
    else {
        root->right = deleteInBST(root->right, data);
        return root;
    }
}

bool isBST(node* root, int minV = INT_MIN, int maxV = INT_MAX) {
    if(root == NULL) {
        return true;
    }
    if(root->data >= minV && root->data <= maxV &&
      isBST(root->left, minV, root->data) && 
      isBST(root->right, root->data, maxV)) {
          return true;
      }
      return false;
}

class LinkedList {
    public: 
        node*head;
        node*tail;
};

LinkedList flatten(node* root) {
    LinkedList l;
    if(root == NULL) {
        l.head = l.tail = NULL;
        return l;
    }
    if(root->left == NULL && root->right == NULL) {
        l.head = l.tail = root;
        return l;
    }
    // left is not NULL
    if(root->left != NULL && root->right == NULL) {
        LinkedList leftLL = flatten(root->left);
        leftLL.tail->right = root;
        l.head = leftLL.head;
        l.tail = root;
        return l;
    }

    // Right is not NULL
    if(root->right != NULL && root->left == NULL) {
        LinkedList rightLL = flatten(root->right);
        root->right = rightLL.head;
        l.head = root;
        l.tail = rightLL.tail;
        return l;
    }

    //Both side are not null
    LinkedList leftLL = flatten(root->left);
    LinkedList rightLL = flatten(root->right);
    leftLL.tail->right = root;
    root->right = rightLL.head;
    l.head = leftLL.head;
    l.tail = rightLL.tail;
    return l;
}


int main() {
    node* root = build();
    inOrderPrint(root);
    cout << endl;
    bfsNew(root);

    int s;
    cin >> s;
    if(search(root,s)) {
        cout << "Present";
    }
    else {
        cout << "Not present";
    }
    cout << endl;
    root = deleteInBST(root, s);
    inOrderPrint(root);

    cout << endl;
    if(isBST(root)) {
        cout << "Yes";
    }
    else {
        cout << "Not BST";
    }
    cout << endl;

    LinkedList l = flatten(root);
    node *temp = l.head;
    while(temp != NULL) {
        cout << temp->data<< "->";
        temp = temp->right;
    }
    cout << endl;
    
    return 0;
}