#include<bits/stdc++.h>
#include<string>

using namespace std;

int main()
{
	string s;
	int no;
	getline(cin,s);
	try
	{
		no = atoi(s.c_str());
		cout<<no<<endl;
	}
	catch(...)
	{
		cout<<"Bad String"<<endl;
	}
	return 0;
}
