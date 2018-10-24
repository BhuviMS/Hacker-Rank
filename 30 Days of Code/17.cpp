#include<bits/stdc++.h>

using namespace std;

class Calculator
{
	public:
		int power(int n,int p)
		{
			if(n<0||p<0)	throw invalid_argument("n and p should be non-negative");
			if(p==0) return 1;
			else if(p==1)	return n;
			else	return n*power(n,p-1); 
		}
	
};

int main()
{
	Calculator myCalculator;
	int T,n,p,ans;
	cin>>T;
	while(T-->0)
	{
		if(scanf("%d %d",&n,&p)==2)
		{
			try
			{
				ans=myCalculator.power(n,p);
				cout<<ans<<endl;
			}
			catch(exception& e)
			{
				cout<<e.what()<<endl;
			}
		}
	}
	return 0;
}
