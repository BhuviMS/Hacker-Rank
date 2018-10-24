#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,x=1;
	cin>>n;
	cin.ignore(numeric_limits<streamsize>::max(),'\n');
	if(n>0)
	{
		while(x<=10)
		{
			cout<<n<<" x "<<x<<" = "<<n*x<<endl;
			x++;
			}	
	}
	else cout<<"Invalid Number for a Multiplication Table!"<<endl;	
	return 0;
}
