#include<bits/stdc++.h>

using namespace std;

int main()
{
	long n;
	int finalsum=0,sum=0;
	cin>>n;
	deque<int> binary;
	deque<int>::iterator itr;
	while(n>0)
	{	binary.push_back(n%2);
		n=n/2;
	}
	
	for(itr=binary.begin();itr!=binary.end();itr++)
	{	
		if(*itr==1)
		{
		sum++;
		if(finalsum<sum)	finalsum=sum;	
		}
		else if(*itr==0)	
		{
		if(finalsum<sum)	finalsum=sum;
		sum=0;
		}
	}
	cout<<finalsum<<endl;
	return 0;
}
