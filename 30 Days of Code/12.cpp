#include<bits/stdc++.h>

using namespace std;

class Person
{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstname,string lastname,int identification)
		{
			this->firstName=firstname;
			this->lastName=lastname;
			this->id=identification;
		}
		void printPerson()
		{
			cout<<"Name: "<<lastName<<","<<firstName<<"\nID: "<<id<<endl;
		}
};

class Student : public Person
{
	private:
		vector<int> testScores;
	public:
		Student(string firstname,string lastname,int identification,vector<int> testscores):Person(firstname,lastname,identification),testScores(testscores)
		{
		}
		char calculate()
		{
			int n=0,sum=0;
			vector<int>::iterator it;
			for(it=testScores.begin();it!=testScores.end();it++)
			{
				n++;
				sum+=*it;
			 } 
			 sum=sum/n;
			 if(sum>=90&&sum<=100)	return 'O';
			 else if(sum>=80&&sum<90) return 'E';
			 else if(sum>=70&&sum<80) return 'A';
			 else if(sum>=55&&sum<70) return 'P';
			 else if(sum>=40&&sum<55) return 'D';
			 else return 'T';
		}
};

int main()
{
	string firstname;
	string lastname;
	int id;
	int n,i;
	vector<int> testscores;
	cin>>firstname>>lastname>>id;
	cin>>n;
	for(i=0;i<n;i++)
	
		cin>>testscores[i];
	
	Student* s=new Student(firstname,lastname,id,testscores);
	s->printPerson();
	cout<<"Grade: "<<s->calculate()<<endl;
	return 0;
}
