#include<bits/stdc++.h>

using namespace std;

int main()
{	
	vector<int> maxglass;
	vector<int> currentglass;
	int a[6][6];
	int i,j,k=0,u,v;
	int currentsum,maxsum=-65;
	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			cin>>a[i][j];
		}
	}
	
	for(i=0;i<4;i++)
	{
		for(v=0;v<4;v++)
		{
		
		currentsum=0;
		k=0;
		for(u=i;u<(i+3);u++)
		{
			if(k==0)
			{
				for(j=v;j<(v+3);j++)
						{
							currentglass.push_back(a[u][j]);
							currentsum+=a[u][j];
						}
				k=1;
			
			}
			else if(k==1)
			{
				currentglass.push_back(a[u][v+1]);
				currentsum+=a[u][v+1];
				k=0;
			}
		}
		if(currentsum>maxsum)
		{
			maxsum=currentsum;
			maxglass.clear();
			copy(currentglass.begin(),currentglass.end(),back_inserter(maxglass));				
		}
		currentglass.clear();
		}
	}
	cout<<maxsum<<endl;
	
	return 0;
}
