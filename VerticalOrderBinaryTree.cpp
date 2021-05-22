#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node *left, *right;
        Node(int d) {
            
            data = d;
            left = right = NULL;
        }
       

};

Node* buildTreeLevelWise() {
    int d;
    cin >> d;
    Node* root = new Node(d);
    queue<Node*> q;
    q.push(root);
    while(!q.empty()) {
        Node* f = q.front();
        q.pop();
        int c1, c2;
        cin >> c1 >> c2;


        if(c1 != -1) {
            f->left = new Node(c1);
            q.push(f->left);
        }
        if(c2 != -1) {
            f->right = new Node(c2);
            q.push(f->right);
        }
    }
    return root;
}

void getVerticalOrder(Node* root, int hd, map<int, vector<int>> &m) {
    //base case 
    if(root == NULL) {
        return;
    }

    //store current node in map 'm'
    m[hd].push_back(root->data);
    getVerticalOrder(root->left, hd - 1, m);
    getVerticalOrder(root->right, hd + 1, m);
}

void printVerticalOrder(Node *root) {
    map<int , vector<int>> m;
    int hd = 0;
    getVerticalOrder(root, hd, m);
    for(auto it = m.begin(); it != m.end(); it++) {
        for(int i = 0; i < it->second.size(); i++) {
            cout << it->second[i] << " ";
        }
        cout << endl;
    }
}



int main() {
    int n;
    cin >> n;
    Node *root = buildTreeLevelWise();
    printVerticalOrder(root);
    return 0;
}