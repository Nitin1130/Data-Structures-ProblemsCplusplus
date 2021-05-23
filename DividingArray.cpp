#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main() {
ios_base:: sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n,x;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(n==1) {
            cout<<arr[0]<<" "<<arr[0]<<"\n";
        }
        else {
            sort(arr, arr+n);
            int minsum = 0,maxsum = 0;
            for(int i=0;i<n;i+=2) {
                minsum = minsum + abs(arr[i]-arr[i+1]);
            }
            int st = 0;
            int en = n-1;
            while(st<=en) {
                maxsum+=abs(arr[st]-arr[en]);
                st++;
                en--;
            }
            cout<<minsum<<" "<<maxsum<<"\n";
        }
    }
    return 0;
}
