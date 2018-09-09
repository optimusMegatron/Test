#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"please input a number:";
	cin>>n;
	if(n<2)
	{
		cout<<"***NO***";
	}
	
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		{
		     cout<<n<<"  "<<"---It's not a primer number ---";
		     return 1;
		}
	}
	
	cout<<n<<"  "<<"---It's a primer number---";
	return 0;
	
}











