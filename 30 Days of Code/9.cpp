#include<bits/stdc++.h>

using namespace std;

long Factorial(long i)
{
	if(i>=0&&i<2)
	return 1;
	else
	return i*Factorial(i-1);
}

int main()
{
	long n;
	cin>>n;
	cout<<Factorial(n)<<endl;
	return 0;
	
}
