#include<bits/stdc++.h>

using namespace std;

class Solution
{
	public:
		void pushCharacter(char c)	
		{
		b.push(c);
		}
		void enqueueCharacter(char c)	
		{
		a.push(c);
		}
		char popCharacter() 
		
		{
			char c=b.top();		
			b.pop();
			return c;
		}
		char dequeueCharacter()	
		{
			char c=a.front();
			a.pop();
			return c;
		}
	private:
		queue<char> a;
		stack<char> b;
};

int main()
{
	string s;
	int i;
	
	getline(cin,s);
	
	Solution obj;
	bool isPalindrome=true;
	
	for(i=0;i<s.length();i++)
	{
		obj.pushCharacter(s[i]);
		obj.enqueueCharacter(s[i]);
	}
	
	for(i=0;i<s.length()/2;i++)
	{
		if(obj.popCharacter()!=obj.dequeueCharacter())
		{
			isPalindrome=false;
			break;
		}
	}
	
	if(isPalindrome)	cout<<"The word, "<<s<<", is a palindrome.";
	else	cout<<"The word, "<<s<<", is not a palindrome.";
	
	return 0;
}
