//to copy first 5 elements of ant string to other
#include<conio.h>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string s1,s2;
	int len;
	cout<<"Enter string 1: ";
	getline(cin,s1);
	cout<<"Enter string 2: ";
	getline(cin,s2);
	cout<<"\nS1: "<<s1;
	cout<<"\nS2: "<<s2;
	s2=s1.substr(0,5);
	cout<<"\nS1: "<<s1;
	cout<<"\nS2: "<<s2;	
}
