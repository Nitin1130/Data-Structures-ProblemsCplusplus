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

istream& operator>>(istream&is, node *root) {
    
    return is;
}

ostream& operator<<(ostream& os, node *root) {
    levelOrderPrint(root);
    return os;
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

int printAtDistanceK(node *root, node *target, int k) {
    if(root == NULL) {
        return -1;
    }

    //reach the target node
    if(root==target) {
        printKthLevel(target, k);
        return 0;
    }
    //next step - ancestor
    int DL = printAtDistanceK(root->left, target, k);
    if(DL != -1) {
        //Again there are two cases
        //Ancestor itself or you need to go the right
        if(DL + 1 == k) {
            cout << root->data << " ";

        }
        else {
            printKthLevel(root->right, k - 2 - DL);
        }
        return 1 + DL;
    }
    int DR = printAtDistanceK(root->right, target, k) ;
        if(DR != -1) {
            if(DR + 1 == k) {
                cout << root->data << " ";
            }
            else {
                printKthLevel(root->left, k - 2 - DR);
            }
            return 1 + DR;
        }
        return -1;
    }



int main () {
    node * root = NULL;
    cin >> root;
    node* target = root->left->left;
    cout << root << endl;
    int k;
    cin >> k;
    printAtDistanceK
    return 0;
}