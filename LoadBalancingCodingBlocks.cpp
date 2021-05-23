#include <iostream>
using namespace std;
int main() {
    int n,max1=0,d=0,ans=0;;
    cin>>n;
    int a[100000];
    int load=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        load+=a[i];
    }
    if(load%n!=0){
        cout<<"-1";
    }
    else{
        load=load/n;
        int sum = 0;
        for(int i=0;i<n;i++){
            sum+=a[i];
            ans = abs(sum-(i+1)*load);
            max1=max(max1,ans);
        }
    }
    cout<<max1;
}
