#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	int n;
	cin>>n;
	
	int j;
	for(int i=1;i<=n-1;i++)
		cout<<" ";
	cout<<"1"<<endl;
	
	for(int i=2;i<=n;i++)
	{
		for(int spaces=1;spaces<=n-i;spaces++)
			cout<<" ";
		
		for(j=1;j<=i;j++)
			cout<<j;
		
		int k=j-2;
		while(k>0)
		{
			cout<<k;
			k--;
		}
		cout<<endl;
			
	}	
	
	
	return 0;
}
