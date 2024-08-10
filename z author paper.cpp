//5.A paper consists of 4 authors, but one author didn’t do any work but he wants to put his name in this paper. But others are not interested at the same time they want to add another author as a 5th author. How to identify the  Not worked for paper. Write a C++ code for the above scenario. 
#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct Author{
	string name;
	bool hascontributed;
};
void addauthor(Author authors[],int &authorcount,string &newauthor_name)
{
	authors[authorcount++]={newauthor_name,true};
}
void identify_noncontributors(Author authors[],int authorcount)
{
	cout<<"authors who did not contribute: ";
	for(int i=0;i<authorcount;i++)
	{
		if(!authors[i].hascontributed)
		{
			cout<<authors[i].name<<" ";
		}
	}
	cout<<endl;
}
int main()
{
	int max_authors=5;
	Author authors[max_authors];
	int authorcount=0;
	string name;
	char contributed;
	for(int i=0;i<4;i++)
	{
		cout<<"enter name of author:"<<i+1<<":";
		cin>>name;
		cout<<"did the author contributed?(y/n):";
		cin>>contributed;
		authors[authorcount++]={name,contributed=='y'||contributed=='y'};
	}
	identify_noncontributors(authors,authorcount);
	cout<<"enter name of the new 5th author:";
	cin>>name;
	addauthor(authors,authorcount,name);
	cout<<"updated list of authors:";
	for(int i=0;i<authorcount;i++)
	{
		cout<<authors[i].name<<" ";
	}
	cout<<endl;
	return 0;
}
