int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		double h,c,t;
		cin>>h>>c>>t;
		double first=abs(h-t);
		double second=abs((h+c)/2-t);
		int res=1;
	/*	if(first<second)
		{
			cout<<"1\n";
			continue;
		}*/
		if(second<first)
		{
			res=2;
			first=second;
		}
		if((h+c)!=2*t)
		{
			double value=(t-c)/(2*t-h-c);
			double k1=ceil(value);
			double k2=floor(value);
			if(k2>1)
			{
				double vatk2=abs(((k2*h)+(k2-1)*c)/(2*k2-1)-t);
				if(vatk2<first)
				{
					res=k2*2-1;
					first=vatk2;
				}
			}
			if(k1>1)
			{
				double vatk1=abs(((k1*h)+(k1-1)*c)/(2*k1-1)-t);
				if(vatk1<first)
				{
					res=k1*2-1;
					first=vatk1;
				}
			}
		}
		cout<<res<<endl;
	}
}
