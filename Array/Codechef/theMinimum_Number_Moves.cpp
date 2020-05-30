#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio();
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	int n,opr=0;
	cin>>n;

	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	sort(arr,arr+n);

	for(int i=n-1;i>=1;i--)
	{	
	opr+=arr[i]-arr[0];
	}
	cout<<opr<<"\n";
}
    
}
