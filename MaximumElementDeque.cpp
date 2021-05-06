#include<bits/stdc++.h>
#define int long long
using namespace std;


int32_t main() {
    int n;
    int a[100000];
    int k;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cin >> k;


    // we have to process first k elements seperately
    deque<int> Q(k);
    int i;
    for(i = 0 ; i < k ; i++) {
        while(!Q.empty() && a[i] > a[Q.back()]) {
            Q.pop_back();
        }
        Q.push_back(i);
    }

    //process the remaining element
    for(; i < n; i++) {
        cout << a[Q.front()] << " ";

        //Remove the elements which are not the part of the window
        while(!Q.empty() && Q.front() <= i - k) {
            Q.pop_front();
        }


        //Remove the element which are not useful and are in window
        while(!Q.empty() && a[i] >= a[Q.back()]) {
            Q.pop_back();
        }

        //Add the new elements
        Q.push_back(i);
    }
    cout << a[Q.front()] << endl;
    return 0;
}