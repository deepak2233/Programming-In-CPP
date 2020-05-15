#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		next_permutation(arr,arr+n);
		for(auto i : arr)
		{
			cout<<i<<" ";
		}
		cout<<"\n";
	}


	return 0;
}
