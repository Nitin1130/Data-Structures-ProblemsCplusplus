#include <iostream>
#include <algorithm>
using namespace std;
bool myCompare(pair<string, int> pair1, pair<string, int> pair2) {
    if(pair1.second == pair2.second) {
        return pair1.first < pair2.first;
    }
    return pair1.second > pair2.second;
}
int main() {
    int minSal, n;
    cin >> minSal >> n;
    pair<string, int> empName[n];
    string name;
    int sal;
    for(int i = 0; i < n; i++) {
        cin >> name >> sal;
        empName[i].first = name;
        empName[i].second = sal;
    }
    sort(empName, empName+n, myCompare);
    for(int i = 0; i < n; i++) {
        if(empName[i].second >= minSal) {
            cout << empName[i].first << " " << empName[i].second << endl;
        }
    }
    return 0;
}
