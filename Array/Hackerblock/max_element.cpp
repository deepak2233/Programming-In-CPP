
#include<bits/stdc++.h>
using namespace std;

#define ll long long 
int main() {
	ll n,i;
	cin>>n;
	ll arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<*max_element(arr,arr+n)<<endl;
	return 0;
}
