#include<bits/stdc++.h>

using namespace std;

template<class item>
void printArray(vector<item> a)
{
	int i;
	for(i=0;i<a.size();i++)
	cout<<a[i]<<endl;
}

int main()
{
	int n,x,i;
	cin>>n;
	vector<int> a(n);
	for(i=0;i<n;i++)
		cin>>a[i];
	printArray(a);
	
	return 0;
}
