#include<iostream>
#include<Math.h>
using namespace std;

int main()
{
	int n,k;
	cout<<"Please input a number:";
	cin>>n;
	k=sqrt(n);
	for(int i=2;i<k;i++)
	{
		if(n%i==0)
		cout<<"No";
		else	
		cout<<"Yes";
	}
}












