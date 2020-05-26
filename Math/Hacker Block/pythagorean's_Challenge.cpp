#include<bits/stdc++.h>
using namespace std;
#include<vector>

int main()
{
#ifndef ONLINE_JUDGE 
	freopen("input.text", "r", stdin); 
	freopen("output.text", "w", stdout); 
#endif
	int t;
	cin>>t;
	while(t--)
	{
	int n;
	cin>>n;
	for(int i=0;i*i<=n;i++)
	{
		for(int j=i;j*j<=n;j++)
		{
			if(i<=j && ((i*i + j*j )==n))
			{
				cout<<"("<<i<<","<<j<<")"<<"\n";
			}
			
		}
	}

	}

}
