//6.	Program to check the character is a vowel or consonant
#include <iostream>
using namespace std;
int main()
{
	char c;
	bool is_vowel;
	cout<<"enter a charcter to check vowel:";
	cin>>c;
	c=tolower(c);
	is_vowel=(c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
	if(is_vowel)
	{
		cout<<c<<" is a vowel ";
	}
	else if(c>='a' && c<='z')
	{
		cout<<c<<" is a consonant";
	}
	else{
		cout<<c<<" is not a alphabetical letter";
	}
	return 0;
}
