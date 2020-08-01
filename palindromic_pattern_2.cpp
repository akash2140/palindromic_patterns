#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	int n;
	cin>>n;

	cout<<"A"<<endl;
	int j;
	for(int i=2;i<=n;i++)
	{
		for(j=1;j<=i;j++)
			cout<<(char)(j+64);
		
		int k=j-2;
		for(;k>0;k--)
			cout<<(char)(64+k);
		
		cout<<endl;
		
	}
	
	
	return 0;
}
