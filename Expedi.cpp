#include<bits/stdc++.h>
using namespace std;
#define int long long int
bool comp(pair<int,int> a,pair<int,int> b)
{
	return a.first>b.first;
}
signed main () {
	int n;
	cin>>n;
	vector<pair<int,int> >v;
	int a,b;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		v.push_back({b,a});
	}
	int l,p;
	cin>>l>>p;
	if(p>=l)
	{
		cout<<"0\n";
		return 0;
	}
	sort(v.begin(),v.end(),comp);
	int cnt = 0;
	for(auto x:v)
	{
		p+=x.first;
		cnt++;
		if(l<=p)
		{	
			break;
		}
	}
	cout<<cnt<<"\n";
	return 0;
}