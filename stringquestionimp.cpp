#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int n=s.length();
		int x;
		cin>>x;
	    map<char,int> m;
		for(int i=0;i<n;i++)
		{
			m[s[i]]++;
		}
		vector<int> arr(x+1);
		for(int i=1;i<=x;i++)
		{
			cin>>arr[i];
		}
		sort(s.begin(),s.end());
		//input part has been done
		vector<char> ans(x+1); ///to put the answerss
		for(int j=n-1;;)
		{
			vector<int> temp;
			int count=0;
			for(int i=1;i<=x;i++)
			{
				if(arr[i]==0)
				{
					count++;
					temp.push_back(i);
				}
			}
			if(!count)
			break;
			//////////////////////
			if(m[s[j]]<count)
			{
				j=j-m[s[j]];
				continue;
			}
			///////
			int z=j; ///
			j=j-m[s[z]]; //for new loop
			
			
			//////
			for(int k=1;k<=x;k++)
			{
				if(arr[k]==0)
				{
					ans[k]=s[z];
					z--;
					arr[k]=-1;
				}
				else
				{
					for(int l=0;l<temp.size();l++)
					{
						arr[k]=arr[k]-abs(k-temp[l]);
					}
				}
			}
		}
		for(int i=1;i<=x;i++)
		cout<<ans[i];
		cout<<endl;
		
		
	}
}
