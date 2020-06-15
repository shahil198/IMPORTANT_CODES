#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> arr(200003),has(200003);
		for(int i=1;i<=n;i++)
		{
			cin>>arr[i];
			has[arr[i]]=i;
		}
		int maxi=INT_MIN,mini=INT_MAX;
		string s="";
		for(int i=1;i<=n;i++)
		{
			mini=min(mini,has[i]);
			maxi=max(maxi,has[i]);
			if(maxi-mini+1==i)
			cout<<1;
			else
			cout<<0;
		}
		cout<<endl;
	}
}
