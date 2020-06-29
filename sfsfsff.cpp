//prob d div 3 jun28
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,k;
		cin>>n>>k;
		vector<long long int> arr(n);
		map<long long int,long long int> m;
		for(long long int i=0;i<n;i++)
		{
			cin>>arr[i];
			long long int z=k-arr[i]%k;  //require
			if(arr[i]%k)
			m[z]++;
		}
		///input part has been done
		long long int maxi=0;
		for(auto i:m)
		{
			maxi=max(maxi, ( 1+ (m[i.first]-1)*k)+i.first ); 
		}
		cout<<maxi<<endl;
	}
}
