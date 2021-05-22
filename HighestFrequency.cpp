#include<bits/stdc++.h>
using namespace std;

int mostFrequent(vector<int> arr) {
    unordered_map<int, int> hashMap;
    for(int i = 0; i < arr.size(); i++) {
        hashMap[arr[i]]++;
    }
    //find the max frequency
    int max_count = 0, res = -1;
    for(auto it : hashMap) {
        if(max_count < it.second) {
            res = it.first;
            max_count = it.second;
        }
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;
        v.push_back(num);
    }
    cout << mostFrequent(v);
}