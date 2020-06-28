#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll int t;
	cin>>t;
	while(t--)
	{
		ll int n,k;
		cin>>n>>k;
		vector<ll int> arr(n);
		vector<pair<ll int,ll int> > prr(35);
		for(ll int i=0;i<35;i++)
		{
			prr[i].second=i;
		}
		for(ll int i=0;i<n;i++)
		{
			cin>>arr[i];
			ll int temp=arr[i];
			ll int pos=0;
			while(temp>0)
			{
				if(temp%2!=0)
				{
					prr[pos].first=prr[pos].first-pow(2,pos);
				}
				pos++;
				temp/=2;
			}
		//	prr[i].first=prr[i].first*-1;
		}
		sort(prr.begin(),prr.end());
		
		ll int res=0;
		ll int i=0;
		while(k--)
		{   
		   ll temp=abs(prr[i].second);  ///pos
		
			res+=pow(2,temp);
			i++;
		}
		cout<<res<<endl;
	}
}
