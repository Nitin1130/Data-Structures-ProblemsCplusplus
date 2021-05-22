#include <bits/stdc++.h>
using namespace std;
map<int, int> m;
bool myCompare(int a, int b){
    return m[a] < m[b];

}
vector<int> HashTrick(vector<int> arr) {
  
    vector<int> ans;
    int val = 0;
    for(int i =0 ; i < arr.size(); i++) {
        if(m.count(arr[i])) {
            m[arr[i]] = ++val;
        }
        else {
            m[arr[i]] = ++val;
            ans.push_back(arr[i]);
        }
    }
    sort(ans.begin(), ans.end(), myCompare);
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> a;
    for(int i = 0;i < n;i++) {
        int num;
        cin >> num;
        a.push_back(num);
    }
    vector<int> res = HashTrick(a);
    for(auto it = 0; it != res.size(); it++) {
        cout << res[it] << endl;
    }
    



    return 0;

}