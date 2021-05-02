#include <bits/stdc++.h>
using namespace std;
int amax(int a[],int n){
    int m=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>m) m=a[i];
    }return m;
}
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int M=amax(a,n);

    //initialise all elements by 0
    int freq[M + 1]={0};
    //this loop should run till n and not M as M is maximum element of array and can be out of range
    for(int i=0;i<n;i++) freq[a[i]]+=1;
    for(int i=0;i<=M;i++){
        while(freq[i]!=0){
            cout<<i<<" ";
            freq[i]--;
        }
    }
}
