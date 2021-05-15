#include<bits/stdc++.h>
using namespace std;

typedef pair<int, pair<int, int>> node;
vector<int> mergeKSortedArrays(vector<vector<int>> arr) {
    vector<int> result;

    priority_queue<node, vector<node>, greater<node>> pq;
    //insert the 0th element of every array in pq
    for(int i = 0; i < arr.size(); i++) {
        pq.push({arr[i][0], {i, 0}});
    }

    //remove element one by one
    while(!pq.empty()) {
        node current = pq.top();
        pq.pop();
        int element = current.first;
        int x = current.second.first;
        int y = current.second.second;
        result.push_back(element);
        if(y + 1 < arr[x].size()) {
            pq.push({arr[x][y + 1], {x,y + 1}});
        }
    }
    return result;

}


int main() {
    int n, k;
    cin >> k >> n;
    vector<vector<int>> arr;
    for(int i = 0; i < k; i++) {
        vector<int> v1;
        for(int j = 0; j < n; j++) {
            int num;
            cin >> num;
            v1.push_back(num);
        }
        arr.push_back(v1);
    }

    vector<int> res = mergeKSortedArrays(arr);
    for(auto it: res) {
        cout << it << " ";
    }
    return 0;
}