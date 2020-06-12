#include<bits/stdc++.h>
using namespace std;
int main()
{
	
		int n;
		cin>>n;
		vector<int>arr(n),brr(n);
		unordered_map<int,int> m;
		for(int i=0;i<n;i++)
	    cin>>arr[i];
	    for(int i=0;i<n;i++)
	    {
	    	cin>>brr[i];
	    	m.insert({brr[i],i});
		}
		vector<int> has(n+1,0);
		for(int i=0;i<n;i++)
		{
			int temp=(i-m[arr[i]]+n)%n;
			has[temp]++;
		}
		cout<<*max_element(has.begin(),has.end())<<endl;
	
}
