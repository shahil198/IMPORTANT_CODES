#include<bits/stdc++.h>
using namespace std;
int main()
{
	int  t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		vector<long long int> arr(n);
		long long int ans=0;
		for(long long int i=0;i<n;i++)
		{
			cin>>arr[i];
			if(i%2==0)
			ans+=arr[i];
		}
	//	cout<<"ans "<<ans<<endl;
		///now we are going to calculate diff on every swap of odd and even the we will find maximum sub array using kadens algo
	//	we have done twice bcz 01 23 45 also 12 34 if the size is even for odd-> 01 23 also 12 34...
		long long int maxsofar=0;
		long long int pre=0;
		for(int i=1;i<n;i+=2)
		{
			pre=max(pre+arr[i]-arr[i-1],0ll);
			maxsofar=max(maxsofar,pre);
		}
		long long int a=maxsofar;
		maxsofar=0;
		pre=0;
		for(long long int i=1;i<n-1;i+=2)
		{
			pre=max(pre+arr[i]-arr[i+1],0ll);
			maxsofar=max(maxsofar,pre);
		}
		a=max(a,maxsofar);
		cout<<max(ans,ans+a)<<endl;
	}
}
