#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	cin.ignore(numeric_limits<streamsize>::max(),'\n');
	int a;
	int i;
	stack<int> a_reverse;
	for(i=0;i<n;i++)
	{
			cin>>a;
		a_reverse.push(a);
	}
	for(i=0;i<n;i++)
	{
		cout<<a_reverse.top()<<" ";
		a_reverse.pop();
	}
	return 0;
}
