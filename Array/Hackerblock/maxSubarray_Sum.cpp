#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n, best_sum=INT_MIN,sum=0;;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}

		for(int i=0;i<n;i++)
		{
			sum+=arr[i];
			if(best_sum<sum)
			{
				best_sum=sum;
			}
			if(sum<0)
			{
				sum=0;
			}
		}
		cout<<best_sum<<"\n";
	}
	return 0;
}
