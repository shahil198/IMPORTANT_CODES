#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> arr(n);
	map<int,int> m,m2;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int start=2002,end=2002;
	//int i;
	for( int i=0;i<n-1;i++)
	{   
	   int val=arr[i];
	    if( m.find(val) == m.end())//mtlb map me nahi hahi
	    {
		
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]==arr[i] )//&& m.find(arr[j])==m.end())
			{
				m.insert({arr[j],1});
				int x=j;
				if(start=2002&&end==2002)
				{
					start=x;
					end=x;
				}
				else
				{
				
				start=min(start,x);
				end=max(end,x);
			    }
			}
		}
		
	    }
	}
	if(start==2002 && end==2002)
	{
		cout<<"0\n";
		return 0;
	}
	int first=end-start+1;
	int start1=2002,end1=2002;
	for(int i=n-1;i>0;i--)
	{
		for(int j=i-1;j>=0;j--)
		{
			if(m2.find(arr[i])==m2.end())
			{
				if(arr[i]==arr[j])
				{
					m2.insert({arr[j],1});
					int y=j;
					if(start1==2002&&end1==2002)
					{
						start1=j;
						end1=j;
					}
					else
					{
					
					start1=min(start1,y);
					end1=max(end1,y);
				    }
				}
			}
		}
	}
	if(start1==2002 && end1==2002)
	{
		cout<<"0\n";
		return 0;
	}
	
	int second=end-start+1;
	cout<<min(first,second)<<endl;
}
