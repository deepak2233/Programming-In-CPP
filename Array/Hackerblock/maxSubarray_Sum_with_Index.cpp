#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n, best_sum=INT_MIN,sum=0,s=0,start_index=0,end_index=0;
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
				start_index=s;
				end_index=i;
			}
			if(sum<0)
			{
				sum=0;
				s=i+1;
			}
		}
		cout<<"Starting index of max sub array:- "<<start_index<<"\n";
		cout<<"Ending index of max sub array:-"<<end_index<<"\n";
		cout<<"Max sum of sub array"<<best_sum<<"\n";
		cout<<"\t\t";
	}
	return 0;
}
