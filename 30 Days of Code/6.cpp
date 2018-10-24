#include<bits/stdc++.h>

using namespace std;

int main()

{
	int n,i,j,k;
	cin>>n;
	cin.ignore(numeric_limits<streamsize>::max(),'\n');
	string s[n];
	for(i=0;i<n;i++)
	{
		getline(cin,s[i]);
	}
	queue<char> oddq;
	queue<char> evenq;
	for(i=0;i<n;i++)
	{
		for(j=0;j<s[i].length();j++)
		{
			if(j%2==0) evenq.push(s[i][j]);
			else oddq.push(s[i][j]);
		}
		while(!evenq.empty())
		{
			cout<<evenq.front();
			evenq.pop();
		}
		cout<<" ";
		while(!oddq.empty())
		{
			cout<<oddq.front();
			oddq.pop();
		}
		cout<<endl;

		
	}
	return 0;
}
