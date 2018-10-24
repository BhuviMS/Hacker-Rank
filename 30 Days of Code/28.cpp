#include<bits/stdc++.h>

using namespace std;

vector<string> string_split(vector<string> a,vector<string> b)
{
	vector<string> c;
	vector<string>::iterator d;
	string s="@gmail.com";	
	int x=0;
	for(d=b.begin();d<b.end();d++)
	{
		string k;
		for(int i=(((*d).length())-10);i<((*d).length());i++)
		{
			k+=(*d)[i];
		}
		if(k==s)
		{
			c.push_back(a[x]);	
		}
		x++;
	}
	sort(c.begin(),c.end());
	return c;
}

int main()
{
	vector<string> a;
	vector<string> b;
	vector<string> c;
	vector<string>::iterator k;
	int i,n;
	cin>>n;
	cin.ignore(numeric_limits<streamsize>::max(),'\n');
	for(i=0;i<n;i++)
	{
		string s1,s2;
		cin>>s1;
		a.push_back(s1);
		cin>>s2;
		b.push_back(s2);
	}
	
	c=string_split(a,b);
	for(k=c.begin();k<c.end();k++)
	cout<<*k<<endl;
	return 0;
		
}
