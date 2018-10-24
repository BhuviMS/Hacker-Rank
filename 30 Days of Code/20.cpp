#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
    	cin >> a[a_i];
    }
    int i,j,numSwaps,totalSwaps=0;
    for(i=0;i<n;i++)
    {
        numSwaps=0;
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
                numSwaps++;
            }
        }
        totalSwaps+=numSwaps;
        if(numSwaps==0)    break;
    }
        cout<<"Array is sorted in "<<totalSwaps<<" swaps."<<endl;
    cout<<"First Element: "<<a[0]<<endl;
    cout<<"Last Element: "<<a[n-1]<<endl;
    // Write Your Code Here
    return 0;
}
