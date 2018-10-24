#include<bits/stdc++.h>
#include<iostream>

using namespace std;

class Person
{
	public:
		Person(int initialAge);
		void yearPasses();
		void amIOld();
	private:
		int age;
};

Person::Person(int initialAge)
{
	if(initialAge<=0)	
	{
		age=0;
		cout<<"Age is not valid, setting age to 0."<<endl;
	}
	else	age=initialAge;
}

void Person::yearPasses()
{
	age++;	
}

void Person::amIOld()
{
	if(age<13) cout<<"You are young."<<endl;
	else if(age>=13&&age<18) cout<<"You are a teenager."<<endl;
	else cout<<"You are old."<<endl;
}
int main()
{
	int x,age,i;
	cin>>x;
	cin.ignore(numeric_limits<streamsize>::max(),'\n');
	while(x>0)
	{
		cin>>age;
		Person p(age);
		p.amIOld();
		for(i=0;i<3;i++)
		{
			p.yearPasses();
		}
		p.amIOld();
		cout<<"\n";
		x--;
	}
	return 0;
}
