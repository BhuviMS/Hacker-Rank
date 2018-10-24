#include<bits/stdc++.h>

using namespace std;

class AdvancedArithmetic
{
	public:
		virtual int divisorSum(int n)=0;
};

class Calculator:public AdvancedArithmetic
{
	public:
		int divisorSum(int n)
		{
			if(n==1)	return 1;
			else
			{
			int i,sum=0;
			for(i=2;i<=n/2;i++)
			{
				if(n%i==0) sum+=i;	
			}	
			return sum+n+1;
			}
		}
};

int main()
{
	int n;
	
	cin>>n;
	
	AdvancedArithmetic *mycalculator=new Calculator();
	cout<<"I implemented: AdvancedArithmetic\n"<<mycalculator->divisorSum(n);
	return 0;
}

