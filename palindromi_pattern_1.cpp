#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	int n;
	cin>>n;
	int j;
	cout<<"1"<<endl;
	for(int i=2;i<=n;i++)
	{
		for(j=1;j<=i;j++)
			cout<<j;
		
		int k=j-2;
		for(;k>0;k--)
			cout<<k;
		cout<<endl;
	}
	
	return 0;
}
