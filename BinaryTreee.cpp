#include<bits/stdc++.h>
using namespace std;

class node {
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

node* buildTree() {
    int d;
    cin >> d;
    if(d == -1) {
        return NULL;
    }
    node *root = new node(d);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}
void printPr(node *root) {
    if(root == NULL) {
        return;
    }
    cout << root->data<< " ";
    printPr(root->left);
    printPr(root->right);
}
void printIn(node *root) {
    if(root == NULL) {
        return;
    }
    printIn(root->left);
    cout << root->data << " ";
    printIn(root->right);
}

void printPost(node *root) {
    if(root == NULL) {
        return;
    }
    printPost(root->left);
    printPost(root->right);
    cout << root->data << " ";
}

int height(node *root) {
    if(root == NULL) {
        return 0;
    }
    int ls = height(root->left);
    int rs = height(root->right);
    return max(ls, rs) + 1; 
}

void printKthLevel(node *root, int k) {
    if(root == NULL) {
        return;
    }
    if(k == 1) {
        cout << root->data << " ";
        return;
    }
    printKthLevel(root->left, k - 1);
    printKthLevel(root->right, k - 1);
    return;

}

void printAllLevels(node *root) {
    int h = height(root);
    for(int i = 1; i <= h;i++) {
        printKthLevel(root, i);
        cout << endl;
    }
    return; 
}

void bfs(node *root) {
    queue<node*> q;
    q.push(root);
    
    while(!q.empty()) {
        node *f = q.front();
        cout << f->data<< " ";
        q.pop();

        if(f->left) {
            q.push(f->left);
        }
        if(f->right) {
            q.push(f->right);
        }
    }
    return;
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

int count(node* root) {
    if(root == NULL) {
        return 0;
    }
    return 1 + count(root->left) + count(root->right);
}

int diameter(node *root) {
    if(root == NULL) {
        return 0;
    }

    int h1 = height(root->left);
    int h2 = height(root->right);
    int op1 = h1 + h2;
    int op2 = diameter(root->left);
    int op3 = diameter(root->right);
    return max(op1, max(op2,op3));
}

class Pair {
    public :
        int height;
        int diameter;

};

Pair fastDiameter(node *root) {
    Pair p;
    if(root == NULL) {
        p.diameter = p.height = 0;
        return p;
    }

    Pair left = fastDiameter(root->left);
    Pair right = fastDiameter(root->right);
    p.height = max(left.height, right.height) + 1;
    p.diameter = max(left.height + right.height, max(left.diameter, right.diameter));
    return p;
}

int replaceSum(node *root) {
    if(root == NULL) {
        return 0;
    }
    if(root->left == NULL && root->right == NULL) {
        return root->data;
    }
    //Recursion
    int leftSum = replaceSum(root->left);
    int rightSum = replaceSum(root->right);
    int temp = root->data;
    root->data = leftSum + rightSum;
    return temp + root->data;

}

class HBPair {
    public:
        int height;
        bool balance;
};
HBPair isHeightBalanced(node *root) {
    HBPair p;
    if(root == NULL) {
        p.height = 0;
        p.balance = true;
        return p;
    }
    //Recursive case;
    HBPair left = isHeightBalanced(root->left);
    HBPair right = isHeightBalanced(root->right);
    p.height = max(left.height, right.height) + 1;
    if(abs(left.height - right.height) <= 1 && left.balance && right.balance) {
        p.balance = true;
    }
    else {
        p.balance = false;
    }
    return p;
}

node *buildTreefromArray(int *a, int s, int e) {
    if(s > e) {
        return NULL;
    }
    int mid = (s + e) / 2;
    node *root = new node(a[mid]);
    root->left = buildTreefromArray(a, s , mid - 1);
    root->right = buildTreefromArray(a, mid + 1,e);
    return root;
}

void printRightView(node *root, int level, int &maxlevel) {
    if(root == NULL) {
        return;
    }
    if(maxlevel < level) {
        cout << root->data << " ";
        maxlevel = level;
    }

    printRightView(root->right, level + 1, maxlevel);
    printRightView(root->left, level + 1, maxlevel);
}

int main() {

    node* root = buildTree();
    printPr(root);
    cout << endl;
    printIn(root);
    cout<< endl;
    printPost(root);
    cout << endl;
    cout<< height(root);

    cout << endl;
    printKthLevel(root, 3);

    cout << endl;
    printAllLevels(root);
    cout << endl;
    
    bfs(root);
    cout<< endl;


    bfsNew(root);
    cout << endl;


    cout << diameter(root);
    cout << endl;


    Pair p = fastDiameter(root);
    cout << p.height << endl;
    cout << p.diameter << endl;
    cout << endl;


    cout << replaceSum(root) << endl;
    bfs(root);
    cout << endl;


    if(isHeightBalanced(root).balance) {
        cout << "Balanced";
    }
    else {
        cout << "Not Balanced" << endl;
    }

    int a[] = {1,2,3,4,5,6,7};
    int n = 7;
    node *rootN = buildTreefromArray(a, 0, n - 1);
    bfs(rootN);

    return 0;
}