#include<bits/stdc++.h>
using namespace std;

#define INT_SIZE 32

class TrieNode{
    public:
        TrieNode *left, *right;
};

void insert(TrieNode *root, int n) {
    TrieNode *curr = root;
    for(int i = 31; i >= 0; i--) {
        int bit = (n >> i) & 1;
        if(bit == 0) {
            if(curr->left == NULL) {
                curr->left = new TrieNode();
            }
            curr = curr->left;
        }
        else {
            if(curr->right == NULL) {
                curr->right = new TrieNode();
            }
            curr = curr->right;
        }
    }
}

int maxXor(TrieNode *root, int elem) {
    TrieNode *curr = root;
    int val = elem;
    int currXor = 0;
    for(int i = 31; i >= 0; i--) {
        int bit = (val >> i) & 1;
        if(bit == 0) {
            if(curr->right != NULL) {
                currXor += (int) pow(2, i);
                curr = curr -> right;
            }
            else {
                curr = curr -> left;
            }
        }
        else {
            if(curr -> left != NULL) {
                curr = curr -> left;
            }
            else {
                currXor += (int) pow(2, i);
                curr = curr -> right;
            }
        }
    }
    return  currXor;
}


int main() {
    int n;
    cin >> n;
    int a[1000];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    TrieNode *root = new TrieNode();
    int result = INT_MIN;
    int preXor = 0;
    insert(root, preXor);
    for(int i = 0; i < n; i++) {
        preXor = preXor ^ a[i];
        insert(root, preXor);
        int x = maxXor(root, preXor);
        x = x ^ preXor;
        result = (result < x) ? x : result;
    }
    cout << result;
    return 0;
}