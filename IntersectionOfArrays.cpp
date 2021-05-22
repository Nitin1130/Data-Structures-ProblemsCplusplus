#include<bits/stdc++.h>
#define int long long
using namespace std;

vector<int> intersectTwoArrays(vector<int> arr1, vector<int> arr2, int n) {
    vector<int> v;
    unordered_map<int, int> m;
    int len = 1;
    for(int i = 0; i < n; i++) {
        if(m.find(arr1[i]) != m.end()) {
            m[arr1[i]]++;
        }
        else {
            m[arr1[i]] = 1;
        }
    }
    for(int i = 0; i < n; i++) {
        if(m.find(arr2[i]) != m.end()) {
            if(m[arr2[i]] >= 1) {
                m[arr2[i]]--;
                v.push_back(arr2[i]);
            }
        }
    }
    sort(v.begin(), v.end());
    return v;
}

int32_t main() {
    int n;
    cin >> n;
    vector<int> nums1;
    vector<int> nums2;
    
    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;
        nums1.push_back(num);
        
    }
    for(int i = 0; i < n; i++) {
        int num2;
        cin >> num2;
        nums2.push_back(num2);
    }
    vector<int> arr = intersectTwoArrays(nums1, nums2, n);
    cout << "[" << *arr.begin();
    for(auto it = arr.begin() + 1; it != arr.end(); it++) {
        cout  << ", " << *it;
    }
    cout << "]" << endl;
    return 0;
}