#include<iostream>
using namespace std;

int main()
{
	int n,m;
	
	int a[100];
	int b[100];
	cout<<"A as: ";
	cin>>n;
	cout<<endl;
	for(int t=0;t<n;t++){
		cin>>a[t];
		
	}
	cout<<"B as :";
	cin>>m;
	cout<<endl;
	for(int h=0;h<m;h++)
	{
		cin>>b[h];
	}
	int i,j;
	for (i = 0;i < n;i++)
	{
		int t=0;
		for (j = 0;j < m;j++)
		{
			t+=1;
			if (a[i]==b[j])
			{
			    break;
			}
			
			if(t==m){
				cout<<a[i]<<endl;
			}
			
        }
    }
}
