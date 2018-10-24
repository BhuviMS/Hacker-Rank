
#include<bits/stdc++.h>
#include<map>

using namespace std;

int main()
{
	map<string,string> phonebook;
	map<string,string>::iterator it;
	int i,n;
	string name,number;
	cin>>n;
	cin.ignore(numeric_limits<streamsize>::max(),'\n');
	for(i=0;i<n;i++)
	{
	cin>>name;
	cin>>number;
	phonebook[name]=number;
	}
	while(cin>>name)
	{
		if(distance(phonebook.find(name),phonebook.end())!=0)	
		{
			cout<<name<<"="<<phonebook.find(name)->second<<endl;
		}
		else
		cout<<"Not found"<<endl;
	}
	
	return 0;
}
