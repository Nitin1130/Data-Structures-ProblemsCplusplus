#include <bits/stdc++.h>
using namespace std;
class TrieNode {
    public:
        TrieNode *left; // represents 0
        TrieNode *right; // represents 1
        vector<int> v;
        TrieNode() {
            left = right = NULL;
        }

};

class Trie {
    private:
        TrieNode *root;
    public:
        Trie() {
            root = new TrieNode();
        }
void insert(int n, int index) {
    TrieNode *curr = root;
    for(int i = 31; i >= 0; i--) {
        int bit = ( n >> i) & 1;
        if(bit  == 0) {
            if(curr -> left == NULL) {
                curr -> left = new TrieNode();
            }
            curr -> v.push_back(index);
            curr = curr -> left;
        }
        //bit is one
        else {
            if(curr -> right == NULL) {
                curr -> right = new TrieNode();
            }
            curr -> v.push_back(index);
            curr = curr -> right;
        }
    }
    curr -> v.push_back(index);
}

bool binarySearchRange(vector<int> v, int left, int right) {
    int s = 0;
    int e = v.size() - 1;
    while ( s <= e) {
        int mid = (s + e) / 2;
        int val = v[mid];
        if(val >= left && val <= right) {
            return true;
        }
        else if(val < left) {
            s = mid + 1;
        }
        else if(val > right) {
            e = mid - 1;
        }
    }
    return false;
}

int findMaxPair( int value, int left, int right) {
    TrieNode * curr = root;
    int currXor = 0;
    for(int j = 31; j >= 0; j--) {
        int bit = (value >> j) & 1;
        if(bit == 0) {
            if(curr -> right != NULL && binarySearchRange(curr -> right -> v, left, right)) {
                curr = curr -> right;
                currXor += (1 << j);
            }
            else {
                curr = curr -> left;
            }
        }
        else {
            if(curr -> left != NULL && binarySearchRange(curr -> left -> v, left, right)) {
                curr = curr -> left;
            }
            else {
                curr = curr -> right;
                currXor += (1 << j);
            }
        }
    }
    return currXor;
}
};

int main() {
    int q;
    cin >> q;
    Trie t;
    int index  = 0;
    while(q--) {
        int type;
        cin >> type;
        if(type == 0) {
            int x;
            cin >> x;
            t.insert(x, index++);
        }
        else {
            int l, r, x;
            cin >> l >> r >> x;
            cout << t.findMaxPair(x, l - 1, r - 1) << endl;
        }
    }
    return 0; 
}