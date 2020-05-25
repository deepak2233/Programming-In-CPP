#include<bits/stdc++.h>
using namespace std;


int fact(int n)
{
	if(n==0 || n==1)
	{
		return 1;
	}
	return n*fact(n-1);
}

int nCr(int n, int r)
{
	return(fact(n)/fact(n-r)/fact(r));
}

int main()
{
#ifndef ONLINE_JUDGE 
	freopen("input.text", "r", stdin); 
	freopen("output.text", "w", stdout); 
#endif

	int n,k,r=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		k=1;
		r=0;
		for(int j=1;j<=2*n-1;j++)
		{
			if(j>=n+1-i && j<= n-1+i && k)
			{
				cout<<nCr(i-1,r);
				r++;
				k=0;
			}
			else{
				cout<<" ";
				k=1;
			}

		}
		cout<<"\n";
	}
}
