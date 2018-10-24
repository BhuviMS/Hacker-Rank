#include<bits/stdc++.h>

using namespace std;


class Difference
{
	private:
		vector<int> elements;
		
	public:
		int maximumDifference;
		vector<int>::iterator it;
		Difference(vector<int> e)
		{
			copy(e.begin(),e.end(),back_inserter(elements));
		}
		void computeDifference()
		{
			for(it=elements.begin();it!=elements.end();it++)
			{
				*it=abs(*it);
			}
			sort(elements.begin(),elements.end());
			maximumDifference=*(elements.end()-1)-elements[0];
		}
};

int main()
{
	int n,x;
	cin>>n;
	vector<int> en;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		en.push_back(x);
	}
	Difference d(en);
	
	d.computeDifference();
	
	cout<<d.maximumDifference<<endl;
	return 0;
}
