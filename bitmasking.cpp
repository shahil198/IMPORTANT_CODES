#include<bits/stdc++.h>
using namespace std;
int main()
{
  int x;
  cin>>x;
  vector<int> arr(x);
  for(int i=0;i<x;i++)
  {
   cin>>arr[i];
   };
  int temp=1<<x;
  vector<vector<int> > ans(temp);
  for(int i=0;i<temp;i++)
  {
  for(int j=0;j<x;j++)
  {
    int per=1<<j;
    if(per & i)
    ans[i].push_back(arr[j]);
  }
  }
  cout<<"RES:\n";
  for(int i=0;i<temp;i++)
  {
    for(int j=0;j<ans[i].size();j++)

    {
    cout<<ans[i][j]<<" ";
    }
    cout<<endl;
  }
}
