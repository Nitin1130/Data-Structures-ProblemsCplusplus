#include<bits/stdc++.h>
#define int long long
using namespace std;
int sumOfLength(vector<int> arr) {
    unordered_set<int> s;
    int j = 0, ans = 0;
    for(int i = 0; i < arr.size(); i++) {
        while(j < arr.size() && s.find(arr[j]) == s.end()) {
            s.insert(arr[j]);
            j++;
        }
        ans += ((j - i) * (j - i + 1))/ 2;
        s.erase(arr[i]);
    }
    return ans;
}

int32_t main() {
    int n;
    cin  >> n;
    vector<int> arr;
    for(int i = 0; i < n;i++) {
        int num;
        cin >> num;
        arr.push_back(num);
    }
    cout << sumOfLength(arr) << endl;
    return 0;
}