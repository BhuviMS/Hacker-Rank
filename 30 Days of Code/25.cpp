#include<bits/stdc++.h>

using namespace std;

bool isPrime(int x)
{
	if(x<=1)	return false;
	else
	{
		int i;
		bool k=true;
		for(i=2;i<=sqrt(x);i++)
		{
			if(x%i==0)
			{
				k=false;
				break;
			}
		}
		return k;
	}
}

int main()
{
	int N;
	cin>>N;
	int i;
	for(i=1;i<=N;i++)
	{
		int x;
		cin>>x;
		if(isPrime(x))	cout<<"Prime"<<endl;
		else cout<<"Not prime"<<endl;
	}
	return 0;
}
