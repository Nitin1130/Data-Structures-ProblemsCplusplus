#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

node *build(string s)
{
    if (s == "true")
    {
        int d;
        cin >> d;
        node *root = new node(d);
        string l;
        cin >> l;
        if (l == "true")
        {
            root->left = build(l);
        }
        string r;
        cin >> r;
        if (r == "true")
        {
            root->right = build(r);
        }
        return root;
    }
    return NULL;
}

pair<int,bool> isHeightBalancedOptimised(node *root)
{
    // Write your code here
    pair<int,bool> p;
    if(root == NULL) {
        p.first = -1;
        p.second = 1;
        return p;
    }
    pair<int,bool> left = isHeightBalancedOptimised(root->left);
    pair<int, bool> right = isHeightBalancedOptimised(root->right);
    p.first = max(left.first, right.first) + 1;
    if(left.first - right.first <= 1 && left.second && right.second) {
        p.second = true;
    }
    else {
        p.second = false;
    }
    return p;
}

int main()
{
    node *root = build("true");

    cout << boolalpha << isHeightBalancedOptimised(root).second;

    return 0;
}
