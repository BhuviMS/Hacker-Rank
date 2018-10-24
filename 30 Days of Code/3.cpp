#include<bits/stdc++.h>
using namespace std;

int main()
{
	int N,x;
	cin>>N;
	cin.ignore(numeric_limits<streamsize>::max(),'\n');
	if(!(N%2==0)) x=1;
	else if(N%2==0&&N>=2&&N<=5) x=2;
	else if(N%2==0&&N>=6&&N<=20) x=3;
	else if(N%2==0&&N>20) x=4;
	switch(x)
	{
		case 1: cout<<"Weird"<<endl; break;
		case 2: cout<<"Not Weird"<<endl; break;
		case 3: cout<<"Weird"<<endl; break;
		case 4: cout<<"Not Weird"<<endl; break;
		default: break;
	}
	return 0;
}
